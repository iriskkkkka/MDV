// Include the generated module header.
#include "Vand_gate.h"

// Include Verilator library.
#include "verilated.h"
#include "verilated_vcd_c.h"  // Include VCD tracing support
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);   // Initialize Verilator.
    Vand_gate* and_gate = new Vand_gate;  // Create an instance of the AND gate module.

    // Enable waveform tracing.
    Verilated::traceEverOn(true);
    VerilatedVcdC* vcd_trace = new VerilatedVcdC;
    and_gate->trace(vcd_trace, 99); // Trace 99 levels of hierarchy.
    vcd_trace->open("and_gate_trace.vcd"); // Open the VCD file.

    // Define simulation time
    int sim_time = 0;

    // Apply test cases and trace signals at different time points.
    and_gate->a = 0; and_gate->b = 0;
    and_gate->eval();
    vcd_trace->dump(sim_time);  // Dump at time 0
    sim_time += 10;
    vcd_trace->dump(sim_time);  // Dump at time 10
    std::cout << "a=0, b=0 -> y=" << (int)and_gate->y << std::endl;

    and_gate->a = 0; and_gate->b = 1;
    and_gate->eval();
    sim_time += 10;
    vcd_trace->dump(sim_time);  // Dump at time 20
    std::cout << "a=0, b=1 -> y=" << (int)and_gate->y << std::endl;

    and_gate->a = 1; and_gate->b = 0;
    and_gate->eval();
    sim_time += 10;
    vcd_trace->dump(sim_time);  // Dump at time 30
    std::cout << "a=1, b=0 -> y=" << (int)and_gate->y << std::endl;

    and_gate->a = 1; and_gate->b = 1;
    and_gate->eval();
    sim_time += 10;
    vcd_trace->dump(sim_time);  // Dump at time 40
    std::cout << "a=1, b=1 -> y=" << (int)and_gate->y << std::endl;

    // Ensure all remaining signal changes are written to the VCD
    vcd_trace->flush();

    // Close trace file properly
    vcd_trace->close();
    delete vcd_trace;

    delete and_gate;  // Free memory.
    return 0;
}
