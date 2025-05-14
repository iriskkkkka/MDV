#include <cstdint>
#include <iostream>

uint16_t regvals =0;

extern "C" void output_reg(short unsigned val) {
    regvals = val;
}

extern "C" short unsigned get_reg_val() {
    return regvals;
}
