// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varithmetic__pch.h"

//============================================================
// Constructors

Varithmetic::Varithmetic(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varithmetic__Syms(contextp(), _vcname__, this)}
    , carry_in{vlSymsp->TOP.carry_in}
    , select{vlSymsp->TOP.select}
    , carry_out{vlSymsp->TOP.carry_out}
    , compare{vlSymsp->TOP.compare}
    , in_a{vlSymsp->TOP.in_a}
    , in_b{vlSymsp->TOP.in_b}
    , arithmetic_out{vlSymsp->TOP.arithmetic_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Varithmetic::Varithmetic(const char* _vcname__)
    : Varithmetic(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varithmetic::~Varithmetic() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varithmetic___024root___eval_debug_assertions(Varithmetic___024root* vlSelf);
#endif  // VL_DEBUG
void Varithmetic___024root___eval_static(Varithmetic___024root* vlSelf);
void Varithmetic___024root___eval_initial(Varithmetic___024root* vlSelf);
void Varithmetic___024root___eval_settle(Varithmetic___024root* vlSelf);
void Varithmetic___024root___eval(Varithmetic___024root* vlSelf);

void Varithmetic::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varithmetic::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varithmetic___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Varithmetic___024root___eval_static(&(vlSymsp->TOP));
        Varithmetic___024root___eval_initial(&(vlSymsp->TOP));
        Varithmetic___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Varithmetic___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Varithmetic::eventsPending() { return false; }

uint64_t Varithmetic::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Varithmetic::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Varithmetic___024root___eval_final(Varithmetic___024root* vlSelf);

VL_ATTR_COLD void Varithmetic::final() {
    Varithmetic___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varithmetic::hierName() const { return vlSymsp->name(); }
const char* Varithmetic::modelName() const { return "Varithmetic"; }
unsigned Varithmetic::threads() const { return 1; }
void Varithmetic::prepareClone() const { contextp()->prepareClone(); }
void Varithmetic::atClone() const {
    contextp()->threadPoolpOnClone();
}
