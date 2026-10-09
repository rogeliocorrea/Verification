// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

void Vfifo_tb_fifo_if__D4___ctor_var_reset(Vfifo_tb_fifo_if__D4* vlSelf);

void Vfifo_tb_fifo_if__D4::ctor(Vfifo_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vfifo_tb_fifo_if__D4___ctor_var_reset(this);
}

void Vfifo_tb_fifo_if__D4::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vfifo_tb_fifo_if__D4::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
