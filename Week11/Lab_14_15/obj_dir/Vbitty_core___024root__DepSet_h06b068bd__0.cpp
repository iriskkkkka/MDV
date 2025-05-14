// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core__Syms.h"
#include "Vbitty_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vbitty_core___024root___eval_triggers__act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_triggers__act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbitty_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(SData/*15:0*/ val);

VL_INLINE_OPT void Vbitty_core___024root___nba_comb__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_comb__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 0xdU));
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addry 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 0xaU));
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__alusel 
        = (7U & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                 >> 2U));
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__immediate 
        = (0xffU & ((IData)(vlSelfRef.bitty_core__DOT__reginst_out) 
                    >> 5U));
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__format 
        = (3U & (IData)(vlSelfRef.bitty_core__DOT__reginst_out));
    vlSelfRef.bitty_core__DOT__eni = 0U;
    vlSelfRef.bitty_core__DOT__ens = 0U;
    vlSelfRef.bitty_core__DOT__enc = 0U;
    vlSelfRef.bitty_core__DOT__en = 0U;
    vlSelfRef.bitty_core__DOT__mux_sel = 0U;
    vlSelfRef.bitty_core__DOT__alu_sel = 0U;
    vlSelfRef.done = 0U;
    if ((0U == (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__format))) {
        if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.bitty_core__DOT__en = (0xffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx)));
                vlSelfRef.done = 1U;
            } else {
                vlSelfRef.bitty_core__DOT__enc = 1U;
                vlSelfRef.bitty_core__DOT__mux_sel 
                    = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addry;
                vlSelfRef.bitty_core__DOT__alu_sel 
                    = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__alusel;
            }
        } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.bitty_core__DOT__ens = 1U;
            vlSelfRef.bitty_core__DOT__mux_sel = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx;
        } else {
            vlSelfRef.bitty_core__DOT__eni = 1U;
            vlSelfRef.bitty_core__DOT__en = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__format))) {
        if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.bitty_core__DOT__en = (0xffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx)));
                vlSelfRef.done = 1U;
            } else {
                vlSelfRef.bitty_core__DOT__enc = 1U;
                vlSelfRef.bitty_core__DOT__imdt = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__immediate;
                vlSelfRef.bitty_core__DOT__mux_sel = 8U;
                vlSelfRef.bitty_core__DOT__alu_sel 
                    = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__alusel;
            }
        } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.bitty_core__DOT__ens = 1U;
            vlSelfRef.bitty_core__DOT__mux_sel = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx;
        } else {
            vlSelfRef.bitty_core__DOT__eni = 1U;
            vlSelfRef.bitty_core__DOT__en = 0U;
        }
    } else {
        vlSelfRef.bitty_core__DOT__eni = 0U;
        vlSelfRef.bitty_core__DOT__ens = 0U;
        vlSelfRef.bitty_core__DOT__enc = 0U;
        vlSelfRef.bitty_core__DOT__en = 0U;
        vlSelfRef.bitty_core__DOT__mux_sel = 0U;
        vlSelfRef.bitty_core__DOT__alu_sel = 0U;
        vlSelfRef.done = 0U;
    }
    if (vlSelfRef.done) {
        Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(vlSelfRef.bitty_core__DOT__creg_out);
    }
    vlSelfRef.bitty_core__DOT__reg_out[8U] = vlSelfRef.bitty_core__DOT__imdt;
    vlSelfRef.bitty_core__DOT__mux_out = ((8U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                           ? ((4U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [8U])))
                                           : ((4U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [7U]
                                                    : 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [6U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [5U]
                                                    : 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [4U]))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [3U]
                                                    : 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [2U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [1U]
                                                    : 
                                                   vlSelfRef.bitty_core__DOT__reg_out
                                                   [0U]))));
}
