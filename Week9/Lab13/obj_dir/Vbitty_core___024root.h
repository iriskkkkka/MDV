// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbitty_core.h for the primary calling header

#ifndef VERILATED_VBITTY_CORE___024ROOT_H_
#define VERILATED_VBITTY_CORE___024ROOT_H_  // guard

#include "verilated.h"


class Vbitty_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbitty_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(run,0,0);
    VL_OUT8(done,0,0);
    CData/*2:0*/ bitty_core__DOT__alu_sel;
    CData/*7:0*/ bitty_core__DOT__en;
    CData/*0:0*/ bitty_core__DOT__ens;
    CData/*0:0*/ bitty_core__DOT__enc;
    CData/*0:0*/ bitty_core__DOT__eni;
    CData/*1:0*/ bitty_core__DOT__control_unit_init__DOT__state;
    CData/*1:0*/ bitty_core__DOT__control_unit_init__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instr,15,0);
    VL_OUT16(debug_reg0_out,15,0);
    VL_OUT16(debug_reg1_out,15,0);
    VL_OUT16(debug_reg2_out,15,0);
    VL_OUT16(debug_reg3_out,15,0);
    VL_OUT16(debug_reg4_out,15,0);
    VL_OUT16(debug_reg5_out,15,0);
    VL_OUT16(debug_reg6_out,15,0);
    VL_OUT16(debug_reg7_out,15,0);
    SData/*15:0*/ bitty_core__DOT__imdt;
    SData/*15:0*/ bitty_core__DOT____Vcellout__reg0__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__reg1__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__reg2__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__reg3__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__reg4__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__reg5__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__reg6__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__reg7__d_out;
    SData/*15:0*/ bitty_core__DOT__reginst_out;
    SData/*15:0*/ bitty_core__DOT__mux_out;
    SData/*15:0*/ bitty_core__DOT__sreg_out;
    SData/*15:0*/ bitty_core__DOT__creg_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 9> bitty_core__DOT__reg_out;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbitty_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbitty_core___024root(Vbitty_core__Syms* symsp, const char* v__name);
    ~Vbitty_core___024root();
    VL_UNCOPYABLE(Vbitty_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
