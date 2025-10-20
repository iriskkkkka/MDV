# Microprocessor Design and Verification

A complete 16-bit microprocessor implementation in Verilog with comprehensive verification using Verilator and C++ testbenches.

## Overview

This repository contains the coursework for a Microprocessor Design and Verification class. The project involves designing a 16-bit processor from scratch using Verilog HDL, with verification performed using Verilator for simulation and GTKWave for waveform analysis. Testbenches are written in C++ using a golden model approach to ensure correctness of the design.

## Features

- **16-bit Architecture**: Custom 16-bit processor design
- **Modular Design**: Incremental development across multiple weeks
- **Comprehensive Verification**: C++ testbenches with golden model validation
- **Waveform Analysis**: GTKWave integration for debugging
- **Verilator Simulation**: High-performance C++ simulation

## Tools and Technologies

- **Verilog HDL**: Hardware description language for processor design
- **Verilator**: Fast Verilog/SystemVerilog simulator
- **C++**: Testbench development and golden model implementation
- **GTKWave**: Waveform viewer for signal analysis
- **Make**: Build automation

## Processor Architecture

### Key Components

- **Arithmetic Logic Unit (ALU)**: Performs arithmetic and logical operations
- **Control Unit**: Decodes instructions and generates control signals
- **Register File**: 16-bit general-purpose registers
- **Datapath**: Connects all processor components
- **Memory Interface**: Instruction and data memory access
- **Program Counter (PC)**: Tracks current instruction address

### Instruction Set Architecture (ISA)

The processor implements a custom 16-bit ISA with support for:
- Arithmetic operations (ADD, SUB, MUL, etc.)
- Logical operations (AND, OR, XOR, NOT, etc.)
- Load/Store instructions
- Branch and jump instructions
- Immediate value operations

### Build Tools

- **Verilator** (v4.0 or higher)
- **GTKWave** (v3.3 or higher)
- **G++** compiler with C++11 support
- **Make** build system

## Getting Started

## Verification Methodology

### Golden Model Approach

The verification strategy uses a **golden model** written in C++ that serves as a reference implementation:

1. **Test Generation**: C++ testbench generates test vectors
2. **Parallel Execution**: Both DUT (Design Under Test) and golden model execute instructions
3. **Result Comparison**: Outputs are compared at each cycle
4. **Error Reporting**: Mismatches are flagged with detailed information

### Coverage Metrics

- Instruction coverage
- Branch coverage
- State coverage
- Corner case testing

