#include "BittyInstructionGenerator.h"
#include <cstdint>
#include <cstdlib>



uint16_t BittyInstructionGenerator::Generate() {
    uint16_t instruction = 0;
    instruction |= (rand() % 8) << 13; // Rx
    instruction |= (rand() % 256) << 5; // imed or Ry
    instruction |= (rand() % 8) << 2; // ALusel
    instruction |= (rand() % 2) << 0; // Format
    return instruction;
}
