// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "Vregister__pch.h"
#include "Vregister___024root.h"

VL_ATTR_COLD void Vregister___024root___eval_static(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_static\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregister___024root___eval_initial(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_initial\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vregister___024root___eval_final(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_final\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregister___024root___eval_settle(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_settle\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister___024root___dump_triggers__act(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___dump_triggers__act\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister___024root___dump_triggers__nba(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___dump_triggers__nba\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister___024root___ctor_var_reset(Vregister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___ctor_var_reset\n"); );
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->d_in = VL_RAND_RESET_I(16);
    vlSelf->res = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->d_out = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
