// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varithmetic.h for the primary calling header

#include "Varithmetic__pch.h"
#include "Varithmetic__Syms.h"
#include "Varithmetic___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic___024root___dump_triggers__ico(Varithmetic___024root* vlSelf);
#endif  // VL_DEBUG

void Varithmetic___024root___eval_triggers__ico(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_triggers__ico\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varithmetic___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varithmetic___024root___dump_triggers__act(Varithmetic___024root* vlSelf);
#endif  // VL_DEBUG

void Varithmetic___024root___eval_triggers__act(Varithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varithmetic___024root___eval_triggers__act\n"); );
    Varithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varithmetic___024root___dump_triggers__act(vlSelf);
    }
#endif
}
