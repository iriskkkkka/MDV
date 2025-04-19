#include <cstdint>
#include <iostream>

uint16_t regvals [8] = {0, 0, 0, 0, 0, 0, 0, 0};
int used = 0;

extern "C" void output_reg(int idx, short unsigned val) {
    regvals[idx] = val;
    used = idx;
}

extern "C" short unsigned get_reg_val() {
    return regvals[used];
}
