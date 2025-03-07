// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlocker.h for the primary calling header

#include "Vlocker__pch.h"
#include "Vlocker___024root.h"

VL_ATTR_COLD void Vlocker___024root___eval_static(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_static\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlocker___024root___eval_initial(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_initial\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlocker___024root___eval_final(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_final\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__stl(Vlocker___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlocker___024root___eval_phase__stl(Vlocker___024root* vlSelf);

VL_ATTR_COLD void Vlocker___024root___eval_settle(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_settle\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vlocker___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("locker.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vlocker___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__stl(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___dump_triggers__stl\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vlocker___024root___ico_sequent__TOP__0(Vlocker___024root* vlSelf);

VL_ATTR_COLD void Vlocker___024root___eval_stl(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_stl\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vlocker___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vlocker___024root___eval_triggers__stl(Vlocker___024root* vlSelf);

VL_ATTR_COLD bool Vlocker___024root___eval_phase__stl(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_phase__stl\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlocker___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vlocker___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__ico(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___dump_triggers__ico\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__act(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___dump_triggers__act\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__nba(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___dump_triggers__nba\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlocker___024root___ctor_var_reset(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___ctor_var_reset\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->digit = VL_RAND_RESET_I(4);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->currenta = VL_RAND_RESET_I(3);
    vlSelf->nexta = VL_RAND_RESET_I(3);
    vlSelf->locked = VL_RAND_RESET_I(1);
}
