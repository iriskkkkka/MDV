// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlocker.h for the primary calling header

#include "Vlocker__pch.h"
#include "Vlocker__Syms.h"
#include "Vlocker___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__stl(Vlocker___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlocker___024root___eval_triggers__stl(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_triggers__stl\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlocker___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
