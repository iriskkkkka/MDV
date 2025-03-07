// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlogic.h for the primary calling header

#include "Vlogic__pch.h"
#include "Vlogic___024root.h"

VL_ATTR_COLD void Vlogic___024root___eval_static(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_static\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlogic___024root___eval_initial(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_initial\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlogic___024root___eval_final(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_final\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogic___024root___dump_triggers__stl(Vlogic___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlogic___024root___eval_phase__stl(Vlogic___024root* vlSelf);

VL_ATTR_COLD void Vlogic___024root___eval_settle(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_settle\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vlogic___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("logic.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vlogic___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogic___024root___dump_triggers__stl(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___dump_triggers__stl\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vlogic___024root___ico_sequent__TOP__0(Vlogic___024root* vlSelf);

VL_ATTR_COLD void Vlogic___024root___eval_stl(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_stl\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vlogic___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vlogic___024root___eval_triggers__stl(Vlogic___024root* vlSelf);

VL_ATTR_COLD bool Vlogic___024root___eval_phase__stl(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_phase__stl\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlogic___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vlogic___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogic___024root___dump_triggers__ico(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___dump_triggers__ico\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vlogic___024root___dump_triggers__act(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___dump_triggers__act\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogic___024root___dump_triggers__nba(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___dump_triggers__nba\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlogic___024root___ctor_var_reset(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___ctor_var_reset\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->in_a = VL_RAND_RESET_I(16);
    vlSelf->in_b = VL_RAND_RESET_I(16);
    vlSelf->select = VL_RAND_RESET_I(4);
    vlSelf->logic_out = VL_RAND_RESET_I(16);
}
