// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLOCKER__SYMS_H_
#define VERILATED_VLOCKER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlocker.h"

// INCLUDE MODULE CLASSES
#include "Vlocker___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vlocker__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlocker* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlocker___024root              TOP;

    // CONSTRUCTORS
    Vlocker__Syms(VerilatedContext* contextp, const char* namep, Vlocker* modelp);
    ~Vlocker__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
