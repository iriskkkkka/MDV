#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <stdexcept>
#include <regex>
#include <cstdint> 

class ISA {
private:
    struct InstructionInfo {
        uint8_t alusel;       
        bool isImmediate;     
        uint8_t condition;    
        bool isBranch;         

        InstructionInfo(uint8_t a = 0, bool imm = false, uint8_t cond = 0, bool branch = false)
            : alusel(a), isImmediate(imm), condition(cond), isBranch(branch) {}
    };

    std::map<std::string, InstructionInfo> instructionMap;
    std::map<uint16_t, std::string> reverseInstructionMap; 

public:
    ISA() {
        instructionMap.insert(std::make_pair("add", InstructionInfo(0b000, false)));
        instructionMap.insert(std::make_pair("add_imm", InstructionInfo(0b000, true)));
        instructionMap.insert(std::make_pair("sub", InstructionInfo(0b001, false)));
        instructionMap.insert(std::make_pair("sub_imm", InstructionInfo(0b001, true)));
        instructionMap.insert(std::make_pair("and", InstructionInfo(0b010, false)));
        instructionMap.insert(std::make_pair("and_imm", InstructionInfo(0b010, true)));
        instructionMap.insert(std::make_pair("or", InstructionInfo(0b011, false)));
        instructionMap.insert(std::make_pair("or_imm", InstructionInfo(0b011, true)));
        instructionMap.insert(std::make_pair("xor", InstructionInfo(0b100, false)));
        instructionMap.insert(std::make_pair("xor_imm", InstructionInfo(0b100, true)));
        instructionMap.insert(std::make_pair("shl", InstructionInfo(0b101, false)));
        instructionMap.insert(std::make_pair("shl_imm", InstructionInfo(0b101, true)));
        instructionMap.insert(std::make_pair("shr", InstructionInfo(0b110, false)));
        instructionMap.insert(std::make_pair("shr_imm", InstructionInfo(0b110, true)));
        instructionMap.insert(std::make_pair("cmp", InstructionInfo(0b111, false)));
        instructionMap.insert(std::make_pair("cmp_imm", InstructionInfo(0b111, true)));

        instructionMap.insert(std::make_pair("bie", InstructionInfo(0, false, 0b00, true))); 
        instructionMap.insert(std::make_pair("big", InstructionInfo(0, false, 0b01, true))); 
        instructionMap.insert(std::make_pair("bil", InstructionInfo(0, false, 0b10, true))); 

        for (const auto& pair : instructionMap) {
            if (!pair.second.isBranch) {
                uint16_t key = (pair.second.alusel << 2) | (pair.second.isImmediate ? 0b01 : 0b00);
                reverseInstructionMap[key] = pair.first;
            }
        }
        reverseInstructionMap[0b00] = "bie"; 
        reverseInstructionMap[0b01] = "big"; 
        reverseInstructionMap[0b10] = "bil"; 
    }

    bool getInstructionInfo(const std::string& mnemonic, uint8_t& alusel, bool& isImmediate, uint8_t& condition, bool& isBranch) const {
        auto it = instructionMap.find(mnemonic);
        if (it == instructionMap.end()) {
            return false;
        }
        alusel = it->second.alusel;
        isImmediate = it->second.isImmediate;
        condition = it->second.condition;
        isBranch = it->second.isBranch;
        return true;
    }

    std::string getMnemonic(uint8_t alusel, bool isImmediate, uint8_t condition) const {
        if (condition != 0) { 
            uint16_t key = (condition == 0b00) ? 0b10 : (condition == 0b01) ? 0b00 : 0b10;
            auto it = reverseInstructionMap.find(key);
            return (it != reverseInstructionMap.end()) ? it->second : "UNKNOWN";
        } else { 
            uint16_t key = (alusel << 2) | (isImmediate ? 0b01 : 0b00);
            auto it = reverseInstructionMap.find(key);
            return (it != reverseInstructionMap.end()) ? it->second : "UNKNOWN";
        }
    }
};

