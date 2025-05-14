#include <verilated.h>
#include "Vmux.h"  
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmux* mux = new Vmux;

    int r0 = 0x0000;
    int r1 = 0x1111;
    int r2 = 0x2222;
    int r3 = 0x3333;
    int r4 = 0x4444;
    int r5 = 0x5555;
    int r6 = 0x6666;
    int r7 = 0x7777;

    
    mux->in[0] = r0;
    mux->in[1] = r1;
    mux->in[2] = r2;
    mux->in[3] = r3;
    mux->in[4] = r4;
    mux->in[5] = r5;
    mux->in[6] = r6;
    mux->in[7] = r7;

    for(int sel = 0; sel<8; sel++) {
        mux->sel = sel;
        mux->eval();

        int expected = 0;
        switch(sel) {
            case 0: expected = r0; break;
            case 1: expected = r1; break;
            case 2: expected = r2; break;
            case 3: expected = r3; break;
            case 4: expected = r4; break;
            case 5: expected = r5; break;
            case 6: expected = r6; break;
            case 7: expected = r7; break;
        }

        if(mux->out != expected) {
            std::cerr << "Mux test failed: out = 0x" << std::hex << mux->out << std::endl;
        } else {
            std::cout << "Mux test passed: out = 0x" << std::hex << mux->out << std::endl;
        }
    }

    delete mux;   
    return 0;
}
