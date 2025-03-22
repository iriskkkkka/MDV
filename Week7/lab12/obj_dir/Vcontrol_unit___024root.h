// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol_unit.h for the primary calling header

#ifndef VERILATED_VCONTROL_UNIT___024ROOT_H_
#define VERILATED_VCONTROL_UNIT___024ROOT_H_  // guard

#include "verilated.h"


class Vcontrol_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontrol_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rst,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(run,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(sel,2,0);
    VL_OUT8(mux_sel,2,0);
    VL_OUT8(mode,0,0);
    VL_OUT8(en,7,0);
    VL_OUT8(ens,0,0);
    VL_OUT8(enc,0,0);
    VL_OUT8(eni,0,0);
    CData/*1:0*/ control_unit__DOT__state;
    CData/*1:0*/ control_unit__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instr,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontrol_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol_unit___024root(Vcontrol_unit__Syms* symsp, const char* v__name);
    ~Vcontrol_unit___024root();
    VL_UNCOPYABLE(Vcontrol_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
