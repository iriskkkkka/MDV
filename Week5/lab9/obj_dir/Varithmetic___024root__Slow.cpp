// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varithmetic.h for the primary calling header

#include "Varithmetic__pch.h"
#include "Varithmetic__Syms.h"
#include "Varithmetic___024root.h"

void Varithmetic___024root___ctor_var_reset(Varithmetic___024root* vlSelf);

Varithmetic___024root::Varithmetic___024root(Varithmetic__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Varithmetic___024root___ctor_var_reset(this);
}

void Varithmetic___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varithmetic___024root::~Varithmetic___024root() {
}
