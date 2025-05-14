#include <verilated.h>
#include "VCPU.h"
#include <iostream>
#include  "../emulator/BittyEmulator.h"
#include "../BittyInstructionGenerator.h"
#include <bitset>

extern "C" uint16_t get_reg_val();

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VCPU* cpu = new VCPU;
    BittyInstructionGenerator instructionGen;
    BittyEmulator emulator;

    cpu->run = 0;
    cpu->rst = 1;
    for (int i = 0; i <2; i++) { 
        cpu->clk = !cpu->clk;
        cpu->eval();
    }

    emulator.LoadRom("program.hex");

    

    int N = 256;
    int fail = 0;
    cpu -> rst = 0;
    cpu -> run = 1;
    for (int i = 0; i <6; i++) { 
        cpu->clk = !cpu->clk;
        cpu->eval();
    }
    for (int i = 0; i < N; i++) {
        for (int i = 0; i <8; i++) { 
            cpu->clk = !cpu->clk;
            cpu->eval();
        }
        uint16_t got = get_reg_val();
        uint16_t instruction = emulator.Fetch();
        emulator.Evaluate(instruction);
        uint16_t expected = emulator.GetRegisterValue(instruction >> 13); 
        if (got != expected) {
            std::cout 
              << i << ": "
              << "Mismatch at instruction " << std::bitset<16>(instruction)
              << ": got "   << std::bitset<16>(got)
              << ", expected " << std::bitset<16>(expected)
              << std::endl;
            fail++;
            break;
        }
    }

    if (fail == 0) {
        std::cout << "All tests passed!" << std::endl;
    } else {
        std::cout << fail << " tests failed." << std::endl;
    }

    for(int i = 0; i < 8; i++) { 
        std::cout << "Register " << i << ": " << std::bitset<16>(emulator.GetRegisterValue(i)) << std::endl;
    }
    delete cpu;
    return 0;
}