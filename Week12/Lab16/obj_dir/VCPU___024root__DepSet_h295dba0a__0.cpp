// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU___024root.h"

void VCPU___024root___eval_act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf);
void VCPU___024root___nba_sequent__TOP__1(VCPU___024root* vlSelf);
void VCPU___024root___nba_sequent__TOP__2(VCPU___024root* vlSelf);
void VCPU___024root___nba_comb__TOP__0(VCPU___024root* vlSelf);

void VCPU___024root___eval_nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__2(vlSelf);
        VCPU___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 4> VCPU__ConstPool__TABLE_hcac39648_0;

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__CPU__DOT__addr = vlSelfRef.CPU__DOT__addr;
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__CPU__DOT__addr = 0U;
        vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state = 0U;
    } else {
        if (vlSelfRef.CPU__DOT__done) {
            vlSelfRef.__Vdly__CPU__DOT__addr = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.CPU__DOT__addr)));
        }
        vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state 
            = ((IData)(vlSelfRef.run) ? (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__next_state)
                : (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state));
    }
    vlSelfRef.__Vtableidx1 = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state;
    vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__next_state 
        = VCPU__ConstPool__TABLE_hcac39648_0[vlSelfRef.__Vtableidx1];
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__1(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.CPU__DOT__core__DOT__reginst_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg0__d_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg1__d_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg2__d_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg3__d_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg4__d_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg5__d_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg6__d_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg7__d_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT__creg_out = 0U;
        vlSelfRef.CPU__DOT__core__DOT__sreg_out = 0U;
    } else {
        if (vlSelfRef.CPU__DOT__core__DOT__eni) {
            vlSelfRef.CPU__DOT__core__DOT__reginst_out 
                = vlSelfRef.CPU__DOT__instr;
        }
        if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__en))) {
            vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg0__d_out 
                = vlSelfRef.CPU__DOT__core__DOT__creg_out;
        }
        if ((2U & (IData)(vlSelfRef.CPU__DOT__core__DOT__en))) {
            vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg1__d_out 
                = vlSelfRef.CPU__DOT__core__DOT__creg_out;
        }
        if ((4U & (IData)(vlSelfRef.CPU__DOT__core__DOT__en))) {
            vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg2__d_out 
                = vlSelfRef.CPU__DOT__core__DOT__creg_out;
        }
        if ((8U & (IData)(vlSelfRef.CPU__DOT__core__DOT__en))) {
            vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg3__d_out 
                = vlSelfRef.CPU__DOT__core__DOT__creg_out;
        }
        if ((0x10U & (IData)(vlSelfRef.CPU__DOT__core__DOT__en))) {
            vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg4__d_out 
                = vlSelfRef.CPU__DOT__core__DOT__creg_out;
        }
        if ((0x20U & (IData)(vlSelfRef.CPU__DOT__core__DOT__en))) {
            vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg5__d_out 
                = vlSelfRef.CPU__DOT__core__DOT__creg_out;
        }
        if ((0x40U & (IData)(vlSelfRef.CPU__DOT__core__DOT__en))) {
            vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg6__d_out 
                = vlSelfRef.CPU__DOT__core__DOT__creg_out;
        }
        if ((0x80U & (IData)(vlSelfRef.CPU__DOT__core__DOT__en))) {
            vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg7__d_out 
                = vlSelfRef.CPU__DOT__core__DOT__creg_out;
        }
        if (vlSelfRef.CPU__DOT__core__DOT__enc) {
            vlSelfRef.CPU__DOT__core__DOT__creg_out 
                = (0xffffU & ((4U & (IData)(vlSelfRef.CPU__DOT__core__DOT__alu_sel))
                               ? ((2U & (IData)(vlSelfRef.CPU__DOT__core__DOT__alu_sel))
                                   ? ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__alu_sel))
                                       ? (((IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out) 
                                           == (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out))
                                           ? 0U : (
                                                   ((IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out) 
                                                    > (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out))
                                                    ? 1U
                                                    : 2U))
                                       : VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out), (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out)))
                                   : ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__alu_sel))
                                       ? VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out), (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out))
                                       : ((IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out) 
                                          ^ (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out))))
                               : ((2U & (IData)(vlSelfRef.CPU__DOT__core__DOT__alu_sel))
                                   ? ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__alu_sel))
                                       ? ((IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out) 
                                          | (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out))
                                       : ((IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out) 
                                          & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out)))
                                   : ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__alu_sel))
                                       ? ((IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out) 
                                          - (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out))
                                       : ((IData)(vlSelfRef.CPU__DOT__core__DOT__sreg_out) 
                                          + (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_out))))));
        }
        if (vlSelfRef.CPU__DOT__core__DOT__ens) {
            vlSelfRef.CPU__DOT__core__DOT__sreg_out 
                = vlSelfRef.CPU__DOT__core__DOT__mux_out;
        }
    }
    vlSelfRef.CPU__DOT__instr = vlSelfRef.CPU__DOT__mem__DOT__mem
        [vlSelfRef.CPU__DOT__addr];
    vlSelfRef.CPU__DOT__core__DOT__reg_out[0U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg0__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[1U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg1__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[2U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg2__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[3U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg3__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[4U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg4__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[5U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg5__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[6U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg6__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[7U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg7__d_out;
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__2(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__2\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CPU__DOT__addr = vlSelfRef.__Vdly__CPU__DOT__addr;
}

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf);

bool VCPU___024root___eval_phase__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VCPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCPU___024root___eval_phase__nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCPU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VCPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/CPU.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VCPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/CPU.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VCPU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VCPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_debug_assertions\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.run & 0xfeU)))) {
        Verilated::overWidthError("run");}
}
#endif  // VL_DEBUG
