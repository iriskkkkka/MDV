#include <verilated.h>
#include "VCPU.h"
#include <iostream>
#include "../emulator/BittyEmulator.h"
#include "../BittyInstructionGenerator.h"
#include <bitset>

extern "C" uint16_t get_reg_val();

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VCPU* cpu = new VCPU;
    BittyInstructionGenerator instructionGen;
    BittyEmulator emulator;
    uint16_t instruction;

    cpu->clk = 0;
    cpu->rst = 1;
    cpu->eval();
    for (int i = 0; i < 2; i++) {
        cpu->clk = !cpu->clk;
        cpu->eval();
    }

    if (!emulator.LoadRom("program.hex")) {
        std::cerr << "Failed to load program.hex" << std::endl;
        delete cpu;
        return 1;
    }

    int N = 256;
    int fail = 0;
    cpu->rst = 0;

    for (int j = 0; j < 8; j++) {
        cpu->clk = !cpu->clk;
        cpu->eval();
    }

    instruction = emulator.Fetch();
    emulator.Evaluate(instruction);

    for (int i = 0; i < N-1; i++) {
        instruction = emulator.Fetch();
        emulator.Evaluate(instruction);
        if ((instruction & 0b11) == 0b10) {
            for (int j = 0; j < 12; j++) {
                cpu->clk = !cpu->clk;
                cpu->eval();
            }
        instruction = emulator.Fetch();
        emulator.Evaluate(instruction);
        } else {
            for (int j = 0; j < 10; j++) {
                cpu->clk = !cpu->clk;
                cpu->eval();
            }
        }
    }
    for (int j = 0; j < 10; j++) {
                cpu->clk = !cpu->clk;
                cpu->eval();
    }
    bool mismatch = false;
    for (int i = 0; i < 8; i++) {
        uint16_t emu_reg = emulator.GetRegisterValue(i);
        uint16_t cpu_reg = cpu->reg_oute[i];
        if (emu_reg != cpu_reg) {
            std::cout << "Mismatch in R" << i 
                    << ": Emulator = " << std::bitset<16>(emu_reg)
                    << ", CPU = " << std::bitset<16>(cpu_reg) << std::endl;
            mismatch = true;
        }
    }
    if (!mismatch) {
        std::cout << "All registers match!" << std::endl;
    }

    for (int i = 0; i < 8; i++) {
        std::cout << "R" << i << ": " << std::bitset<16>(emulator.GetRegisterValue(i)) << std::endl;
    }

    for (int i = 0; i < 8; i++) {
        std::cout << "CPU R" << i << ": " << std::bitset<16>(cpu->reg_oute[i]) << std::endl;
    }

    delete cpu;
    return fail == 0 ? 0 : 1;
}
