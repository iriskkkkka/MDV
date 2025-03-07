// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLOGIC__SYMS_H_
#define VERILATED_VLOGIC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlogic.h"

// INCLUDE MODULE CLASSES
#include "Vlogic___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vlogic__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlogic* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlogic___024root               TOP;

    // CONSTRUCTORS
    Vlogic__Syms(VerilatedContext* contextp, const char* namep, Vlogic* modelp);
    ~Vlogic__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
