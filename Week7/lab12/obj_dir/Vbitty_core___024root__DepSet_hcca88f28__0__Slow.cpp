// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core___024root.h"

VL_ATTR_COLD void Vbitty_core___024root___eval_static(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_static\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbitty_core___024root___eval_initial(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_initial\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vbitty_core___024root___eval_final(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_final\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbitty_core___024root___eval_phase__stl(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_settle(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_settle\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vbitty_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/bitty_core.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbitty_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbitty_core___024root___stl_sequent__TOP__0(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbitty_core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 4> Vbitty_core__ConstPool__TABLE_hcac39648_0;

VL_ATTR_COLD void Vbitty_core___024root___stl_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___stl_sequent__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ bitty_core__DOT__mux_sel;
    bitty_core__DOT__mux_sel = 0;
    CData/*2:0*/ bitty_core__DOT__control_unit_init__DOT__addrx;
    bitty_core__DOT__control_unit_init__DOT__addrx = 0;
    CData/*2:0*/ bitty_core__DOT__control_unit_init__DOT__addry;
    bitty_core__DOT__control_unit_init__DOT__addry = 0;
    CData/*2:0*/ bitty_core__DOT__control_unit_init__DOT__alusel;
    bitty_core__DOT__control_unit_init__DOT__alusel = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.bitty_core__DOT__eni = 0U;
    vlSelfRef.bitty_core__DOT__ens = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state)))) {
            vlSelfRef.bitty_core__DOT__eni = 1U;
        }
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.bitty_core__DOT__ens = 1U;
        }
    }
    vlSelfRef.bitty_core__DOT__enc = 0U;
    vlSelfRef.done = 0U;
    vlSelfRef.debug_reginst_out = vlSelfRef.bitty_core__DOT__reginst_out;
    vlSelfRef.debug_sreg_out = vlSelfRef.bitty_core__DOT__sreg_out;
    vlSelfRef.debug_creg_out = vlSelfRef.bitty_core__DOT__creg_out;
    vlSelfRef.debug_reg0_out = vlSelfRef.bitty_core__DOT____Vcellout__reg0__d_out;
    __Vtableidx1 = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state;
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__next_state 
        = Vbitty_core__ConstPool__TABLE_hcac39648_0
        [__Vtableidx1];
    bitty_core__DOT__control_unit_init__DOT__alusel 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 2U));
    vlSelfRef.bitty_core__DOT__alu_sel = 0U;
    bitty_core__DOT__control_unit_init__DOT__addrx 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 0xdU));
    bitty_core__DOT__control_unit_init__DOT__addry 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 0xaU));
    vlSelfRef.bitty_core__DOT__en = 0x81U;
    bitty_core__DOT__mux_sel = 0U;
    if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state)))) {
            vlSelfRef.bitty_core__DOT__enc = 1U;
            vlSelfRef.bitty_core__DOT__alu_sel = bitty_core__DOT__control_unit_init__DOT__alusel;
        }
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.done = 1U;
            vlSelfRef.bitty_core__DOT__en = (0xffU 
                                             & ((IData)(1U) 
                                                << (IData)(bitty_core__DOT__control_unit_init__DOT__addrx)));
        } else {
            bitty_core__DOT__mux_sel = bitty_core__DOT__control_unit_init__DOT__addry;
        }
    } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
        bitty_core__DOT__mux_sel = bitty_core__DOT__control_unit_init__DOT__addrx;
    }
    vlSelfRef.bitty_core__DOT__reg_out[0U] = vlSelfRef.bitty_core__DOT____Vcellout__reg0__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[1U] = vlSelfRef.bitty_core__DOT____Vcellout__reg1__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[2U] = vlSelfRef.bitty_core__DOT____Vcellout__reg2__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[3U] = vlSelfRef.bitty_core__DOT____Vcellout__reg3__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[4U] = vlSelfRef.bitty_core__DOT____Vcellout__reg4__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[5U] = vlSelfRef.bitty_core__DOT____Vcellout__reg5__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[6U] = vlSelfRef.bitty_core__DOT____Vcellout__reg6__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[7U] = vlSelfRef.bitty_core__DOT____Vcellout__reg7__d_out;
    vlSelfRef.bitty_core__DOT__mux_out = ((4U & (IData)(bitty_core__DOT__mux_sel))
                                           ? ((2U & (IData)(bitty_core__DOT__mux_sel))
                                               ? ((1U 
                                                   & (IData)(bitty_core__DOT__mux_sel))
                                                   ? 
                                                  vlSelfRef.bitty_core__DOT__reg_out
                                                  [7U]
                                                   : 
                                                  vlSelfRef.bitty_core__DOT__reg_out
                                                  [6U])
                                               : ((1U 
                                                   & (IData)(bitty_core__DOT__mux_sel))
                                                   ? 
                                                  vlSelfRef.bitty_core__DOT__reg_out
                                                  [5U]
                                                   : 
                                                  vlSelfRef.bitty_core__DOT__reg_out
                                                  [4U]))
                                           : ((2U & (IData)(bitty_core__DOT__mux_sel))
                                               ? ((1U 
                                                   & (IData)(bitty_core__DOT__mux_sel))
                                                   ? 
                                                  vlSelfRef.bitty_core__DOT__reg_out
                                                  [3U]
                                                   : 
                                                  vlSelfRef.bitty_core__DOT__reg_out
                                                  [2U])
                                               : ((1U 
                                                   & (IData)(bitty_core__DOT__mux_sel))
                                                   ? 
                                                  vlSelfRef.bitty_core__DOT__reg_out
                                                  [1U]
                                                   : 
                                                  vlSelfRef.bitty_core__DOT__reg_out
                                                  [0U])));
}

VL_ATTR_COLD void Vbitty_core___024root___eval_triggers__stl(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD bool Vbitty_core___024root___eval_phase__stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbitty_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbitty_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__nba(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__nba\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbitty_core___024root___ctor_var_reset(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___ctor_var_reset\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(16);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->debug_reginst_out = VL_RAND_RESET_I(16);
    vlSelf->debug_sreg_out = VL_RAND_RESET_I(16);
    vlSelf->debug_creg_out = VL_RAND_RESET_I(16);
    vlSelf->debug_reg0_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__alu_sel = VL_RAND_RESET_I(3);
    vlSelf->bitty_core__DOT__en = VL_RAND_RESET_I(8);
    vlSelf->bitty_core__DOT__ens = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__enc = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__eni = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bitty_core__DOT__reg_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->bitty_core__DOT____Vcellout__reg0__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__reg1__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__reg2__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__reg3__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__reg4__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__reg5__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__reg6__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__reg7__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__reginst_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__mux_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__sreg_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__creg_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__control_unit_init__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->bitty_core__DOT__control_unit_init__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
