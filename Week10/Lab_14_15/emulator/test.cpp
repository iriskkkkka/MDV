#include <iostream>
#include "BittyEmulator.h"
#include "..\BittyInstructionGenerator.h"

int main()
{
    BittyEmulator emulator;
    BittyInstructionGenerator instructionGen;
    uint16_t instruction = instructionGen.Generate();

    // Test instruction 0x1234 (replace with actual instruction value)
    uint16_t testInstruction = 0b0001010101000001;
    uint16_t regValue = emulator.GetRegisterValue(0);
    std::cout << "Register 0 value: " << regValue << std::endl;
    emulator.Evaluate(testInstruction);

    // Check register values after execution
    // Assuming instruction 0x1234 modifies register 0
    uint16_t regValueafter = emulator.GetRegisterValue(0);

    // Manually pre-calculate expected value.
    uint16_t expected_value = 0b10101010; 
    std::cout << "Register 0 value: " << regValueafter << std::endl;
    std::cout << "Expected value: " << expected_value << std::endl;

    // Continue testing other instructions as needed
    // ...
    return 0;
}