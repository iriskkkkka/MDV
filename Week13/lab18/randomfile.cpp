#include <cstdlib>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "BittyInstructionGenerator.h"

int main(int argc, char* argv[])
{
    const std::size_t N = std::stoul(argv[1]);
    const std::string outHex = "program.hex";   

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    BittyInstructionGenerator gen;
    std::ofstream fout(outHex);
    if (!fout) { std::perror(outHex.c_str()); return 1; }

    uint16_t firstIns = 0b0000000000000000;
    fout << std::hex << std::setfill('0') << std::setw(4)
         << firstIns << '\n'; 
    for (std::size_t i = 1; i < N; ++i) {
        uint16_t ins = gen.Generate();
        fout << std::hex << std::setw(4) << std::setfill('0')
             << ins << '\n';               
    }
    std::cout << "Generated " << N << " instructions → " << outHex << '\n';
    return 0;
}
