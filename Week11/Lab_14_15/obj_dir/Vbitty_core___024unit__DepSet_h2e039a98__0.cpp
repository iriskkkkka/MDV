// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core__Syms.h"
#include "Vbitty_core___024unit.h"

extern "C" void output_reg(short val);

VL_INLINE_OPT void Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit(SData/*15:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbitty_core___024unit____Vdpiimwrap_output_reg_TOP____024unit\n"); );
    // Body
    short val__Vcvt;
    for (size_t val__Vidx = 0; val__Vidx < 1; ++val__Vidx) val__Vcvt = val;
    output_reg(val__Vcvt);
}