class FileHandler {
public:
    static std::string readFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Cant open file: " + filename);
        }
        std::stringstream buffer;
        buffer << file.rdbuf();
        return buffer.str();
    }

    static void writeFile(const std::string& filename, const std::string& content) {
        std::ofstream file(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Cant open file: " + filename);
        }
        file << content;
    }
};

class Assembler {
private:
    const ISA& isa;

    uint8_t parseRegister(const std::string& reg) const {
        if (reg[0] != 'R' && reg[0] != 'r') {
            throw std::runtime_error("Invalid register format: " + reg);
        }
        try {
            uint8_t regNum = std::stoi(reg.substr(1));
            if (regNum > 7) {
                throw std::runtime_error("Register number out of range: " + reg);
            }
            return regNum;
        } catch (const std::invalid_argument&) {
            throw std::runtime_error("Invalid register: " + reg);
        }
    }

    uint8_t parseImmediate(const std::string& imm) const {
        try {
            int value = std::stoi(imm, nullptr, 0); 
            if (value < 0 || value > 255) {
                throw std::runtime_error("Immediate value out of range: " + imm);
            }
            return static_cast<uint8_t>(value);
        } catch (const std::invalid_argument&) {
            throw std::runtime_error("Invalid immediate value: " + imm);
        }
    }

public:
    Assembler(const ISA& isa_ref) : isa(isa_ref) {}

    std::string assemble(const std::string& assemblyCode) {
        std::stringstream result;
        std::istringstream stream(assemblyCode);
        std::string line;
        int lineNum = 0;

        while (std::getline(stream, line)) {
            ++lineNum;
            line = line.substr(0, line.find(';'));
            line.erase(0, line.find_first_not_of(" \t"));
            line.erase(line.find_last_not_of(" \t") + 1);

            if (line.empty()) continue;

            try {
                std::istringstream lineStream(line);
                std::string mnemonic, firstOperand, secondOperand;
                lineStream >> mnemonic;

                uint8_t alusel, condition;
                bool isImmediate, isBranch;
                if (!isa.getInstructionInfo(mnemonic, alusel, isImmediate, condition, isBranch)) {
                    throw std::runtime_error("Unknown instruction: " + mnemonic);
                }

                uint16_t instruction = 0;
                if (isBranch) {
                    // Parse only the immediate offset (e.g., #0x10)
                    lineStream >> firstOperand;
                    // Remove '#' if present (e.g., "#10" -> "10")
                    size_t hashPos = firstOperand.find('#');
                    if (hashPos != std::string::npos) {
                        firstOperand = firstOperand.substr(hashPos + 1);
                    }
                    uint8_t offset = parseImmediate(firstOperand);
                    instruction = (static_cast<uint16_t>(offset) << 4) | (condition << 2) | 0b10;
                } else {
                    lineStream >> firstOperand;
                    uint8_t rx = parseRegister(firstOperand);
                    if (isImmediate) {
                        lineStream >> secondOperand;
                        uint8_t immed = parseImmediate(secondOperand);
                        instruction = (static_cast<uint16_t>(rx) << 13) | (static_cast<uint16_t>(immed) << 5) | (static_cast<uint16_t>(alusel) << 2) | 0b01;
                    } else {
                        lineStream >> secondOperand;
                        uint8_t ry = parseRegister(secondOperand);
                        instruction = (static_cast<uint16_t>(rx) << 13) | (static_cast<uint16_t>(ry) << 10) | (static_cast<uint16_t>(alusel) << 2) | 0b00;
                    }
                }

                result << std::hex << std::setw(4) << std::setfill('0') 
                       << instruction << "\n";
            } catch (const std::runtime_error& e) {
                throw std::runtime_error("Assembly error at line " + std::to_string(lineNum) + ": " + e.what());
            }
        }

        return result.str();
    }
};

