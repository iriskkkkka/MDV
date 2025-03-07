// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlocker.h for the primary calling header

#include "Vlocker__pch.h"
#include "Vlocker__Syms.h"
#include "Vlocker___024root.h"

void Vlocker___024root___ctor_var_reset(Vlocker___024root* vlSelf);

Vlocker___024root::Vlocker___024root(Vlocker__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlocker___024root___ctor_var_reset(this);
}

void Vlocker___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlocker___024root::~Vlocker___024root() {
}
