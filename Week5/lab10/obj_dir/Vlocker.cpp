// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlocker__pch.h"

//============================================================
// Constructors

Vlocker::Vlocker(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlocker__Syms(contextp(), _vcname__, this)}
    , digit{vlSymsp->TOP.digit}
    , reset{vlSymsp->TOP.reset}
    , currenta{vlSymsp->TOP.currenta}
    , nexta{vlSymsp->TOP.nexta}
    , locked{vlSymsp->TOP.locked}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlocker::Vlocker(const char* _vcname__)
    : Vlocker(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlocker::~Vlocker() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlocker___024root___eval_debug_assertions(Vlocker___024root* vlSelf);
#endif  // VL_DEBUG
void Vlocker___024root___eval_static(Vlocker___024root* vlSelf);
void Vlocker___024root___eval_initial(Vlocker___024root* vlSelf);
void Vlocker___024root___eval_settle(Vlocker___024root* vlSelf);
void Vlocker___024root___eval(Vlocker___024root* vlSelf);

void Vlocker::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlocker::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlocker___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlocker___024root___eval_static(&(vlSymsp->TOP));
        Vlocker___024root___eval_initial(&(vlSymsp->TOP));
        Vlocker___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlocker___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlocker::eventsPending() { return false; }

uint64_t Vlocker::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlocker::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlocker___024root___eval_final(Vlocker___024root* vlSelf);

VL_ATTR_COLD void Vlocker::final() {
    Vlocker___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlocker::hierName() const { return vlSymsp->name(); }
const char* Vlocker::modelName() const { return "Vlocker"; }
unsigned Vlocker::threads() const { return 1; }
void Vlocker::prepareClone() const { contextp()->prepareClone(); }
void Vlocker::atClone() const {
    contextp()->threadPoolpOnClone();
}
