// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU___024root___eval_static(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_static\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VCPU___024root___eval_initial__TOP(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPU___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void VCPU___024root___eval_initial__TOP(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial__TOP\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<SData/*15:0*/, 256> CPU__DOT__pc__DOT__mem;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        CPU__DOT__pc__DOT__mem[__Vi0] = 0;
    }
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 16, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(CPU__DOT__pc__DOT__mem), 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6772616dU;
    __Vtemp_2[2U] = 0x70726fU;
    VL_READMEM_N(true, 16, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.CPU__DOT__mem__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VCPU___024root___eval_final(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_final\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCPU___024root___eval_phase__stl(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/CPU.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCPU___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VCPU___024root___eval_triggers__stl(VCPU___024root* vlSelf);

VL_ATTR_COLD bool VCPU___024root___eval_phase__stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__instr = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__addr = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->CPU__DOT__mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->CPU__DOT__core__DOT__alu_sel = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__core__DOT__mux_sel = VL_RAND_RESET_I(4);
    vlSelf->CPU__DOT__core__DOT__en = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__core__DOT__ens = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__core__DOT__enc = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__core__DOT__eni = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__core__DOT__imdt = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CPU__DOT__core__DOT__reg_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->CPU__DOT__core__DOT____Vcellout__reg0__d_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT____Vcellout__reg1__d_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT____Vcellout__reg2__d_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT____Vcellout__reg3__d_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT____Vcellout__reg4__d_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT____Vcellout__reg5__d_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT____Vcellout__reg6__d_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT____Vcellout__reg7__d_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT__reginst_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT__mux_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT__sreg_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT__creg_out = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__core__DOT__control_unit_init__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__core__DOT__control_unit_init__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__core__DOT__control_unit_init__DOT__addrx = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__core__DOT__control_unit_init__DOT__addry = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__core__DOT__control_unit_init__DOT__alusel = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__core__DOT__control_unit_init__DOT__immediate = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__core__DOT__control_unit_init__DOT__format = VL_RAND_RESET_I(2);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vdly__CPU__DOT__addr = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
