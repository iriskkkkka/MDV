#include "BittyEmulator.h"

BittyEmulator::BittyEmulator() {
    for (int i = 0; i < 8; ++i) {
        registers[i] = 0;
    }
}


uint16_t BittyEmulator::GetRegisterValue(uint16_t reg_num) {
    if (reg_num < 8) {
        return registers[reg_num];
    }
    return 0; 
}

 void BittyEmulator::Evaluate(uint16_t instruction){
    uint8_t format = (0b11) & instruction;
    uint8_t rx = ((0b111<<13) & (instruction)) >> 13;

    if(format == 0b01){
        uint8_t alusel = ((0b111<<2) & (instruction)) >> 2; 
        uint8_t immed = ((0b11111111<<5) & (instruction)) >> 5;

        switch (alusel) {
        case 0b000:
            registers[rx] = registers[rx] + immed;
            break;
        case 0b001:
            registers[rx] = registers[rx] - immed;
            break;
        case 0b010:
            registers[rx] = registers[rx] & immed;
            break;
        case 0b011: 
            registers[rx] = registers[rx] | immed;
            break;
        case 0b100:         
            registers[rx] = registers[rx] ^ immed;
            break;
        case 0b101: { 
            if (immed < 16)
                registers[rx] = registers[rx] << immed;
            else
                registers[rx] = 0;
            break;
        }
        case 0b110: { 
            if (immed < 16)
                registers[rx] = registers[rx] >> immed;
            else
                registers[rx] = 0;
            break;
        }
            
        case 0b111: 
            if (registers[rx] == immed) {
                registers[rx] = 0;
            } else if (registers[rx] > immed) {
                registers[rx] = 1;
            } else {
                registers[rx] = 2;
            }
            break;
        default:
            break;
        }
    }
    else if(format == 0b00){
        uint8_t alusel = ((0b111<<2) & (instruction)) >> 2; 
        uint8_t ry = ((0b111<<10) & (instruction)) >> 10;

        switch (alusel) {
            case 0b000:
                registers[rx] = registers[rx] + registers[ry];
                break;
            case 0b001:
                registers[rx] = registers[rx] - registers[ry];
                break;
            case 0b010:
                registers[rx] = registers[rx] & registers[ry];
                break;
            case 0b011: 
                registers[rx] = registers[rx] | registers[ry];
                break;
            case 0b100:         
                registers[rx] = registers[rx] ^ registers[ry];
                break;
            case 0b101: { 
                if (registers[ry] < 16)
                    registers[rx] = registers[rx] << registers[ry];
                else
                    registers[rx] = 0;
                break;
            }
            case 0b110: { 
                if (registers[ry] < 16)
                    registers[rx] = registers[rx] >> registers[ry];
                else
                    registers[rx] = 0;
                break;
            }
            case 0b111: 
                if (registers[rx] == registers[ry]) {
                    registers[rx] = 0;
                } else if (registers[rx] > registers[ry]) {
                    registers[rx] = 1;
                } else {
                    registers[rx] = 2;
                }
                break;
            default:
                break;
            }
    }
    else{
        registers[rx] = 0;
    }    
 }