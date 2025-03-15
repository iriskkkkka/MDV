#include "VALU.h"
#include "verilated.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdint> 


bool checker(uint16_t carry_in, uint16_t a, uint16_t b, uint16_t sel, uint16_t mod) {
    VALU* ALU = new VALU;
    ALU->mode = mod;
    ALU->carry_in = carry_in;
    ALU->in_a = a;
    ALU->in_b = b;
    ALU->select = sel;
    ALU->eval();

    uint16_t out = ALU->alu_out;
    uint16_t carryout = ALU->carry_out;
    uint16_t comp = ALU->compare;

    bool check = true;
    uint16_t expected_out = 0;
    uint16_t expected_carryout = 0;

    if (mod == 0) {
        switch (sel) {
            case 0: expected_out = a; break;
            case 1: expected_out = a | b; break;
            case 2: expected_out = a | ~b; break;
            case 3: expected_out = 0xFFFF; break;
            case 4: expected_out = a | (a & ~b); break;
            case 5: {
                uint32_t temp = (uint32_t)(a | b) + (a & ~b) + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 6: {
                uint32_t temp = (uint32_t)a - b + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 7: {
                uint32_t temp = (uint32_t)(a & ~b) - 1 + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 8: {
                uint32_t temp = (uint32_t)a + (a & b) + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 9: {
                uint32_t temp = (uint32_t)a + b + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 10: {
                uint32_t temp = ((a | (~b & 0xFFFF)) & 0xFFFF) + ((a & b) & 0xFFFF) + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 11: {
                uint32_t temp = (uint32_t)(a & b) - 1 + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 12: {
                uint32_t temp = (uint32_t)a + a + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 13: {
                uint32_t temp = (uint32_t)(a | b) + a + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 14: {
                uint32_t temp = ((a | (~b & 0xFFFF)) & 0xFFFF) + (a & 0xFFFF) + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            case 15: {
                uint32_t temp = (uint32_t)a - 1 + carry_in;
                expected_out = temp & 0xFFFF;
                expected_carryout = (temp >> 16) & 1;
                break;
            }
            default: std::cout << "Error invalid Selection" << std::endl;
        }
        check = (out == expected_out) && (carryout == expected_carryout) && (comp == (a == b ? 1 : 0));
    } else {
        switch (sel) {
            case 0:
                expected_out = ~a;
                check = out == expected_out;
                break;
            case 1:
                expected_out = ~(a | b);
                check = out == expected_out;
                break;
            case 2:
                expected_out = ~a & b;
                check = out == expected_out;
                break;
            case 3:
                expected_out = 0x0000; 
                check = out == expected_out;
                break;
            case 4:
                expected_out = ~(a & b);
                check = out == expected_out;
                break;
            case 5:
                expected_out = ~b;
                check = out == expected_out;
                break;
            case 6:
                expected_out = a ^ b;
                check = out == expected_out;
                break;
            case 7:
                expected_out = a & ~b;
                check = out == expected_out;
                break;
            case 8:
                expected_out = ~a | b;
                check = out == expected_out;
                break;
            case 9:
                expected_out = ~(a ^ b);
                check = out == expected_out;
                break;
            case 10:
                expected_out = b;
                check = out == expected_out;
                break;
            case 11:
                expected_out = a & b;
                check = out == expected_out;
                break;
            case 12:
                expected_out = 0xFFFF; 
                check = out == expected_out;
                break;
            case 13:
                expected_out = a | ~b;
                check = out == expected_out;
                break;
            case 14:
                expected_out = a | b;
                check = out == expected_out;
                break;
            case 15:
                expected_out = a;
                check = out == expected_out;
                break;
            default:
                std::cout << "Error invalid Selection" << std::endl;
        }
    }

    if (!check) {
        std::cout << "  Actual out: " << out << ", Expected out: " << expected_out;
        if (mod == 0) {
            std::cout << ", Actual carryout: " << carryout << ", Expected carryout: " << expected_carryout;
        }
        std::cout << std::endl;
    }

    delete ALU;
    return check;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    const int TEST_COUNT = 1000;
    uint16_t lower = 0, upper = 0xFFFF;  
    uint16_t lower1 = 0, upper1 = 1;     
    bool check;
    int totalFailures = 0;

    for (uint16_t sel = 0; sel < 16; sel++) {
        int mode0Failures = 0;
        srand(time(0) + sel);  
        for (int i = 0; i < TEST_COUNT; i++) {
            uint16_t a = lower + (rand() % (upper - lower + 1));
            uint16_t b = lower + (rand() % (upper - lower + 1));
            uint16_t carry_in = lower1 + (rand() % (upper1 - lower1 + 1));

            check = checker(carry_in, a, b, sel, 0);
            if (!check) mode0Failures++;
        }
        totalFailures += mode0Failures;
        std::cout << "Sel=" << sel << " mode=0 failures=" << mode0Failures << std::endl;
    }

    for (uint16_t sel = 0; sel < 16; sel++) {
        int mode1Failures = 0;
        srand(time(0) + sel);  
        for (int i = 0; i < TEST_COUNT; i++) {
            uint16_t a = lower + (rand() % (upper - lower + 1));
            uint16_t b = lower + (rand() % (upper - lower + 1));
            uint16_t carry_in = lower1 + (rand() % (upper1 - lower1 + 1));

            check = checker(carry_in, a, b, sel, 1);
            if (!check) mode1Failures++;
        }
        totalFailures += mode1Failures;
        std::cout << "Sel=" << sel << " mode=1 failures=" << mode1Failures << std::endl;
    }

    std::cout << "Total failures: " << totalFailures << std::endl;
    return 0;
}