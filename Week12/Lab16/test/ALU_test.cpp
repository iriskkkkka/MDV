#include "VALU.h"
#include "verilated.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdint> 


bool checker(uint16_t a, uint16_t b, uint16_t sel) {
    VALU* ALU = new VALU;
    ALU->in_a = a;
    ALU->in_b = b;
    ALU->select = sel;
    ALU->eval();

    uint16_t out = ALU->ALU_out;

    bool check = true;
    uint16_t expected_out = 0;


     switch (sel) {
            case 0:
                expected_out = a + b;
                check = out == expected_out;
                break;
            case 1:
                expected_out = a - b;
                check = out == expected_out;
                break;
            case 2:
                expected_out = a & b;
                check = out == expected_out;
                break;
            case 3:
                expected_out = a | b; 
                check = out == expected_out;
                break;
            case 4:
                expected_out = a ^ b;
                check = out == expected_out;
                break;
            case 5:
                expected_out = a << b;
                check = out == expected_out;
                break;
            case 6:
                expected_out = a >> b;
                check = out == expected_out;
                break;
            case 7:
                if (a == b) {
                    expected_out = 0;
                } else if (a > b) {
                    expected_out = 1;
                } else {
                    expected_out = 2;
                }
                check = out == expected_out;
                break;
            default:
                std::cout << "Error invalid Selection" << std::endl;
        }

    if (!check) {
        std::cout << "Actual out: " << out << ", Expected out: " << expected_out;   
        std::cout << std::endl;
    }

    delete ALU;
    return check;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    const int TEST_COUNT = 1000;
    uint16_t lower = 0, upper = 0x999;  
    uint16_t lower1 = 0xAAA, upper1 = 0xFFF;  
    uint16_t lower2 = 0, upper2 = 0xF;     
    bool check;
    int totalFailures = 0;

    for (uint16_t sel = 0; sel < 8; sel++) {
        int Failures = 0;
        srand(time(0) + sel);  
        if (sel == 7) {
            for (int i = 0; i < TEST_COUNT; i++) {
                uint16_t a = lower + (rand() % (upper - lower + 1));
                uint16_t b = lower + (rand() % (upper- lower + 1));
    
                check = checker(a, b, sel);
                if (!check) Failures++;
            }
        } else if(sel == 5 || sel == 6) {
            for (int i = 0; i < TEST_COUNT; i++) {
                uint16_t a = lower + (rand() % (upper - lower + 1));
                uint16_t b = lower2 + (rand() % (upper2 - lower2 + 1));
    
                check = checker(a, b, sel);
                if (!check) Failures++;
            }
        }else {
            for (int i = 0; i < TEST_COUNT; i++) {
                uint16_t a = lower1 + (rand() % (upper1 - lower1 + 1));
                uint16_t b = lower + (rand() % (upper - lower + 1));
    
                check = checker(a, b, sel);
                if (!check) Failures++;
            }
        }
        totalFailures += Failures;
        std::cout << "Sel=" << sel << " failures=" << Failures << std::endl;
    }

    std::cout << "Total failures: " << totalFailures << std::endl;
    return 0;
}