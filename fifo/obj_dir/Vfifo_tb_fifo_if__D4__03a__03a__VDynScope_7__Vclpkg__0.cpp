// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7(Vfifo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::_ctor_var_reset(Vfifo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(8, 12532694329089573032ULL, 10363016170300574568ull);
}

std::string VL_TO_STRING(const VlClassRef<Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    return (out);
}
