#include <verilated.h>
#include "Vbitty_core.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vbitty_core* bitty = new Vbitty_core;
    bitty->clk = 0;
    bitty->rst = 1;
    bitty->run = 0;

    

    for (int i = 0; i < 1; i++) {
        bitty->clk = !bitty->clk;
        bitty->eval();
    }
    bitty->rst = 0;
    bitty->run = 1;

    // Preload registers with initial values

    for (int j = 0; j < 8; j++) {
        bitty->instr = (j << 13) | (((0x11 * (j + 1)) & 0xFF) << 5) | 0x1;
        for (int i = 0; i < 8; i++) {
            bitty->clk = !bitty->clk;
            bitty->eval();
        }
    }

    std::cout << "Outputs After initialization: " << std::endl;
    std::cout << "Reg0: " << (int)bitty->debug_reg0_out << std::endl;
    std::cout << "Reg1: " << (int)bitty->debug_reg1_out << std::endl;
    std::cout << "Reg2: " << (int)bitty->debug_reg2_out << std::endl;
    std::cout << "Reg3: " << (int)bitty->debug_reg3_out << std::endl;
    std::cout << "Reg4: " << (int)bitty->debug_reg4_out << std::endl;
    std::cout << "Reg5: " << (int)bitty->debug_reg5_out << std::endl;
    std::cout << "Reg6: " << (int)bitty->debug_reg6_out << std::endl;
    std::cout << "Reg7: " << (int)bitty->debug_reg7_out << std::endl;

    for (int j = 0; j < 8; j++) {
        uint8_t rev = (~j) & 0x7;
        bitty->instr = (j << 13) | (rev << 10) | 0b00000 | (j<<2) |0b00;
        for (int i = 0; i < 8; i++) {
            bitty->clk = !bitty->clk;
            bitty->eval();
        }
    }   

    std::cout << "The in register operations: " << std::endl;
    std::cout << "Reg0: " << (int)bitty->debug_reg0_out << std::endl;
    std::cout << "Reg1: " << (int)bitty->debug_reg1_out << std::endl;
    std::cout << "Reg2: " << (int)bitty->debug_reg2_out << std::endl;
    std::cout << "Reg3: " << (int)bitty->debug_reg3_out << std::endl;
    std::cout << "Reg4: " << (int)bitty->debug_reg4_out << std::endl;
    std::cout << "Reg5: " << (int)bitty->debug_reg5_out << std::endl;
    std::cout << "Reg6: " << (int)bitty->debug_reg6_out << std::endl;
    std::cout << "Reg7: " << (int)bitty->debug_reg7_out << std::endl;

    bitty->instr = (0b101 << 13) | (0b00011111 << 5) | (0b000<<2) |0b01;
    for (int i = 0; i < 8; i++) {
        bitty->clk = !bitty->clk;
        bitty->eval();
    }
    bitty->instr = (0b110 << 13) | (0b11001101 << 5) | (0b000<<2) |0b01;
    for (int i = 0; i < 8; i++) {
        bitty->clk = !bitty->clk;
        bitty->eval();
    }

    for (int j = 0; j < 8; j++) {
        bitty->instr = (j << 13) | (0b00000101 << 5) | (j<<2) |0b01;
        for (int i = 0; i < 8; i++) {
            bitty->clk = !bitty->clk;
            bitty->eval();
        }
    }   

    std::cout << "Outputs After ievery ALU operation in reverse with the other values: " << std::endl;
    std::cout << "Reg0: " << (int)bitty->debug_reg0_out << std::endl;
    std::cout << "Reg1: " << (int)bitty->debug_reg1_out << std::endl;
    std::cout << "Reg2: " << (int)bitty->debug_reg2_out << std::endl;
    std::cout << "Reg3: " << (int)bitty->debug_reg3_out << std::endl;
    std::cout << "Reg4: " << (int)bitty->debug_reg4_out << std::endl;
    std::cout << "Reg5: " << (int)bitty->debug_reg5_out << std::endl;
    std::cout << "Reg6: " << (int)bitty->debug_reg6_out << std::endl;
    std::cout << "Reg7: " << (int)bitty->debug_reg7_out << std::endl;

    


    delete bitty;
    return 0;
}
