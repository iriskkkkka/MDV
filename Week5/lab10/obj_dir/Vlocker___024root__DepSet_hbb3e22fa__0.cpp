// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlocker.h for the primary calling header

#include "Vlocker__pch.h"
#include "Vlocker___024root.h"

void Vlocker___024root___ico_sequent__TOP__0(Vlocker___024root* vlSelf);

void Vlocker___024root___eval_ico(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_ico\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vlocker___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vlocker__ConstPool__TABLE_h5926e4c1_0;

VL_INLINE_OPT void Vlocker___024root___ico_sequent__TOP__0(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___ico_sequent__TOP__0\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ locker__DOT__current;
    locker__DOT__current = 0;
    CData/*2:0*/ locker__DOT__next;
    locker__DOT__next = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    locker__DOT__current = ((IData)(vlSelfRef.reset)
                             ? 0U : (IData)(vlSelfRef.currenta));
    vlSelfRef.locked = (5U != (IData)(locker__DOT__current));
    __Vtableidx1 = (((IData)(vlSelfRef.digit) << 3U) 
                    | (IData)(locker__DOT__current));
    locker__DOT__next = Vlocker__ConstPool__TABLE_h5926e4c1_0
        [__Vtableidx1];
    vlSelfRef.nexta = locker__DOT__next;
}

void Vlocker___024root___eval_triggers__ico(Vlocker___024root* vlSelf);

bool Vlocker___024root___eval_phase__ico(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_phase__ico\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vlocker___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vlocker___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vlocker___024root___eval_act(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_act\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vlocker___024root___eval_nba(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_nba\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vlocker___024root___eval_triggers__act(Vlocker___024root* vlSelf);

bool Vlocker___024root___eval_phase__act(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_phase__act\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlocker___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vlocker___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlocker___024root___eval_phase__nba(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_phase__nba\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlocker___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__ico(Vlocker___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__nba(Vlocker___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlocker___024root___dump_triggers__act(Vlocker___024root* vlSelf);
#endif  // VL_DEBUG

void Vlocker___024root___eval(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vlocker___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("locker.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vlocker___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vlocker___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("locker.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vlocker___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("locker.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vlocker___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vlocker___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlocker___024root___eval_debug_assertions(Vlocker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlocker___024root___eval_debug_assertions\n"); );
    Vlocker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.digit & 0xf0U)))) {
        Verilated::overWidthError("digit");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.currenta & 0xf8U)))) {
        Verilated::overWidthError("currenta");}
}
#endif  // VL_DEBUG
