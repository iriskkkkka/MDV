#include "BittyInstructionGenerator.h"
#include <cstdint>
#include <cstdlib>


uint16_t BittyInstructionGenerator::Generate() {
    uint16_t instruction = 0;
    instruction |= (rand() % 8) << 13; // Rx
    instruction |= (rand() % 256) << 5; // imed or Ry
    instruction |= (rand() % 8) << 2;  // ALusel
    int format_choice = rand() % 3;
    uint16_t format;
    if (format_choice == 0) format = 0b00; // 0
    else if (format_choice == 1) format = 0b01; // 1
    else format = 0b11; // 3
    instruction |= format;
    return instruction;
}