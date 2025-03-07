// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VARITHMETIC__SYMS_H_
#define VERILATED_VARITHMETIC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Varithmetic.h"

// INCLUDE MODULE CLASSES
#include "Varithmetic___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Varithmetic__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Varithmetic* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Varithmetic___024root          TOP;

    // CONSTRUCTORS
    Varithmetic__Syms(VerilatedContext* contextp, const char* namep, Varithmetic* modelp);
    ~Varithmetic__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
