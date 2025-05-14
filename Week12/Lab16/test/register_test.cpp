#include <verilated.h>
#include "Vregister.h"  
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vregister* top = new Vregister;

    top->res = 1;
    top->en = 1;
    top->d_in = 0xABCD;
    top->clk = 0;

    for (int i = 0; i < 2; i++) {
        top->clk = !top->clk;
        top->eval();
    }

    if(top->d_out != 0) {
        std::cerr << "Reset test failed: d_out = 0x" << std::hex << top->d_out << std::endl;
    } else {
        std::cout << "Reset test passed: d_out = 0x" << std::hex << top->d_out << std::endl;
    }

    top->res = 0;
    top->d_in = 0x1234;

    for (int i = 0; i < 2; i++) {
        top->clk = !top->clk;
        top->eval();
    }

    if(top->d_out != 0x1234) {
        std::cerr << "Data capture test failed: d_out = 0x" << std::hex << top->d_out << std::endl;
    } else {
        std::cout << "Data capture test passed: d_out = 0x" << std::hex << top->d_out << std::endl;
    }

    top->en = 0;
    top->d_in = 0xFFFF; 
    for (int i = 0; i < 2; i++) {
        top->clk = !top->clk;
        top->eval();
    }

    if(top->d_out != 0x1234) {
        std::cerr << "Hold test failed: d_out = 0x" << std::hex << top->d_out << std::endl;
    } else {
        std::cout << "Hold test passed: d_out = 0x" << std::hex << top->d_out << std::endl;
    }

    top->final();
    delete top;
    return 0;
}
