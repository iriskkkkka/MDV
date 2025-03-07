// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlogic.h for the primary calling header

#include "Vlogic__pch.h"
#include "Vlogic___024root.h"

void Vlogic___024root___ico_sequent__TOP__0(Vlogic___024root* vlSelf);

void Vlogic___024root___eval_ico(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_ico\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vlogic___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vlogic___024root___ico_sequent__TOP__0(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___ico_sequent__TOP__0\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.logic_out = (0xffffU & ((8U & (IData)(vlSelfRef.select))
                                       ? ((4U & (IData)(vlSelfRef.select))
                                           ? ((2U & (IData)(vlSelfRef.select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? (IData)(vlSelfRef.in_a)
                                                   : 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   | (IData)(vlSelfRef.in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   | (~ (IData)(vlSelfRef.in_b)))
                                                   : 0xffffU))
                                           : ((2U & (IData)(vlSelfRef.select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   & (IData)(vlSelfRef.in_b))
                                                   : (IData)(vlSelfRef.in_b))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    ^ (IData)(vlSelfRef.in_b)))
                                                   : 
                                                  ((~ (IData)(vlSelfRef.in_a)) 
                                                   | (IData)(vlSelfRef.in_b)))))
                                       : ((4U & (IData)(vlSelfRef.select))
                                           ? ((2U & (IData)(vlSelfRef.select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   & (~ (IData)(vlSelfRef.in_b)))
                                                   : 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   ^ (IData)(vlSelfRef.in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.in_b))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    & (IData)(vlSelfRef.in_b)))))
                                           : ((2U & (IData)(vlSelfRef.select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 0U
                                                   : 
                                                  ((~ (IData)(vlSelfRef.in_a)) 
                                                   & (IData)(vlSelfRef.in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    | (IData)(vlSelfRef.in_b)))
                                                   : 
                                                  (~ (IData)(vlSelfRef.in_a)))))));
}

void Vlogic___024root___eval_triggers__ico(Vlogic___024root* vlSelf);

bool Vlogic___024root___eval_phase__ico(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_phase__ico\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vlogic___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vlogic___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vlogic___024root___eval_act(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_act\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vlogic___024root___eval_nba(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_nba\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vlogic___024root___eval_triggers__act(Vlogic___024root* vlSelf);

bool Vlogic___024root___eval_phase__act(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_phase__act\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlogic___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vlogic___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlogic___024root___eval_phase__nba(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_phase__nba\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlogic___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogic___024root___dump_triggers__ico(Vlogic___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogic___024root___dump_triggers__nba(Vlogic___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogic___024root___dump_triggers__act(Vlogic___024root* vlSelf);
#endif  // VL_DEBUG

void Vlogic___024root___eval(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vlogic___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("logic.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vlogic___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vlogic___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("logic.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vlogic___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("logic.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vlogic___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vlogic___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlogic___024root___eval_debug_assertions(Vlogic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogic___024root___eval_debug_assertions\n"); );
    Vlogic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.select & 0xf0U)))) {
        Verilated::overWidthError("select");}
}
#endif  // VL_DEBUG
