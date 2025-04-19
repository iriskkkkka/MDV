// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core__Syms.h"
#include "Vbitty_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbitty_core___024root___eval_triggers__stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_triggers__stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbitty_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 8> Vbitty_core__ConstPool__TABLE_h51095072_0;
void Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(IData/*31:0*/ idx, SData/*15:0*/ val);

VL_ATTR_COLD void Vbitty_core___024root___stl_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___stl_sequent__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx1 = vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state;
    vlSelfRef.bitty_core__DOT__control_unit_init__DOT__next_state 
        = Vbitty_core__ConstPool__TABLE_h51095072_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.bitty_core__DOT__reg_out[0U] = vlSelfRef.bitty_core__DOT____Vcellout__reg0__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[1U] = vlSelfRef.bitty_core__DOT____Vcellout__reg1__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[2U] = vlSelfRef.bitty_core__DOT____Vcellout__reg2__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[3U] = vlSelfRef.bitty_core__DOT____Vcellout__reg3__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[4U] = vlSelfRef.bitty_core__DOT____Vcellout__reg4__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[5U] = vlSelfRef.bitty_core__DOT____Vcellout__reg5__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[6U] = vlSelfRef.bitty_core__DOT____Vcellout__reg6__d_out;
    vlSelfRef.bitty_core__DOT__reg_out[7U] = vlSelfRef.bitty_core__DOT____Vcellout__reg7__d_out;
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
        if ((4U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.bitty_core__DOT__eni = 0U;
                vlSelfRef.bitty_core__DOT__ens = 0U;
                vlSelfRef.bitty_core__DOT__enc = 0U;
                vlSelfRef.bitty_core__DOT__en = 0U;
                vlSelfRef.bitty_core__DOT__mux_sel = 0U;
                vlSelfRef.bitty_core__DOT__alu_sel = 0U;
                vlSelfRef.done = 0U;
            } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.bitty_core__DOT__eni = 0U;
                vlSelfRef.bitty_core__DOT__ens = 0U;
                vlSelfRef.bitty_core__DOT__enc = 0U;
                vlSelfRef.bitty_core__DOT__en = 0U;
                vlSelfRef.bitty_core__DOT__mux_sel = 0U;
                vlSelfRef.bitty_core__DOT__alu_sel = 0U;
                vlSelfRef.done = 0U;
            } else {
                vlSelfRef.bitty_core__DOT__en = (0xffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx)));
                vlSelfRef.done = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.bitty_core__DOT__en = (0xffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx)));
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
        if ((4U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.bitty_core__DOT__eni = 0U;
                vlSelfRef.bitty_core__DOT__ens = 0U;
                vlSelfRef.bitty_core__DOT__enc = 0U;
                vlSelfRef.bitty_core__DOT__en = 0U;
                vlSelfRef.bitty_core__DOT__mux_sel = 0U;
                vlSelfRef.bitty_core__DOT__alu_sel = 0U;
                vlSelfRef.done = 0U;
            } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.bitty_core__DOT__eni = 0U;
                vlSelfRef.bitty_core__DOT__ens = 0U;
                vlSelfRef.bitty_core__DOT__enc = 0U;
                vlSelfRef.bitty_core__DOT__en = 0U;
                vlSelfRef.bitty_core__DOT__mux_sel = 0U;
                vlSelfRef.bitty_core__DOT__alu_sel = 0U;
                vlSelfRef.done = 0U;
            } else {
                vlSelfRef.bitty_core__DOT__en = (0xffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx)));
                vlSelfRef.done = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.bitty_core__DOT__en = (0xffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.bitty_core__DOT__control_unit_init__DOT__addrx)));
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
    vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written[7U] 
        = vlSelfRef.bitty_core__DOT__reg_out[7U];
    vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written[6U] 
        = vlSelfRef.bitty_core__DOT__reg_out[6U];
    vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written[5U] 
        = vlSelfRef.bitty_core__DOT__reg_out[5U];
    vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written[4U] 
        = vlSelfRef.bitty_core__DOT__reg_out[4U];
    vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written[3U] 
        = vlSelfRef.bitty_core__DOT__reg_out[3U];
    vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written[2U] 
        = vlSelfRef.bitty_core__DOT__reg_out[2U];
    vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written[1U] 
        = vlSelfRef.bitty_core__DOT__reg_out[1U];
    vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written[0U] 
        = vlSelfRef.bitty_core__DOT__reg_out[0U];
    if (vlSelfRef.done) {
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(0U, 
                                                                          vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written
                                                                          [0U]);
        }
        if ((2U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(1U, 
                                                                          vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written
                                                                          [1U]);
        }
        if ((4U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(2U, 
                                                                          vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written
                                                                          [2U]);
        }
        if ((8U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(3U, 
                                                                          vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written
                                                                          [3U]);
        }
        if ((0x10U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(4U, 
                                                                          vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written
                                                                          [4U]);
        }
        if ((0x20U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(5U, 
                                                                          vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written
                                                                          [5U]);
        }
        if ((0x40U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(6U, 
                                                                          vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written
                                                                          [6U]);
        }
        if ((0x80U & (IData)(vlSelfRef.bitty_core__DOT__en))) {
            Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(7U, 
                                                                          vlSelfRef.bitty_core__DOT____Vcellinp__dpi_init__reg_written
                                                                          [7U]);
        }
    }
}
