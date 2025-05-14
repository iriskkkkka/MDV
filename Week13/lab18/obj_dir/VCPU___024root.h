// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"
class VCPU___024unit;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU___024root final : public VerilatedModule {
  public:
    // CELLS
    VCPU___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(run,0,0);
    VL_OUT8(donee,0,0);
    VL_OUT8(addr_newe,7,0);
    CData/*7:0*/ CPU__DOT__addr_old;
    CData/*7:0*/ CPU__DOT__addr_new;
    CData/*0:0*/ CPU__DOT__done;
    CData/*0:0*/ CPU__DOT__runi;
    CData/*0:0*/ CPU__DOT__runo;
    CData/*2:0*/ CPU__DOT__core__DOT__alu_sel;
    CData/*3:0*/ CPU__DOT__core__DOT__mux_sel;
    CData/*7:0*/ CPU__DOT__core__DOT__en;
    CData/*0:0*/ CPU__DOT__core__DOT__ens;
    CData/*0:0*/ CPU__DOT__core__DOT__enc;
    CData/*0:0*/ CPU__DOT__core__DOT__eni;
    CData/*1:0*/ CPU__DOT__core__DOT__control_unit_init__DOT__state;
    CData/*1:0*/ CPU__DOT__core__DOT__control_unit_init__DOT__next_state;
    CData/*2:0*/ CPU__DOT__core__DOT__control_unit_init__DOT__addrx;
    CData/*2:0*/ CPU__DOT__core__DOT__control_unit_init__DOT__addry;
    CData/*2:0*/ CPU__DOT__core__DOT__control_unit_init__DOT__alusel;
    CData/*7:0*/ CPU__DOT__core__DOT__control_unit_init__DOT__immediate;
    CData/*1:0*/ CPU__DOT__core__DOT__control_unit_init__DOT__format;
    CData/*1:0*/ __Vtableidx1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ CPU__DOT__instr;
    SData/*15:0*/ CPU__DOT__core__DOT__imdt;
    SData/*15:0*/ CPU__DOT__core__DOT____Vcellout__reg0__d_out;
    SData/*15:0*/ CPU__DOT__core__DOT____Vcellout__reg1__d_out;
    SData/*15:0*/ CPU__DOT__core__DOT____Vcellout__reg2__d_out;
    SData/*15:0*/ CPU__DOT__core__DOT____Vcellout__reg3__d_out;
    SData/*15:0*/ CPU__DOT__core__DOT____Vcellout__reg4__d_out;
    SData/*15:0*/ CPU__DOT__core__DOT____Vcellout__reg5__d_out;
    SData/*15:0*/ CPU__DOT__core__DOT____Vcellout__reg6__d_out;
    SData/*15:0*/ CPU__DOT__core__DOT____Vcellout__reg7__d_out;
    SData/*15:0*/ CPU__DOT__core__DOT__reginst_out;
    SData/*15:0*/ CPU__DOT__core__DOT__mux_out;
    SData/*15:0*/ CPU__DOT__core__DOT__sreg_out;
    SData/*15:0*/ CPU__DOT__core__DOT__creg_out;
    IData/*31:0*/ __VactIterCount;
    VL_OUT16(reg_oute[9],15,0);
    VlUnpacked<SData/*15:0*/, 256> CPU__DOT__mem__DOT__mem;
    VlUnpacked<SData/*15:0*/, 9> CPU__DOT__core__DOT__reg_out;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU___024root(VCPU__Syms* symsp, const char* v__name);
    ~VCPU___024root();
    VL_UNCOPYABLE(VCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