class Disassembler {
private:
    const ISA& isa;

public:
    Disassembler(const ISA& isa_ref) : isa(isa_ref) {}

    std::string disassemble(const std::string& machineCode) {
        std::stringstream result;
        std::istringstream stream(machineCode);
        std::string line;
        int lineNum = 0;

        while (std::getline(stream, line)) {
            ++lineNum;
            line.erase(0, line.find_first_not_of(" \t"));
            line.erase(line.find_last_not_of(" \t") + 1);

            if (line.empty()) continue;

            try {
                uint16_t instruction = std::stoi(line, nullptr, 16);
                uint8_t format = instruction & 0b11;
                uint8_t condition = (instruction >> 2) & 0b11; // Bits 3-2 for branch
                uint8_t alusel = (instruction >> 2) & 0b111; // For ALU, bits 4-2

                bool isImmediate = (format == 0b01);
                std::string mnemonic = (format == 0b10) ? isa.getMnemonic(0, false, condition) : isa.getMnemonic(alusel, isImmediate, 0);

                if (mnemonic == "UNKNOWN") {
                    throw std::runtime_error("Unknown instruction");
                }

                result << mnemonic;
                if (format == 0b10) { // Branch instruction
                    uint8_t offset = (instruction >> 4) & 0xFF;
                    result << " #0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(offset);
                } else {
                    result << " R" << static_cast<int>((instruction >> 13) & 0b111) << ", ";
                    if (isImmediate) {
                        uint8_t immed = (instruction >> 5) & 0xFF;
                        result << "0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(immed);
                    } else {
                        uint8_t ry = (instruction >> 10) & 0b111;
                        result << "R" << static_cast<int>(ry);
                    }
                }
                result << "\n";
            } catch (const std::invalid_argument&) {
                throw std::runtime_error("Invalid machine code at line " + std::to_string(lineNum) + ": " + line);
            } catch (const std::runtime_error& e) {
                throw std::runtime_error("Disassembly error at line " + std::to_string(lineNum) + ": " + e.what());
            }
        }

        return result.str();
    }
};

class AssemblerTool {
private:
    ISA isa;
    Assembler assembler;
    Disassembler disassembler;

    struct Options {
        std::string inputFile;
        std::string outputFile;
        bool assemble = false;
        bool disassemble = false;
    };

    Options parseArguments(int argc, char* argv[]) {
        Options opts;
        
        for (int i = 1; i < argc; ++i) {
            std::string arg = argv[i];
            if (arg == "-i" && i + 1 < argc) {
                opts.inputFile = argv[++i];
            } else if (arg == "-o" && i + 1 < argc) {
                opts.outputFile = argv[++i];
            } else if (arg == "-a") {
                opts.assemble = true;
            } else if (arg == "-d") {
                opts.disassemble = true;
            }
        }

        if (opts.inputFile.empty()) {
            throw std::runtime_error("Error: Input file (-i) is required");
        }
        if (!opts.assemble && !opts.disassemble) {
            throw std::runtime_error("Error: Either -a or -d flag must be provided");
        }
        if (opts.assemble && opts.disassemble) {
            throw std::runtime_error("Error: Cannot specify both -a and -d flags");
        }

        return opts;
    }

public:
    AssemblerTool() : assembler(isa), disassembler(isa) {}

    void run(int argc, char* argv[]) {
        try {
            Options opts = parseArguments(argc, argv);
            std::string input = FileHandler::readFile(opts.inputFile);
            std::string output;

            if (opts.assemble) {
                output = assembler.assemble(input);
            } else {
                output = disassembler.disassemble(input);
            }

            if (opts.outputFile.empty()) {
                std::cout << output;
            } else {
                FileHandler::writeFile(opts.outputFile, output);
            }
        } catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
            exit(1);
        }
    }
};

int main(int argc, char* argv[]) {
    AssemblerTool tool;
    tool.run(argc, argv);
    return 0;
}