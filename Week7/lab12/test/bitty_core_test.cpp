#include <verilated.h>
#include "Vbitty_core.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vbitty_core* bitty = new Vbitty_core;



    bitty->instr = 0b0001110000010000;
    bitty->clk = 0;
    bitty->rst = 1;
    bitty->run = 0;

    for (int i = 0; i < 2; i++) {
        bitty->clk = !bitty->clk;
        bitty->eval();
    }
    std::cout << "Evaluation after reset"  
    << ", Instr Reg: " << (int)bitty->debug_reginst_out 
    << ", S Reg: " << (int)bitty->debug_sreg_out 
    << ", C Reg: " << (int)bitty->debug_creg_out 
    << ", Reg0 value: " << (int)bitty->debug_reg0_out
    << ", Done: " << (int)bitty->done << std::endl;
    
    for (int j = 0; j < 2; j++) {


        bitty->rst = 0;
        bitty->run = 1;

        for (int i = 0; i < 2; i++) {
            bitty->clk = !bitty->clk;
            bitty->eval();
        }

        std::cout << "Evaluation after first stage"
        << ", Instr Reg: " << (int)bitty->debug_reginst_out 
        << ", S Reg: " << (int)bitty->debug_sreg_out 
        << ", C Reg: " << (int)bitty->debug_creg_out 
        << ", Reg0 value: " << (int)bitty->debug_reg0_out
        << ", Done: " << (int)bitty->done << std::endl;


        for (int i = 0; i < 2; i++) {
            bitty->clk = !bitty->clk;
            bitty->eval();
        }

        std::cout << "Evaluation after second stage"    
        << ", Instr Reg: " << (int)bitty->debug_reginst_out 
        << ", S Reg: " << (int)bitty->debug_sreg_out 
        << ", C Reg: " << (int)bitty->debug_creg_out 
        << ", Reg0 value: " << (int)bitty->debug_reg0_out
        << ", Done: " << (int)bitty->done << std::endl;

    
    
        for (int i = 0; i < 2; i++) {
            bitty->clk = !bitty->clk;
            bitty->eval();
        }

        std::cout << "Evaluation after third stage"    
        << ", Instr Reg: " << (int)bitty->debug_reginst_out 
        << ", S Reg: " << (int)bitty->debug_sreg_out 
        << ", C Reg: " << (int)bitty->debug_creg_out 
        << ", Reg0 value: " << (int)bitty->debug_reg0_out
        << ", Done: " << (int)bitty->done << std::endl;

    
        for (int i = 0; i < 2; i++) {
            bitty->clk = !bitty->clk;
            bitty->eval();
        }

        std::cout << "Evaluation after fourth stage"
        << ", Instr Reg: " << (int)bitty->debug_reginst_out 
        << ", S Reg: " << (int)bitty->debug_sreg_out 
        << ", C Reg: " << (int)bitty->debug_creg_out 
        << ", Reg0 value: " << (int)bitty->debug_reg0_out
        << ", Done: " << (int)bitty->done << std::endl;


        for (int i = 0; i < 2; i++) {
            bitty->clk = !bitty->clk;
            bitty->eval();
        }

        std::cout << "Evaluation after fifth stage"
        << ", Instr Reg: " << (int)bitty->debug_reginst_out 
        << ", S Reg: " << (int)bitty->debug_sreg_out 
        << ", C Reg: " << (int)bitty->debug_creg_out 
        << ", Reg0 value: " << (int)bitty->debug_reg0_out
        << ", Done: " << (int)bitty->done << std::endl;

    }
    
 
    
    delete bitty;
    return 0;
}