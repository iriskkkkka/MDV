// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU___024root.h"

void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf);

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ ALU__DOT__logic_res;
    ALU__DOT__logic_res = 0;
    SData/*15:0*/ ALU__DOT__arithmetic_res;
    ALU__DOT__arithmetic_res = 0;
    CData/*0:0*/ ALU__DOT__a_carry_out;
    ALU__DOT__a_carry_out = 0;
    CData/*0:0*/ ALU__DOT__a_compare;
    ALU__DOT__a_compare = 0;
    // Body
    ALU__DOT__a_compare = 0U;
    if (((IData)(vlSelfRef.in_a) == (IData)(vlSelfRef.in_b))) {
        ALU__DOT__a_compare = 1U;
    }
    ALU__DOT__a_carry_out = 0U;
    if ((8U & (IData)(vlSelfRef.select))) {
        if ((4U & (IData)(vlSelfRef.select))) {
            if ((2U & (IData)(vlSelfRef.select))) {
                if ((1U & (IData)(vlSelfRef.select))) {
                    ALU__DOT__logic_res = (0xffffU 
                                           & (IData)(vlSelfRef.in_a));
                    ALU__DOT__a_carry_out = (1U & (1U 
                                                   & ((((IData)(vlSelfRef.in_a) 
                                                        - (IData)(1U)) 
                                                       + (IData)(vlSelfRef.carry_in)) 
                                                      >> 0x10U)));
                    ALU__DOT__arithmetic_res = (0xffffU 
                                                & (((IData)(vlSelfRef.in_a) 
                                                    - (IData)(1U)) 
                                                   + (IData)(vlSelfRef.carry_in)));
                } else {
                    ALU__DOT__logic_res = (0xffffU 
                                           & ((IData)(vlSelfRef.in_a) 
                                              | (IData)(vlSelfRef.in_b)));
                    ALU__DOT__a_carry_out = (1U & (1U 
                                                   & ((((0xffffU 
                                                         & ((IData)(vlSelfRef.in_a) 
                                                            | (~ (IData)(vlSelfRef.in_b)))) 
                                                        + (IData)(vlSelfRef.in_a)) 
                                                       + (IData)(vlSelfRef.carry_in)) 
                                                      >> 0x10U)));
                    ALU__DOT__arithmetic_res = (0xffffU 
                                                & ((((IData)(vlSelfRef.in_a) 
                                                     | (~ (IData)(vlSelfRef.in_b))) 
                                                    + (IData)(vlSelfRef.in_a)) 
                                                   + (IData)(vlSelfRef.carry_in)));
                }
            } else if ((1U & (IData)(vlSelfRef.select))) {
                ALU__DOT__logic_res = (0xffffU & ((IData)(vlSelfRef.in_a) 
                                                  | (~ (IData)(vlSelfRef.in_b))));
                ALU__DOT__a_carry_out = (1U & (1U & 
                                               (((((IData)(vlSelfRef.in_a) 
                                                   | (IData)(vlSelfRef.in_b)) 
                                                  + (IData)(vlSelfRef.in_a)) 
                                                 + (IData)(vlSelfRef.carry_in)) 
                                                >> 0x10U)));
                ALU__DOT__arithmetic_res = (0xffffU 
                                            & ((((IData)(vlSelfRef.in_a) 
                                                 | (IData)(vlSelfRef.in_b)) 
                                                + (IData)(vlSelfRef.in_a)) 
                                               + (IData)(vlSelfRef.carry_in)));
            } else {
                ALU__DOT__logic_res = (0xffffU & 0xffffU);
                ALU__DOT__a_carry_out = (1U & (1U & 
                                               ((((IData)(vlSelfRef.in_a) 
                                                  + (IData)(vlSelfRef.in_a)) 
                                                 + (IData)(vlSelfRef.carry_in)) 
                                                >> 0x10U)));
                ALU__DOT__arithmetic_res = (0xffffU 
                                            & (((IData)(vlSelfRef.in_a) 
                                                + (IData)(vlSelfRef.in_a)) 
                                               + (IData)(vlSelfRef.carry_in)));
            }
        } else if ((2U & (IData)(vlSelfRef.select))) {
            if ((1U & (IData)(vlSelfRef.select))) {
                ALU__DOT__logic_res = (0xffffU & ((IData)(vlSelfRef.in_a) 
                                                  & (IData)(vlSelfRef.in_b)));
                ALU__DOT__a_carry_out = (1U & (1U & 
                                               (((((IData)(vlSelfRef.in_a) 
                                                   & (IData)(vlSelfRef.in_b)) 
                                                  - (IData)(1U)) 
                                                 + (IData)(vlSelfRef.carry_in)) 
                                                >> 0x10U)));
                ALU__DOT__arithmetic_res = (0xffffU 
                                            & ((((IData)(vlSelfRef.in_a) 
                                                 & (IData)(vlSelfRef.in_b)) 
                                                - (IData)(1U)) 
                                               + (IData)(vlSelfRef.carry_in)));
            } else {
                ALU__DOT__logic_res = (0xffffU & (IData)(vlSelfRef.in_b));
                ALU__DOT__a_carry_out = (1U & (1U & 
                                               ((((0xffffU 
                                                   & ((IData)(vlSelfRef.in_a) 
                                                      | (~ (IData)(vlSelfRef.in_b)))) 
                                                  + 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   & (IData)(vlSelfRef.in_b))) 
                                                 + (IData)(vlSelfRef.carry_in)) 
                                                >> 0x10U)));
                ALU__DOT__arithmetic_res = (0xffffU 
                                            & ((((IData)(vlSelfRef.in_a) 
                                                 | (~ (IData)(vlSelfRef.in_b))) 
                                                + ((IData)(vlSelfRef.in_a) 
                                                   & (IData)(vlSelfRef.in_b))) 
                                               + (IData)(vlSelfRef.carry_in)));
            }
        } else if ((1U & (IData)(vlSelfRef.select))) {
            ALU__DOT__logic_res = (0xffffU & (~ ((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b))));
            ALU__DOT__a_carry_out = (1U & (1U & ((((IData)(vlSelfRef.in_a) 
                                                   + (IData)(vlSelfRef.in_b)) 
                                                  + (IData)(vlSelfRef.carry_in)) 
                                                 >> 0x10U)));
            ALU__DOT__arithmetic_res = (0xffffU & (
                                                   ((IData)(vlSelfRef.in_a) 
                                                    + (IData)(vlSelfRef.in_b)) 
                                                   + (IData)(vlSelfRef.carry_in)));
        } else {
            ALU__DOT__logic_res = (0xffffU & ((~ (IData)(vlSelfRef.in_a)) 
                                              | (IData)(vlSelfRef.in_b)));
            ALU__DOT__a_carry_out = (1U & (1U & ((((IData)(vlSelfRef.in_a) 
                                                   + 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    & (IData)(vlSelfRef.in_b))) 
                                                  + (IData)(vlSelfRef.carry_in)) 
                                                 >> 0x10U)));
            ALU__DOT__arithmetic_res = (0xffffU & (
                                                   ((IData)(vlSelfRef.in_a) 
                                                    + 
                                                    ((IData)(vlSelfRef.in_a) 
                                                     & (IData)(vlSelfRef.in_b))) 
                                                   + (IData)(vlSelfRef.carry_in)));
        }
    } else if ((4U & (IData)(vlSelfRef.select))) {
        if ((2U & (IData)(vlSelfRef.select))) {
            if ((1U & (IData)(vlSelfRef.select))) {
                ALU__DOT__logic_res = (0xffffU & ((IData)(vlSelfRef.in_a) 
                                                  & (~ (IData)(vlSelfRef.in_b))));
                ALU__DOT__a_carry_out = (1U & (1U & 
                                               (((((IData)(vlSelfRef.in_a) 
                                                   & (~ (IData)(vlSelfRef.in_b))) 
                                                  - (IData)(1U)) 
                                                 + (IData)(vlSelfRef.carry_in)) 
                                                >> 0x10U)));
                ALU__DOT__arithmetic_res = (0xffffU 
                                            & ((((IData)(vlSelfRef.in_a) 
                                                 & (~ (IData)(vlSelfRef.in_b))) 
                                                - (IData)(1U)) 
                                               + (IData)(vlSelfRef.carry_in)));
            } else {
                ALU__DOT__logic_res = (0xffffU & ((IData)(vlSelfRef.in_a) 
                                                  ^ (IData)(vlSelfRef.in_b)));
                ALU__DOT__a_carry_out = (1U & (1U & 
                                               ((((IData)(vlSelfRef.in_a) 
                                                  - (IData)(vlSelfRef.in_b)) 
                                                 + (IData)(vlSelfRef.carry_in)) 
                                                >> 0x10U)));
                ALU__DOT__arithmetic_res = (0xffffU 
                                            & (((IData)(vlSelfRef.in_a) 
                                                - (IData)(vlSelfRef.in_b)) 
                                               + (IData)(vlSelfRef.carry_in)));
            }
        } else if ((1U & (IData)(vlSelfRef.select))) {
            ALU__DOT__logic_res = (0xffffU & (~ (IData)(vlSelfRef.in_b)));
            ALU__DOT__a_carry_out = (1U & (((((IData)(vlSelfRef.in_a) 
                                              | (IData)(vlSelfRef.in_b)) 
                                             + ((IData)(vlSelfRef.in_a) 
                                                & (~ (IData)(vlSelfRef.in_b)))) 
                                            + (IData)(vlSelfRef.carry_in)) 
                                           >> 0x10U));
            ALU__DOT__arithmetic_res = (0xffffU & (
                                                   (((IData)(vlSelfRef.in_a) 
                                                     | (IData)(vlSelfRef.in_b)) 
                                                    + 
                                                    ((IData)(vlSelfRef.in_a) 
                                                     & (~ (IData)(vlSelfRef.in_b)))) 
                                                   + (IData)(vlSelfRef.carry_in)));
        } else {
            ALU__DOT__logic_res = (0xffffU & (~ ((IData)(vlSelfRef.in_a) 
                                                 & (IData)(vlSelfRef.in_b))));
            ALU__DOT__arithmetic_res = (0xffffU & ((IData)(vlSelfRef.in_a) 
                                                   | ((IData)(vlSelfRef.in_a) 
                                                      & (~ (IData)(vlSelfRef.in_b)))));
        }
    } else if ((2U & (IData)(vlSelfRef.select))) {
        if ((1U & (IData)(vlSelfRef.select))) {
            ALU__DOT__logic_res = (0xffffU & 0U);
            ALU__DOT__arithmetic_res = (0xffffU & 0xffffU);
        } else {
            ALU__DOT__logic_res = (0xffffU & ((~ (IData)(vlSelfRef.in_a)) 
                                              & (IData)(vlSelfRef.in_b)));
            ALU__DOT__arithmetic_res = (0xffffU & ((IData)(vlSelfRef.in_a) 
                                                   | (~ (IData)(vlSelfRef.in_b))));
        }
    } else if ((1U & (IData)(vlSelfRef.select))) {
        ALU__DOT__logic_res = (0xffffU & (~ ((IData)(vlSelfRef.in_a) 
                                             | (IData)(vlSelfRef.in_b))));
        ALU__DOT__arithmetic_res = (0xffffU & ((IData)(vlSelfRef.in_a) 
                                               | (IData)(vlSelfRef.in_b)));
    } else {
        ALU__DOT__logic_res = (0xffffU & (~ (IData)(vlSelfRef.in_a)));
        ALU__DOT__arithmetic_res = (0xffffU & (IData)(vlSelfRef.in_a));
    }
    vlSelfRef.compare = ((~ (IData)(vlSelfRef.mode)) 
                         & (IData)(ALU__DOT__a_compare));
    vlSelfRef.carry_out = ((~ (IData)(vlSelfRef.mode)) 
                           & (IData)(ALU__DOT__a_carry_out));
    vlSelfRef.alu_out = ((IData)(vlSelfRef.mode) ? (IData)(ALU__DOT__logic_res)
                          : (IData)(ALU__DOT__arithmetic_res));
}

void VALU___024root___eval_triggers__ico(VALU___024root* vlSelf);

bool VALU___024root___eval_phase__ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VALU___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VALU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VALU___024root___eval_act(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_act\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VALU___024root___eval_nba(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_nba\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VALU___024root___eval_triggers__act(VALU___024root* vlSelf);

bool VALU___024root___eval_phase__act(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__act\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VALU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VALU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VALU___024root___eval_phase__nba(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__nba\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VALU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__nba(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VALU___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/ALU.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VALU___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/ALU.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/ALU.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VALU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VALU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.carry_in & 0xfeU)))) {
        Verilated::overWidthError("carry_in");}
    if (VL_UNLIKELY(((vlSelfRef.select & 0xf0U)))) {
        Verilated::overWidthError("select");}
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfeU)))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
