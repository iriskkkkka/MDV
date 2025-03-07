// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlogic.h for the primary calling header

#include "Vlogic__pch.h"
#include "Vlogic__Syms.h"
#include "Vlogic___024root.h"

void Vlogic___024root___ctor_var_reset(Vlogic___024root* vlSelf);

Vlogic___024root::Vlogic___024root(Vlogic__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlogic___024root___ctor_var_reset(this);
}

void Vlogic___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlogic___024root::~Vlogic___024root() {
}
