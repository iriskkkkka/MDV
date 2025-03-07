// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varithmetic.h for the primary calling header

#include "Varithmetic__pch.h"
#include "Varithmetic___024root.h"

void Varithmetic___024root___ico_sequent__TOP__0(Varithmetic___024root* vlSelf);

void Varithmetic___024root___eval_ico(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_ico\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Varithmetic___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Varithmetic___024root___ico_sequent__TOP__0(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___ico_sequent__TOP__0\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.compare = 0U;
    if (((IData)(vlSelfRef.in_a) == (IData)(vlSelfRef.in_b))) {
        vlSelfRef.compare = 1U;
    }
    vlSelfRef.arithmetic_out = 0U;
    vlSelfRef.carry_out = 0U;
    if ((8U & (IData)(vlSelfRef.select))) {
        if ((4U & (IData)(vlSelfRef.select))) {
            if ((2U & (IData)(vlSelfRef.select))) {
                if ((1U & (IData)(vlSelfRef.select))) {
                    vlSelfRef.arithmetic_out = (0xffffU 
                                                & (((IData)(vlSelfRef.in_a) 
                                                    - (IData)(1U)) 
                                                   + (IData)(vlSelfRef.carry_in)));
                    vlSelfRef.carry_out = (1U & (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      - (IData)(1U)) 
                                                     + (IData)(vlSelfRef.carry_in)) 
                                                    >> 0x10U)));
                } else {
                    vlSelfRef.arithmetic_out = (0xffffU 
                                                & ((((IData)(vlSelfRef.in_a) 
                                                     | (~ (IData)(vlSelfRef.in_b))) 
                                                    + (IData)(vlSelfRef.in_a)) 
                                                   + (IData)(vlSelfRef.carry_in)));
                    vlSelfRef.carry_out = (1U & (1U 
                                                 & ((((0xffffU 
                                                       & ((IData)(vlSelfRef.in_a) 
                                                          | (~ (IData)(vlSelfRef.in_b)))) 
                                                      + (IData)(vlSelfRef.in_a)) 
                                                     + (IData)(vlSelfRef.carry_in)) 
                                                    >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.select))) {
                vlSelfRef.arithmetic_out = (0xffffU 
                                            & ((((IData)(vlSelfRef.in_a) 
                                                 | (IData)(vlSelfRef.in_b)) 
                                                + (IData)(vlSelfRef.in_a)) 
                                               + (IData)(vlSelfRef.carry_in)));
                vlSelfRef.carry_out = (1U & (1U & (
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      | (IData)(vlSelfRef.in_b)) 
                                                     + (IData)(vlSelfRef.in_a)) 
                                                    + (IData)(vlSelfRef.carry_in)) 
                                                   >> 0x10U)));
            } else {
                vlSelfRef.arithmetic_out = (0xffffU 
                                            & (((IData)(vlSelfRef.in_a) 
                                                + (IData)(vlSelfRef.in_a)) 
                                               + (IData)(vlSelfRef.carry_in)));
                vlSelfRef.carry_out = (1U & (1U & (
                                                   (((IData)(vlSelfRef.in_a) 
                                                     + (IData)(vlSelfRef.in_a)) 
                                                    + (IData)(vlSelfRef.carry_in)) 
                                                   >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.select))) {
            if ((1U & (IData)(vlSelfRef.select))) {
                vlSelfRef.arithmetic_out = (0xffffU 
                                            & ((((IData)(vlSelfRef.in_a) 
                                                 & (IData)(vlSelfRef.in_b)) 
                                                - (IData)(1U)) 
                                               + (IData)(vlSelfRef.carry_in)));
                vlSelfRef.carry_out = (1U & (1U & (
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      & (IData)(vlSelfRef.in_b)) 
                                                     - (IData)(1U)) 
                                                    + (IData)(vlSelfRef.carry_in)) 
                                                   >> 0x10U)));
            } else {
                vlSelfRef.arithmetic_out = (0xffffU 
                                            & ((((IData)(vlSelfRef.in_a) 
                                                 | (~ (IData)(vlSelfRef.in_b))) 
                                                + ((IData)(vlSelfRef.in_a) 
                                                   & (IData)(vlSelfRef.in_b))) 
                                               + (IData)(vlSelfRef.carry_in)));
                vlSelfRef.carry_out = (1U & (1U & (
                                                   (((0xffffU 
                                                      & ((IData)(vlSelfRef.in_a) 
                                                         | (~ (IData)(vlSelfRef.in_b)))) 
                                                     + 
                                                     ((IData)(vlSelfRef.in_a) 
                                                      & (IData)(vlSelfRef.in_b))) 
                                                    + (IData)(vlSelfRef.carry_in)) 
                                                   >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.select))) {
            vlSelfRef.arithmetic_out = (0xffffU & (
                                                   ((IData)(vlSelfRef.in_a) 
                                                    + (IData)(vlSelfRef.in_b)) 
                                                   + (IData)(vlSelfRef.carry_in)));
            vlSelfRef.carry_out = (1U & (1U & ((((IData)(vlSelfRef.in_a) 
                                                 + (IData)(vlSelfRef.in_b)) 
                                                + (IData)(vlSelfRef.carry_in)) 
                                               >> 0x10U)));
        } else {
            vlSelfRef.arithmetic_out = (0xffffU & (
                                                   ((IData)(vlSelfRef.in_a) 
                                                    + 
                                                    ((IData)(vlSelfRef.in_a) 
                                                     & (IData)(vlSelfRef.in_b))) 
                                                   + (IData)(vlSelfRef.carry_in)));
            vlSelfRef.carry_out = (1U & (1U & ((((IData)(vlSelfRef.in_a) 
                                                 + 
                                                 ((IData)(vlSelfRef.in_a) 
                                                  & (IData)(vlSelfRef.in_b))) 
                                                + (IData)(vlSelfRef.carry_in)) 
                                               >> 0x10U)));
        }
    } else if ((4U & (IData)(vlSelfRef.select))) {
        if ((2U & (IData)(vlSelfRef.select))) {
            if ((1U & (IData)(vlSelfRef.select))) {
                vlSelfRef.arithmetic_out = (0xffffU 
                                            & ((((IData)(vlSelfRef.in_a) 
                                                 & (~ (IData)(vlSelfRef.in_b))) 
                                                - (IData)(1U)) 
                                               + (IData)(vlSelfRef.carry_in)));
                vlSelfRef.carry_out = (1U & (1U & (
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      & (~ (IData)(vlSelfRef.in_b))) 
                                                     - (IData)(1U)) 
                                                    + (IData)(vlSelfRef.carry_in)) 
                                                   >> 0x10U)));
            } else {
                vlSelfRef.arithmetic_out = (0xffffU 
                                            & (((IData)(vlSelfRef.in_a) 
                                                + (~ (IData)(vlSelfRef.in_b))) 
                                               + (IData)(vlSelfRef.carry_in)));
                vlSelfRef.carry_out = (1U & (1U & (
                                                   (((IData)(vlSelfRef.in_a) 
                                                     + 
                                                     (0xffffU 
                                                      & (~ (IData)(vlSelfRef.in_b)))) 
                                                    + (IData)(vlSelfRef.carry_in)) 
                                                   >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.select))) {
            vlSelfRef.arithmetic_out = (0xffffU & (
                                                   (((IData)(vlSelfRef.in_a) 
                                                     | (IData)(vlSelfRef.in_b)) 
                                                    + 
                                                    ((IData)(vlSelfRef.in_a) 
                                                     & (~ (IData)(vlSelfRef.in_b)))) 
                                                   + (IData)(vlSelfRef.carry_in)));
            vlSelfRef.carry_out = (1U & (((((IData)(vlSelfRef.in_a) 
                                            | (IData)(vlSelfRef.in_b)) 
                                           + ((IData)(vlSelfRef.in_a) 
                                              & (~ (IData)(vlSelfRef.in_b)))) 
                                          + (IData)(vlSelfRef.carry_in)) 
                                         >> 0x10U));
        } else {
            vlSelfRef.arithmetic_out = (0xffffU & ((IData)(vlSelfRef.in_a) 
                                                   | ((IData)(vlSelfRef.in_a) 
                                                      & (~ (IData)(vlSelfRef.in_b)))));
        }
    } else {
        vlSelfRef.arithmetic_out = (0xffffU & ((2U 
                                                & (IData)(vlSelfRef.select))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.select))
                                                    ? 0xffffU
                                                    : 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    | (~ (IData)(vlSelfRef.in_b))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.select))
                                                    ? 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    | (IData)(vlSelfRef.in_b))
                                                    : (IData)(vlSelfRef.in_a))));
    }
}

