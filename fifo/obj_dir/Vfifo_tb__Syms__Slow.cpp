// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfifo_tb__pch.h"

Vfifo_tb__Syms::Vfifo_tb__Syms(VerilatedContext* contextp, const char* namep, Vfifo_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(221);
    // Setup sub module instances
    TOP__fifo_tb__DOT__fif.ctor(this, "fifo_tb.fif");
    TOP__fifo_if__D4__03a__03a__VDynScope_7__Vclpkg.ctor(this, "fifo_if__D4::__VDynScope_7__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__fifo_tb__DOT__fif = &TOP__fifo_tb__DOT__fif;
    TOP.fifo_if__D4__03a__03a__VDynScope_7__Vclpkg = &TOP__fifo_if__D4__03a__03a__VDynScope_7__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__fifo_tb__DOT__fif.__Vconfigure(true);
    TOP__fifo_if__D4__03a__03a__VDynScope_7__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vfifo_tb__Syms::~Vfifo_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__fifo_if__D4__03a__03a__VDynScope_7__Vclpkg.dtor();
    TOP__fifo_tb__DOT__fif.dtor();
}
