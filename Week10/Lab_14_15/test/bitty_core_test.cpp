#include <verilated.h>
#include "Vbitty_core.h"
#include <iostream>
#include  "../emulator/BittyEmulator.h"
#include "BittyInstructionGenerator.h"
#include <bitset>

extern "C" uint16_t get_reg_val();

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vbitty_core* bitty = new Vbitty_core;
    BittyInstructionGenerator instructionGen;
    BittyEmulator emulator;

    bitty->clk = 0;
    bitty->rst = 1;
    bitty->run = 0;

    // Reset
    for (int i = 0; i < 2; i++) {
        bitty->clk = !bitty->clk;
        bitty->eval();
    }
    bitty->rst = 0;
    bitty->run = 1;
    bitty->instr = 0b0000000000000001; 

    // Initial Run
    for (int i = 0; i <8; i++) { 
        bitty->clk = !bitty->clk;
        bitty->eval();
    }



    int N = 100000;
    int fail = 0;
    for (int i = 0; i < N; i++) {
        uint16_t instruction = instructionGen.Generate();
        bitty->instr = instruction;
        for (int i = 0; i <10; i++) { 
            bitty->clk = !bitty->clk;
            bitty->eval();
        }
        uint16_t got = get_reg_val();
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
    delete bitty;
    return 0;
}