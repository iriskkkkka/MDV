#include "BittyEmulator.h"
#include <fstream>
#include <sstream>
#include <cstdint>
#include <vector>
#include <iomanip>

bool BittyEmulator::LoadRom(const std::string& fname)
{
    std::ifstream fin(fname);
    std::string line;
    while (std::getline(fin, line)) {
        std::stringstream ss(line);
        uint16_t word;
        ss >> std::hex >> word;
        rom.push_back(word);
    }
    pc = 0;
    return !rom.empty();
}

uint16_t BittyEmulator::Fetch()
{
    if (pc >= rom.size()) {
        return 1; 
    }
    return rom[pc]; 
}

BittyEmulator::BittyEmulator() {
    for (int i = 0; i < 8; ++i) {
        registers[i] = 0;
    }
    std::ofstream fout("dataemulator.txt");
    if (fout.is_open()) {
        for (uint64_t i = 0; i < (1ULL << 16); ++i) {
            fout << "0000\n";
        }
        fout.close();
    }
}


uint16_t BittyEmulator::GetRegisterValue(uint16_t reg_num) {
    if (reg_num < 8) {
        return registers[reg_num];
    }
    return 0; 
}

 void BittyEmulator::Evaluate(uint16_t instruction){
    uint8_t format = (0b11) & instruction;
    uint8_t rx = ((0b111<<13) & (instruction)) >> 13;
    pc = pc + 1;

    if (format == 0b01) {
        uint8_t alusel = ((0b111 << 2) & instruction) >> 2; 
        uint8_t immed = ((0b11111111 << 5) & instruction) >> 5;
        uint16_t result = 0;
    
        switch (alusel) {
            case 0b000:
                result = registers[rx] + immed;
                registers[rx] = result;
                registers[8] = result; 
                break;
            case 0b001:
                result = registers[rx] - immed;
                registers[rx] = result;
                registers[8] = result; 
                break;
            case 0b010:
                result = registers[rx] & immed;
                registers[rx] = result;
                registers[8] = result; 
                break;
            case 0b011: 
                result = registers[rx] | immed;
                registers[rx] = result;
                registers[8] = result; 
                break;
            case 0b100:         
                result = registers[rx] ^ immed;
                registers[rx] = result;
                registers[8] = result;
                break;
            case 0b101: { 
                if (immed < 16) {
                    result = registers[rx] << immed;
                    registers[rx] = result;
                    registers[8] = result;
                } else {
                    registers[rx] = 0;
                    registers[8] = 0;
                }
                break;
            }
            case 0b110: { 
                if (immed < 16) {
                    result = registers[rx] >> immed;
                    registers[rx] = result;
                    registers[8] = result; 
                } else {
                    registers[rx] = 0;
                    registers[8] = 0; 
                }
                break;
            }
            case 0b111: 
                if (registers[rx] == immed) {
                    result = 0;
                } else if (registers[rx] > immed) {
                    result = 1;
                } else {
                    result = 2;
                }
                registers[rx] = result;
                registers[8] = result; 
                break;
            default:
                break;
        }
    } else if (format == 0b00) {
        uint8_t alusel = ((0b111 << 2) & instruction) >> 2; 
        uint8_t ry = ((0b111 << 10) & instruction) >> 10;
        uint16_t result = 0; 
    
        switch (alusel) {
            case 0b000:
                result = registers[rx] + registers[ry];
                registers[rx] = result;
                registers[8] = result; 
                break;
            case 0b001:
                result = registers[rx] - registers[ry];
                registers[rx] = result;
                registers[8] = result; 
                break;
            case 0b010:
                result = registers[rx] & registers[ry];
                registers[rx] = result;
                registers[8] = result; 
                break;
            case 0b011: 
                result = registers[rx] | registers[ry];
                registers[rx] = result;
                registers[8] = result;
                break;
            case 0b100:         
                result = registers[rx] ^ registers[ry];
                registers[rx] = result;
                registers[8] = result; 
                break;
            case 0b101: { 
                if (registers[ry] < 16) {
                    result = registers[rx] << registers[ry];
                    registers[rx] = result;
                    registers[8] = result; 
                } else {
                    registers[rx] = 0;
                    registers[8] = 0; 
                }
                break;
            }
            case 0b110: { 
                if (registers[ry] < 16) {
                    result = registers[rx] >> registers[ry];
                    registers[rx] = result;
                    registers[8] = result; 
                } else {
                    registers[rx] = 0;
                    registers[8] = 0; 
                }
                break;
            }
            case 0b111: 
                if (registers[rx] == registers[ry]) {
                    result = 0;
                } else if (registers[rx] > registers[ry]) {
                    result = 1;
                } else {
                    result = 2;
                }
                registers[rx] = result;
                registers[8] = result; 
                break;
            default:
                break;
        }
    } else if (format == 0b10) {
        uint8_t offset = ((0b11111111 << 4) & instruction) >> 4;
        uint8_t condition = ((0b11 << 2) & instruction) >> 2;
        uint16_t creg = registers[8]; 
    
        if (condition == 0b00 && creg == 0) {
            pc = offset; 
        } else if (condition == 0b01 && creg == 1) {
            pc = offset;
        } else if (condition == 0b10 && creg == 2) {
            pc = offset;
        } else{
            pc = pc;
        }
    } else if (format == 0b11) {
        uint8_t ls = ((0b1 << 2) & instruction) >> 2; 
        uint8_t ry = ((0b111 << 10) & instruction) >> 10;
        uint64_t mem_addr = registers[ry]; 

        if (ls == 0) { 
            std::ifstream fin("dataemulator.txt");
            std::string line;
            uint64_t current_line = 0;
            while (std::getline(fin, line) && current_line < mem_addr) {
                current_line++;
            }
            if (current_line == mem_addr) {
                std::stringstream ss(line);
                uint16_t value;
                ss >> std::hex >> value;
                registers[rx] = value;
            }
            fin.close();
        } else { 
            std::vector<std::string> lines;
            std::ifstream fin("dataemulator.txt");
            std::string line;
            while (std::getline(fin, line)) {
                lines.push_back(line);
            }
            fin.close();

            if (mem_addr < lines.size()) {
                std::stringstream ss;
                ss << std::hex << std::setw(4) << std::setfill('0') << registers[rx];
                lines[mem_addr] = ss.str();
            }
            std::ofstream fout("dataemulator.txt");
            for (const auto& l : lines) {
                fout << l << "\n";
            }
            fout.close();
        }
    
    
        
    }
    else{
        registers[rx] = 0;
    }    
 }