void Varithmetic___024root___eval_triggers__ico(Varithmetic___024root* vlSelf);

bool Varithmetic___024root___eval_phase__ico(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_phase__ico\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Varithmetic___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Varithmetic___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Varithmetic___024root___eval_act(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_act\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Varithmetic___024root___eval_nba(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_nba\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Varithmetic___024root___eval_triggers__act(Varithmetic___024root* vlSelf);

bool Varithmetic___024root___eval_phase__act(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_phase__act\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Varithmetic___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Varithmetic___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Varithmetic___024root___eval_phase__nba(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_phase__nba\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Varithmetic___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic___024root___dump_triggers__ico(Varithmetic___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic___024root___dump_triggers__nba(Varithmetic___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic___024root___dump_triggers__act(Varithmetic___024root* vlSelf);
#endif  // VL_DEBUG

void Varithmetic___024root___eval(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Varithmetic___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("arithmetic.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Varithmetic___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Varithmetic___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("arithmetic.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Varithmetic___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("arithmetic.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Varithmetic___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Varithmetic___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Varithmetic___024root___eval_debug_assertions(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_debug_assertions\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.carry_in & 0xfeU)))) {
        Verilated::overWidthError("carry_in");}
    if (VL_UNLIKELY(((vlSelfRef.select & 0xf0U)))) {
        Verilated::overWidthError("select");}
}
#endif  // VL_DEBUG
