// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlogic__pch.h"

//============================================================
// Constructors

Vlogic::Vlogic(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlogic__Syms(contextp(), _vcname__, this)}
    , select{vlSymsp->TOP.select}
    , in_a{vlSymsp->TOP.in_a}
    , in_b{vlSymsp->TOP.in_b}
    , logic_out{vlSymsp->TOP.logic_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlogic::Vlogic(const char* _vcname__)
    : Vlogic(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlogic::~Vlogic() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlogic___024root___eval_debug_assertions(Vlogic___024root* vlSelf);
#endif  // VL_DEBUG
void Vlogic___024root___eval_static(Vlogic___024root* vlSelf);
void Vlogic___024root___eval_initial(Vlogic___024root* vlSelf);
void Vlogic___024root___eval_settle(Vlogic___024root* vlSelf);
void Vlogic___024root___eval(Vlogic___024root* vlSelf);

void Vlogic::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlogic::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlogic___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlogic___024root___eval_static(&(vlSymsp->TOP));
        Vlogic___024root___eval_initial(&(vlSymsp->TOP));
        Vlogic___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlogic___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlogic::eventsPending() { return false; }

uint64_t Vlogic::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlogic::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlogic___024root___eval_final(Vlogic___024root* vlSelf);

VL_ATTR_COLD void Vlogic::final() {
    Vlogic___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlogic::hierName() const { return vlSymsp->name(); }
const char* Vlogic::modelName() const { return "Vlogic"; }
unsigned Vlogic::threads() const { return 1; }
void Vlogic::prepareClone() const { contextp()->prepareClone(); }
void Vlogic::atClone() const {
    contextp()->threadPoolpOnClone();
}
