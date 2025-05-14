// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU__Syms.h"
#include "VCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root___eval_triggers__stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 4> VCPU__ConstPool__TABLE_hcac39648_0;
void VCPU___024unit____Vdpiimwrap_output_reg_TOP____024unit(SData/*15:0*/ val);

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___stl_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CPU__DOT__runo = 1U;
    vlSelfRef.__Vtableidx1 = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state;
    vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__next_state 
        = VCPU__ConstPool__TABLE_hcac39648_0[vlSelfRef.__Vtableidx1];
    vlSelfRef.CPU__DOT__addr_new = vlSelfRef.CPU__DOT__addr_old;
    if ((2U == (3U & (IData)(vlSelfRef.CPU__DOT__instr)))) {
        if ((0U == (3U & ((IData)(vlSelfRef.CPU__DOT__instr) 
                          >> 2U)))) {
            vlSelfRef.CPU__DOT__runo = 0U;
            vlSelfRef.CPU__DOT__addr_new = (0xffU & 
                                            ((0U == (IData)(vlSelfRef.CPU__DOT__core__DOT__creg_out))
                                              ? ((IData)(vlSelfRef.CPU__DOT__instr) 
                                                 >> 4U)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.CPU__DOT__addr_old))));
        } else if ((1U == (3U & ((IData)(vlSelfRef.CPU__DOT__instr) 
                                 >> 2U)))) {
            vlSelfRef.CPU__DOT__runo = 0U;
            vlSelfRef.CPU__DOT__addr_new = (0xffU & 
                                            ((1U == (IData)(vlSelfRef.CPU__DOT__core__DOT__creg_out))
                                              ? ((IData)(vlSelfRef.CPU__DOT__instr) 
                                                 >> 4U)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.CPU__DOT__addr_old))));
        } else if ((2U == (3U & ((IData)(vlSelfRef.CPU__DOT__instr) 
                                 >> 2U)))) {
            vlSelfRef.CPU__DOT__runo = 0U;
            vlSelfRef.CPU__DOT__addr_new = (0xffU & 
                                            ((2U == (IData)(vlSelfRef.CPU__DOT__core__DOT__creg_out))
                                              ? ((IData)(vlSelfRef.CPU__DOT__instr) 
                                                 >> 4U)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.CPU__DOT__addr_old))));
        } else if ((3U == (3U & ((IData)(vlSelfRef.CPU__DOT__instr) 
                                 >> 2U)))) {
            vlSelfRef.CPU__DOT__runo = 0U;
            vlSelfRef.CPU__DOT__addr_new = (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.CPU__DOT__addr_old)));
        }
    }
    vlSelfRef.CPU__DOT__core__DOT__reg_out[0U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg0__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[1U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg1__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[2U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg2__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[3U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg3__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[4U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg4__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[5U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg5__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[6U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg6__d_out;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[7U] = vlSelfRef.CPU__DOT__core__DOT____Vcellout__reg7__d_out;
    vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addrx 
        = (7U & ((IData)(vlSelfRef.CPU__DOT__core__DOT__reginst_out) 
                 >> 0xdU));
    vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addry 
        = (7U & ((IData)(vlSelfRef.CPU__DOT__core__DOT__reginst_out) 
                 >> 0xaU));
    vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__alusel 
        = (7U & ((IData)(vlSelfRef.CPU__DOT__core__DOT__reginst_out) 
                 >> 2U));
    vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__immediate 
        = (0xffU & ((IData)(vlSelfRef.CPU__DOT__core__DOT__reginst_out) 
                    >> 5U));
    vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__format 
        = (3U & (IData)(vlSelfRef.CPU__DOT__core__DOT__reginst_out));
    vlSelfRef.CPU__DOT__core__DOT__eni = 0U;
    vlSelfRef.CPU__DOT__core__DOT__ens = 0U;
    vlSelfRef.CPU__DOT__core__DOT__enc = 0U;
    vlSelfRef.CPU__DOT__core__DOT__en = 0U;
    vlSelfRef.CPU__DOT__core__DOT__mux_sel = 0U;
    vlSelfRef.CPU__DOT__core__DOT__alu_sel = 0U;
    vlSelfRef.CPU__DOT__done = 0U;
    if ((0U == (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__format))) {
        if ((2U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.CPU__DOT__core__DOT__en = 
                    (0xffU & ((IData)(1U) << (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addrx)));
                vlSelfRef.CPU__DOT__done = 1U;
            } else {
                vlSelfRef.CPU__DOT__core__DOT__enc = 1U;
                vlSelfRef.CPU__DOT__core__DOT__mux_sel 
                    = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addry;
                vlSelfRef.CPU__DOT__core__DOT__alu_sel 
                    = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__alusel;
            }
        } else if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.CPU__DOT__core__DOT__ens = 1U;
            vlSelfRef.CPU__DOT__core__DOT__mux_sel 
                = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addrx;
        } else {
            vlSelfRef.CPU__DOT__core__DOT__eni = 1U;
            vlSelfRef.CPU__DOT__core__DOT__en = 0U;
            vlSelfRef.CPU__DOT__done = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__format))) {
        if ((2U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
                vlSelfRef.CPU__DOT__core__DOT__en = 
                    (0xffU & ((IData)(1U) << (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addrx)));
                vlSelfRef.CPU__DOT__done = 1U;
            } else {
                vlSelfRef.CPU__DOT__core__DOT__enc = 1U;
                vlSelfRef.CPU__DOT__core__DOT__imdt 
                    = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__immediate;
                vlSelfRef.CPU__DOT__core__DOT__mux_sel = 8U;
                vlSelfRef.CPU__DOT__core__DOT__alu_sel 
                    = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__alusel;
            }
        } else if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.CPU__DOT__core__DOT__ens = 1U;
            vlSelfRef.CPU__DOT__core__DOT__mux_sel 
                = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addrx;
        } else {
            vlSelfRef.CPU__DOT__core__DOT__eni = 1U;
            vlSelfRef.CPU__DOT__core__DOT__en = 0U;
            vlSelfRef.CPU__DOT__done = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__format))) {
        if ((0U == (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.CPU__DOT__core__DOT__eni = 1U;
            vlSelfRef.CPU__DOT__core__DOT__en = 0U;
            vlSelfRef.CPU__DOT__done = 0U;
        } else {
            vlSelfRef.CPU__DOT__core__DOT__eni = 0U;
            vlSelfRef.CPU__DOT__core__DOT__ens = 0U;
            vlSelfRef.CPU__DOT__core__DOT__enc = 0U;
            vlSelfRef.CPU__DOT__core__DOT__en = 0U;
            vlSelfRef.CPU__DOT__core__DOT__mux_sel = 0U;
            vlSelfRef.CPU__DOT__core__DOT__alu_sel = 0U;
            vlSelfRef.CPU__DOT__done = 0U;
        }
    } else {
        vlSelfRef.CPU__DOT__core__DOT__eni = 0U;
        vlSelfRef.CPU__DOT__core__DOT__ens = 0U;
        vlSelfRef.CPU__DOT__core__DOT__enc = 0U;
        vlSelfRef.CPU__DOT__core__DOT__en = 0U;
        vlSelfRef.CPU__DOT__core__DOT__mux_sel = 0U;
        vlSelfRef.CPU__DOT__core__DOT__alu_sel = 0U;
        vlSelfRef.CPU__DOT__done = 0U;
    }
    vlSelfRef.addr_newe = vlSelfRef.CPU__DOT__addr_new;
    if (vlSelfRef.CPU__DOT__done) {
        VCPU___024unit____Vdpiimwrap_output_reg_TOP____024unit(vlSelfRef.CPU__DOT__core__DOT__creg_out);
    } else {
        VCPU___024unit____Vdpiimwrap_output_reg_TOP____024unit(0U);
    }
    vlSelfRef.donee = vlSelfRef.CPU__DOT__done;
    vlSelfRef.CPU__DOT__core__DOT__reg_out[8U] = vlSelfRef.CPU__DOT__core__DOT__imdt;
    vlSelfRef.CPU__DOT__core__DOT__mux_out = ((8U & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                               ? ((4U 
                                                   & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                     ? 0U
                                                     : 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [8U])))
                                               : ((4U 
                                                   & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                     ? 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [7U]
                                                     : 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [6U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                     ? 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [5U]
                                                     : 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [4U]))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                     ? 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [3U]
                                                     : 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [2U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CPU__DOT__core__DOT__mux_sel))
                                                     ? 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [1U]
                                                     : 
                                                    vlSelfRef.CPU__DOT__core__DOT__reg_out
                                                    [0U]))));
    vlSelfRef.reg_oute[8U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [8U];
    vlSelfRef.reg_oute[7U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [7U];
    vlSelfRef.reg_oute[6U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [6U];
    vlSelfRef.reg_oute[5U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [5U];
    vlSelfRef.reg_oute[4U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [4U];
    vlSelfRef.reg_oute[3U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [3U];
    vlSelfRef.reg_oute[2U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [2U];
    vlSelfRef.reg_oute[1U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [1U];
    vlSelfRef.reg_oute[0U] = vlSelfRef.CPU__DOT__core__DOT__reg_out
        [0U];
}
