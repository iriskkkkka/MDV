#include <verilated.h>
#include "Vcontrol_unit.h"  
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vcontrol_unit* unit = new Vcontrol_unit;

    unit-> rst = 1;
    unit->instr = 0b1010100000000100;
    unit->clk = 0;
    unit->run = 0;

    for (int i = 0; i < 2; i++) {
        unit->clk = !unit->clk;
        unit->eval();
    }

    if(unit->eni != 1) {
        std::cerr << "Reset test failed" << std::endl;
    } else {
        std::cout << "Reset test passed" << std::endl;
    }

    unit -> rst = 0;
    unit -> run = 1;

    for (int i = 0; i < 2; i++) {
        unit->clk = !unit->clk;
        unit->eval();
    }

    if(unit->ens != 1 && unit->mux_sel != 0b101) {
        std::cerr << "First Stage  test failed" << std::endl;
    } else {
        std::cout << "First Stage test passed" << std::endl;
    }

    for (int i = 0; i < 2; i++) {
        unit->clk = !unit->clk;
        unit->eval();
    }

    if(unit->enc != 1 && unit->mux_sel != 0b010 && unit->sel != 0b001) {
        std::cerr << "Second Stage test failed" << std::endl;
    } else {
        std::cout << "Second Stage test passed" << std::endl;
    }
    
    for (int i = 0; i < 2; i++) {
        unit->clk = !unit->clk;
        unit->eval();
    }

    if(unit->en != 0b00100000 && unit->done != 1) {
        std::cerr << "Third Stage test failed" << std::endl;
    } else {
        std::cout << "Third Stage test passed" << std::endl;
    }

    delete unit;   
    return 0;
}