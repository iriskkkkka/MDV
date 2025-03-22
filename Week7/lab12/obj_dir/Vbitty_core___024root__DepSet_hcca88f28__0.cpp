// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core___024root.h"

void Vbitty_core___024root___eval_act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbitty_core___024root___nba_sequent__TOP__0(Vbitty_core___024root* vlSelf);
void Vbitty_core___024root___nba_sequent__TOP__1(Vbitty_core___024root* vlSelf);
void Vbitty_core___024root___nba_sequent__TOP__2(Vbitty_core___024root* vlSelf);
void Vbitty_core___024root___nba_comb__TOP__0(Vbitty_core___024root* vlSelf);

void Vbitty_core___024root___eval_nba(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_nba\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__2(vlSelf);
        Vbitty_core___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 4> Vbitty_core__ConstPool__TABLE_hcac39648_0;

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state 
        = ((IData)(vlSelfRef.rst) ? 0U : ((IData)(vlSelfRef.run)
                                           ? (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__next_state)
                                           : (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state)));
    vlSelfRef.done = 0U;
    if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.done = 1U;
        }
    }
    __Vtableidx1 = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state;
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__next_state 
        = Vbitty_core__ConstPool__TABLE_hcac39648_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__1(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__1\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x80U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
        vlSelfRef.bitty_core__DOT____Vcellout__reg7__d_out = 0xabcU;
    }
    if ((1U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
        vlSelfRef.bitty_core__DOT____Vcellout__reg0__d_out 
            = vlSelfRef.bitty_core__DOT__creg_out;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.bitty_core__DOT__reginst_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg1__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg2__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg3__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg4__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg5__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg6__d_out = 0U;
        vlSelfRef.bitty_core__DOT__creg_out = 0U;
        vlSelfRef.bitty_core__DOT__sreg_out = 0U;
    } else {
        if (vlSelfRef.bitty_core__DOT__eni) {
            vlSelfRef.bitty_core__DOT__reginst_out 
                = vlSelfRef.instr;
        }
        if ((2U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg1__d_out 
                = vlSelfRef.bitty_core__DOT__creg_out;
        }
        if ((4U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg2__d_out 
                = vlSelfRef.bitty_core__DOT__creg_out;
        }
        if ((8U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg3__d_out 
                = vlSelfRef.bitty_core__DOT__creg_out;
        }
        if ((0x10U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg4__d_out 
                = vlSelfRef.bitty_core__DOT__creg_out;
        }
        if ((0x20U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg5__d_out 
                = vlSelfRef.bitty_core__DOT__creg_out;
        }
        if ((0x40U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg6__d_out 
                = vlSelfRef.bitty_core__DOT__creg_out;
        }
        if (vlSelfRef.bitty_core__DOT__enc) {
            vlSelfRef.bitty_core__DOT__creg_out = (0xffffU 
                                                   & ((4U 
                                                       & (IData)(vlSelfRef.bitty_core__DOT__alu_sel))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.bitty_core__DOT__alu_sel))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__alu_sel))
                                                         ? 
                                                        (((IData)(vlSelfRef.bitty_core__DOT__sreg_out) 
                                                          == (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                          ? 0U
                                                          : 
                                                         (((IData)(vlSelfRef.bitty_core__DOT__sreg_out) 
                                                           > (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                           ? 1U
                                                           : 2U))
                                                         : 
                                                        VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.bitty_core__DOT__sreg_out), (IData)(vlSelfRef.bitty_core__DOT__mux_out)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__alu_sel))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.bitty_core__DOT__sreg_out), (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                         : 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__sreg_out) 
                                                         ^ (IData)(vlSelfRef.bitty_core__DOT__mux_out))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.bitty_core__DOT__alu_sel))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__alu_sel))
                                                         ? 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__sreg_out) 
                                                         | (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                         : 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__sreg_out) 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__mux_out)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__alu_sel))
                                                         ? 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__sreg_out) 
                                                         - (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                         : 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__sreg_out) 
                                                         + (IData)(vlSelfRef.bitty_core__DOT__mux_out))))));
        }
        if (vlSelfRef.bitty_core__DOT__ens) {
            vlSelfRef.bitty_core__DOT__sreg_out = vlSelfRef.bitty_core__DOT__mux_out;
        }
    }
    vlSelfRef.bitty_core__DOT__reg_out[7U] = vlSelfRef.bitty_core__DOT____Vcellout__reg7__d_out;
    vlSelfRef.debug_reginst_out = vlSelfRef.bitty_core__DOT__reginst_out;
    vlSelfRef.debug_reg0_out = vlSelfRef.bitty_core__DOT____Vcellout__reg0__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[0U] = vlSelfRef.bitty_core__DOT____Vcellout__reg0__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[1U] = vlSelfRef.bitty_core__DOT____Vcellout__reg1__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[2U] = vlSelfRef.bitty_core__DOT____Vcellout__reg2__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[3U] = vlSelfRef.bitty_core__DOT____Vcellout__reg3__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[4U] = vlSelfRef.bitty_core__DOT____Vcellout__reg4__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[5U] = vlSelfRef.bitty_core__DOT____Vcellout__reg5__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[6U] = vlSelfRef.bitty_core__DOT____Vcellout__reg6__d_out;
    vlSelfRef.debug_creg_out = vlSelfRef.bitty_core__DOT__creg_out;
    vlSelfRef.debug_sreg_out = vlSelfRef.bitty_core__DOT__sreg_out;
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__2(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__2\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bitty_core__DOT__eni = 0U;
    vlSelfRef.bitty_core__DOT__enc = 0U;
    if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state)))) {
            vlSelfRef.bitty_core__DOT__enc = 1U;
        }
    }
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
}

VL_INLINE_OPT void Vbitty_core___024root___nba_comb__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_comb__TOP__0\n"); );
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
    // Body
    bitty_core__DOT__control_unit_init__DOT__addrx 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 0xdU));
    bitty_core__DOT__control_unit_init__DOT__addry 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 0xaU));
    vlSelfRef.bitty_core__DOT__en = 0x81U;
    bitty_core__DOT__mux_sel = 0U;
    bitty_core__DOT__control_unit_init__DOT__alusel 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 2U));
    vlSelfRef.bitty_core__DOT__alu_sel = 0U;
    if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.bitty_core__DOT__en = (0xffU 
                                             & ((IData)(1U) 
                                                << (IData)(bitty_core__DOT__control_unit_init__DOT__addrx)));
        } else {
            bitty_core__DOT__mux_sel = bitty_core__DOT__control_unit_init__DOT__addry;
        }
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state)))) {
            vlSelfRef.bitty_core__DOT__alu_sel = bitty_core__DOT__control_unit_init__DOT__alusel;
        }
    } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
        bitty_core__DOT__mux_sel = bitty_core__DOT__control_unit_init__DOT__addrx;
    }
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

void Vbitty_core___024root___eval_triggers__act(Vbitty_core___024root* vlSelf);

bool Vbitty_core___024root___eval_phase__act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbitty_core___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbitty_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbitty_core___024root___eval_phase__nba(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__nba\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbitty_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__nba(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vbitty_core___024root___eval(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbitty_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/bitty_core.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbitty_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/bitty_core.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbitty_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbitty_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbitty_core___024root___eval_debug_assertions(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_debug_assertions\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
