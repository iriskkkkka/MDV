// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlocker.h for the primary calling header

#ifndef VERILATED_VLOCKER___024ROOT_H_
#define VERILATED_VLOCKER___024ROOT_H_  // guard

#include "verilated.h"


class Vlocker__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlocker___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(digit,3,0);
    VL_IN8(reset,0,0);
    VL_IN8(currenta,2,0);
    VL_OUT8(nexta,2,0);
    VL_OUT8(locked,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlocker__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlocker___024root(Vlocker__Syms* symsp, const char* v__name);
    ~Vlocker___024root();
    VL_UNCOPYABLE(Vlocker___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
