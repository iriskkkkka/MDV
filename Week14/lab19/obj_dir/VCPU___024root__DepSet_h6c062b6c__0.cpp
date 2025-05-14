// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU__Syms.h"
#include "VCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        VCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VCPU___024unit____Vdpiimwrap_output_reg_TOP____024unit(SData/*15:0*/ val);

VL_INLINE_OPT void VCPU___024root___nba_comb__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_comb__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CPU__DOT__addr_new = vlSelfRef.CPU__DOT__addr_old;
    if ((2U == (3U & (IData)(vlSelfRef.CPU__DOT__instr)))) {
        if ((0U == (3U & ((IData)(vlSelfRef.CPU__DOT__instr) 
                          >> 2U)))) {
            vlSelfRef.CPU__DOT__addr_new = (0xffU & 
                                            ((0U == (IData)(vlSelfRef.CPU__DOT__core__DOT__creg_out))
                                              ? ((IData)(vlSelfRef.CPU__DOT__instr) 
                                                 >> 4U)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.CPU__DOT__addr_old))));
        } else if ((1U == (3U & ((IData)(vlSelfRef.CPU__DOT__instr) 
                                 >> 2U)))) {
            vlSelfRef.CPU__DOT__addr_new = (0xffU & 
                                            ((1U == (IData)(vlSelfRef.CPU__DOT__core__DOT__creg_out))
                                              ? ((IData)(vlSelfRef.CPU__DOT__instr) 
                                                 >> 4U)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.CPU__DOT__addr_old))));
        } else if ((2U == (3U & ((IData)(vlSelfRef.CPU__DOT__instr) 
                                 >> 2U)))) {
            vlSelfRef.CPU__DOT__addr_new = (0xffU & 
                                            ((2U == (IData)(vlSelfRef.CPU__DOT__core__DOT__creg_out))
                                              ? ((IData)(vlSelfRef.CPU__DOT__instr) 
                                                 >> 4U)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.CPU__DOT__addr_old))));
        }
    }
    vlSelfRef.runs = ((IData)(vlSelfRef.CPU__DOT__runi) 
                      & (IData)(vlSelfRef.CPU__DOT__runo));
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
    vlSelfRef.CPU__DOT__core__DOT__enls = 0U;
    vlSelfRef.CPU__DOT__core__DOT__sel_ls = 0U;
    vlSelfRef.CPU__DOT__core__DOT__mux_sel = 0U;
    vlSelfRef.CPU__DOT__core__DOT__alu_sel = 0U;
    vlSelfRef.CPU__DOT__done = 0U;
    vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__ls 
        = (1U & ((IData)(vlSelfRef.CPU__DOT__core__DOT__reginst_out) 
                 >> 2U));
    if ((2U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__format))) {
        if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__format))) {
            if ((2U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
                    if (vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__ls) {
                        vlSelfRef.CPU__DOT__core__DOT__en = 0U;
                    } else {
                        vlSelfRef.CPU__DOT__core__DOT__en 
                            = (0xffU & ((IData)(1U) 
                                        << (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addrx)));
                        vlSelfRef.CPU__DOT__core__DOT__enls = 0U;
                    }
                    vlSelfRef.CPU__DOT__done = 1U;
                } else if (vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__ls) {
                    vlSelfRef.CPU__DOT__core__DOT__en = 0U;
                } else {
                    vlSelfRef.CPU__DOT__core__DOT__enc = 1U;
                    vlSelfRef.CPU__DOT__core__DOT__sel_ls = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
                if (vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__ls) {
                    vlSelfRef.CPU__DOT__core__DOT__en = 0U;
                } else {
                    vlSelfRef.CPU__DOT__core__DOT__enls = 1U;
                }
            } else {
                vlSelfRef.CPU__DOT__core__DOT__eni = 1U;
                vlSelfRef.CPU__DOT__core__DOT__en = 0U;
                vlSelfRef.CPU__DOT__done = 0U;
            }
        } else if ((0U == (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
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
    } else if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__format))) {
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
    } else if ((2U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__state))) {
            vlSelfRef.CPU__DOT__core__DOT__en = (0xffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addrx)));
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
        vlSelfRef.CPU__DOT__core__DOT__mux_sel = vlSelfRef.CPU__DOT__core__DOT__control_unit_init__DOT__addrx;
    } else {
        vlSelfRef.CPU__DOT__core__DOT__eni = 1U;
        vlSelfRef.CPU__DOT__core__DOT__en = 0U;
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
    if (((3U == (3U & (IData)(vlSelfRef.CPU__DOT__instr))) 
         & (IData)(vlSelfRef.CPU__DOT__ldst__DOT__initialized))) {
        if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.CPU__DOT__instr))))) {
            vlSelfRef.CPU__DOT__ldst__DOT__memory[(
                                                   (8U 
                                                    >= (IData)(vlSelfRef.ry))
                                                    ? 
                                                   vlSelfRef.reg_oute
                                                   [vlSelfRef.ry]
                                                    : 0U)] 
                = ((8U >= (IData)(vlSelfRef.rx)) ? 
                   vlSelfRef.reg_oute[vlSelfRef.rx]
                    : 0U);
            vlSelfRef.CPU__DOT__ldst__DOT__file = VL_FOPEN_NN(
                                                              std::string{"data.txt"}
                                                              , 
                                                              std::string{"w"});
            ;
            vlSelfRef.CPU__DOT__ls_in = 0U;
            if (VL_UNLIKELY(((0U == vlSelfRef.CPU__DOT__ldst__DOT__file)))) {
                VL_WRITEF_NX("Error: Could not open file for writing!\n",0);
                VL_FINISH_MT("rtl/ldst.v", 51, "");
            }
            vlSelfRef.CPU__DOT__ldst__DOT__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x10000U, vlSelfRef.CPU__DOT__ldst__DOT__unnamedblk2__DOT__i)) {
                VL_FWRITEF_NX(vlSelfRef.CPU__DOT__ldst__DOT__file,"%04x\n",0,
                              16,vlSelfRef.CPU__DOT__ldst__DOT__memory
                              [(0xffffU & vlSelfRef.CPU__DOT__ldst__DOT__unnamedblk2__DOT__i)]);
                vlSelfRef.CPU__DOT__ldst__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.CPU__DOT__ldst__DOT__unnamedblk2__DOT__i);
            }
            VL_FCLOSE_I(vlSelfRef.CPU__DOT__ldst__DOT__file); } else {
            vlSelfRef.CPU__DOT__ls_in = vlSelfRef.CPU__DOT__ldst__DOT__memory
                [((8U >= (IData)(vlSelfRef.ry)) ? vlSelfRef.reg_oute
                  [vlSelfRef.ry] : 0U)];
        }
    } else {
        vlSelfRef.CPU__DOT__ls_in = 0U;
    }
    vlSelfRef.ls_ine = vlSelfRef.CPU__DOT__ls_in;
}
