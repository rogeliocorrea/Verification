// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000004c4b40ULL, 
                                         nullptr, "tests/fifo_tb.sv", 
                                         62);
    VL_WRITEF_NX("[%0t] %%Fatal: fifo_tb.sv:63: Assertion failed in %Nfifo_tb: Test timed out\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("tests/fifo_tb.sv", 63, "", false);
    co_return;}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_write__0__data;
    __Vtask_write__0__data = 0;
    CData/*7:0*/ __Vtask_write__1__data;
    __Vtask_write__1__data = 0;
    CData/*7:0*/ __Vtask_read__2__data;
    __Vtask_read__2__data = 0;
    VlClassRef<Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7> __Vtask_read__2____VDynScope_read_1;
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSymsp->TOP__fifo_tb__DOT__fif.rst_n = 0U;
        vlSymsp->TOP__fifo_tb__DOT__fif.wr_en = 0U;
        vlSymsp->TOP__fifo_tb__DOT__fif.rd_en = 0U;
        vlSymsp->TOP__fifo_tb__DOT__fif.datain = 0U;
        fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
        while (VL_LTS_III(32, 0U, fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hda59b0a2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge fifo_tb.clk)", 
                                                                 "tests/fifo_tb.sv", 
                                                                 22);
            fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.__VdlySet__rst_n__v0_hierarchical = 1U;
        co_await vlSelfRef.__VtrigSched_hda59b0a2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge fifo_tb.clk)", 
                                                             "tests/fifo_tb.sv", 
                                                             24);
        if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.empty)) 
                                | (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.full)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: fifo_tb.sv:27: Assertion failed in %Nfifo_tb: Incorrect flags after reset\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tests/fifo_tb.sv", 27, "", false);
        }
        vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__round = 0U;
        while (VL_GTS_III(32, 3U, vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__round)) {
            vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                __Vtask_write__0__data = (0x000000ffU 
                                          & (VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__round) 
                                             + vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i));
                co_await vlSelfRef.__VtrigSched_hda59b0e3__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge fifo_tb.clk)", 
                                                                     "rtl/fifo.sv", 
                                                                     36);
                vlSelfRef.__VdlySet__wr_en__v1_hierarchical = 1U;
                vlSelfRef.__VdlyVal__datain__v2_hierarchical 
                    = __Vtask_write__0__data;
                vlSelfRef.__VdlySet__datain__v2_hierarchical = 1U;
                co_await vlSelfRef.__VtrigSched_hda59b0e3__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge fifo_tb.clk)", 
                                                                     "rtl/fifo.sv", 
                                                                     40);
                vlSelfRef.__VdlySet__wr_en__v3_hierarchical = 1U;
                vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
            }
            co_await vlSelfRef.__VtrigSched_hda59b0a2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge fifo_tb.clk)", 
                                                                 "tests/fifo_tb.sv", 
                                                                 35);
            if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.full)) 
                                    | (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.empty)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: fifo_tb.sv:37: Assertion failed in %Nfifo_tb.unnamedblk1: FIFO should be full\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tests/fifo_tb.sv", 37, "", false);
            }
            __Vtask_write__1__data = 0xffU;
            co_await vlSelfRef.__VtrigSched_hda59b0e3__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge fifo_tb.clk)", 
                                                                 "rtl/fifo.sv", 
                                                                 36);
            vlSelfRef.__VdlySet__wr_en__v4_hierarchical = 1U;
            vlSelfRef.__VdlyVal__datain__v5_hierarchical 
                = __Vtask_write__1__data;
            vlSelfRef.__VdlySet__datain__v5_hierarchical = 1U;
            co_await vlSelfRef.__VtrigSched_hda59b0e3__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge fifo_tb.clk)", 
                                                                 "rtl/fifo.sv", 
                                                                 40);
            vlSelfRef.__VdlySet__wr_en__v6_hierarchical = 1U;
            vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i)) {
                __Vtask_read__2____VDynScope_read_1 
                    = VL_NEW(Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7, vlSymsp);
                co_await vlSelfRef.__VtrigSched_hda59b0e3__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge fifo_tb.clk)", 
                                                                     "rtl/fifo.sv", 
                                                                     46);
                vlSelfRef.__VdlySet__rd_en__v7_hierarchical = 1U;
                co_await vlSelfRef.__VtrigSched_hda59b0e3__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge fifo_tb.clk)", 
                                                                     "rtl/fifo.sv", 
                                                                     49);
                vlSelfRef.__VdlySet__rd_en__v8_hierarchical = 1U;
                co_await vlSelfRef.__VtrigSched_hda59b0e3__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge fifo_tb.clk)", 
                                                                     "rtl/fifo.sv", 
                                                                     52);
                vlSelfRef.__Vtask___VforkTask_0__4____VDynScope_read_1 
                    = __Vtask_read__2____VDynScope_read_1;
                vlSelfRef.__VdlyVal____Vtask___VforkTask_0__4____VDynScope_read_1__v0 
                    = vlSymsp->TOP__fifo_tb__DOT__fif.dataout;
                vlSelfRef.__VdlySet____Vtask___VforkTask_0__4____VDynScope_read_1__v0 = 1U;
                co_await vlSelfRef.__VtrigSched_hda59b0e3__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge fifo_tb.clk)", 
                                                                     "rtl/fifo.sv", 
                                                                     55);
                __Vtask_read__2__data = VL_NULL_CHECK(__Vtask_read__2____VDynScope_read_1, "rtl/fifo.sv", 45)
                    ->__PVT__data;
                vlSelfRef.fifo_tb__DOT__received = __Vtask_read__2__data;
                if (VL_UNLIKELY((((IData)(vlSelfRef.fifo_tb__DOT__received) 
                                  != (0x000000ffU & 
                                      (VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__round) 
                                       + vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: fifo_tb.sv:46: Assertion failed in %Nfifo_tb.unnamedblk1.unnamedblk3: round=%0d index=%0d: expected=%0x got=%0x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__round,
                                 32,vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i,
                                 8,(0x000000ffU & (
                                                   VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__round) 
                                                   + vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i)),
                                 8,(IData)(vlSelfRef.fifo_tb__DOT__received));
                    VL_STOP_MT("tests/fifo_tb.sv", 46, "", false);
                }
                if (VL_UNLIKELY((vlSymsp->TOP__fifo_tb__DOT__fif.full))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: fifo_tb.sv:50: Assertion failed in %Nfifo_tb.unnamedblk1.unnamedblk3: Full should clear after a read\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("tests/fifo_tb.sv", 50, "", false);
                }
                vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i);
            }
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.empty)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: fifo_tb.sv:54: Assertion failed in %Nfifo_tb.unnamedblk1: FIFO should be empty\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tests/fifo_tb.sv", 54, "", false);
            }
            vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__round 
                = ((IData)(1U) + vlSelfRef.fifo_tb__DOT__unnamedblk1__DOT__round);
        }
        VL_WRITEF_NX("PASS: FIFO checks completed\n",0);
        VL_FINISH_MT("tests/fifo_tb.sv", 58, "");
    }
    co_return;}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tests/fifo_tb.sv", 
                                             8);
        vlSelfRef.fifo_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__clk)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_triggers__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.fifo_tb__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0)) 
                                                      << 4U) 
                                                     | (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.fifo_tb__DOT__clk) 
                                                             ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0)) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__fif__rst_n__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.fifo_tb__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelfRef.fifo_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__fif__rst_n__0 
        = vlSymsp->TOP__fifo_tb__DOT__fif.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vfifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__fifo_tb__DOT__dut__DOT__data__v0 = 0U;
    if (vlSymsp->TOP__fifo_tb__DOT__fif.rst_n) {
        if (((IData)(vlSymsp->TOP__fifo_tb__DOT__fif.wr_en) 
             & (~ (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.full)))) {
            vlSelfRef.__VdlyVal__fifo_tb__DOT__dut__DOT__data__v0 
                = vlSymsp->TOP__fifo_tb__DOT__fif.datain;
            vlSelfRef.__VdlyDim0__fifo_tb__DOT__dut__DOT__data__v0 
                = (3U & (IData)(vlSelfRef.fifo_tb__DOT__dut__DOT__wr_pointer));
            vlSelfRef.__VdlySet__fifo_tb__DOT__dut__DOT__data__v0 = 1U;
            vlSelfRef.fifo_tb__DOT__dut__DOT__wr_pointer 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__dut__DOT__wr_pointer)));
        }
    } else {
        vlSelfRef.fifo_tb__DOT__dut__DOT__wr_pointer = 0U;
    }
}

void Vfifo_tb___024root___nba_sequent__TOP__1(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__1\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__fifo_tb__DOT__fif.rst_n) {
        if (((IData)(vlSymsp->TOP__fifo_tb__DOT__fif.rd_en) 
             & (~ (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.empty)))) {
            vlSymsp->TOP__fifo_tb__DOT__fif.dataout 
                = vlSelfRef.fifo_tb__DOT__dut__DOT__data
                [(3U & (IData)(vlSelfRef.fifo_tb__DOT__dut__DOT__rd_pointer))];
            vlSelfRef.fifo_tb__DOT__dut__DOT__rd_pointer 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__dut__DOT__rd_pointer)));
        }
    } else {
        vlSelfRef.fifo_tb__DOT__dut__DOT__rd_pointer = 0U;
    }
    if (vlSelfRef.__VdlySet__fifo_tb__DOT__dut__DOT__data__v0) {
        vlSelfRef.fifo_tb__DOT__dut__DOT__data[vlSelfRef.__VdlyDim0__fifo_tb__DOT__dut__DOT__data__v0] 
            = vlSelfRef.__VdlyVal__fifo_tb__DOT__dut__DOT__data__v0;
    }
}

void Vfifo_tb___024root___nba_sequent__TOP__2(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__2\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet____Vtask___VforkTask_0__4____VDynScope_read_1__v0) {
        vlSelfRef.__VdlySet____Vtask___VforkTask_0__4____VDynScope_read_1__v0 = 0U;
        VL_NULL_CHECK(vlSelfRef.__Vtask___VforkTask_0__4____VDynScope_read_1, "rtl/fifo.sv", 53)->__PVT__data 
            = vlSelfRef.__VdlyVal____Vtask___VforkTask_0__4____VDynScope_read_1__v0;
    }
}

void Vfifo_tb_fifo_if__D4___nba_sequent__TOP__fifo_tb__DOT__fif__1(Vfifo_tb_fifo_if__D4* vlSelf);
void Vfifo_tb_fifo_if__D4___nba_sequent__TOP__fifo_tb__DOT__fif__2(Vfifo_tb_fifo_if__D4* vlSelf);

void Vfifo_tb___024root___eval_nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdlySet__fifo_tb__DOT__dut__DOT__data__v0 = 0U;
        if (vlSymsp->TOP__fifo_tb__DOT__fif.rst_n) {
            if (((IData)(vlSymsp->TOP__fifo_tb__DOT__fif.wr_en) 
                 & (~ (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.full)))) {
                vlSelfRef.__VdlyVal__fifo_tb__DOT__dut__DOT__data__v0 
                    = vlSymsp->TOP__fifo_tb__DOT__fif.datain;
                vlSelfRef.__VdlyDim0__fifo_tb__DOT__dut__DOT__data__v0 
                    = (3U & (IData)(vlSelfRef.fifo_tb__DOT__dut__DOT__wr_pointer));
                vlSelfRef.__VdlySet__fifo_tb__DOT__dut__DOT__data__v0 = 1U;
                vlSelfRef.fifo_tb__DOT__dut__DOT__wr_pointer 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__dut__DOT__wr_pointer)));
            }
        } else {
            vlSelfRef.fifo_tb__DOT__dut__DOT__wr_pointer = 0U;
        }
        if (vlSymsp->TOP__fifo_tb__DOT__fif.rst_n) {
            if (((IData)(vlSymsp->TOP__fifo_tb__DOT__fif.rd_en) 
                 & (~ (IData)(vlSymsp->TOP__fifo_tb__DOT__fif.empty)))) {
                vlSymsp->TOP__fifo_tb__DOT__fif.dataout 
                    = vlSelfRef.fifo_tb__DOT__dut__DOT__data
                    [(3U & (IData)(vlSelfRef.fifo_tb__DOT__dut__DOT__rd_pointer))];
                vlSelfRef.fifo_tb__DOT__dut__DOT__rd_pointer 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__dut__DOT__rd_pointer)));
            }
        } else {
            vlSelfRef.fifo_tb__DOT__dut__DOT__rd_pointer = 0U;
        }
        if (vlSelfRef.__VdlySet__fifo_tb__DOT__dut__DOT__data__v0) {
            vlSelfRef.fifo_tb__DOT__dut__DOT__data[vlSelfRef.__VdlyDim0__fifo_tb__DOT__dut__DOT__data__v0] 
                = vlSelfRef.__VdlyVal__fifo_tb__DOT__dut__DOT__data__v0;
        }
        Vfifo_tb_fifo_if__D4___nba_sequent__TOP__fifo_tb__DOT__fif__1((&vlSymsp->TOP__fifo_tb__DOT__fif));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet____Vtask___VforkTask_0__4____VDynScope_read_1__v0) {
            vlSelfRef.__VdlySet____Vtask___VforkTask_0__4____VDynScope_read_1__v0 = 0U;
            VL_NULL_CHECK(vlSelfRef.__Vtask___VforkTask_0__4____VDynScope_read_1, "rtl/fifo.sv", 53)->__PVT__data 
                = vlSelfRef.__VdlyVal____Vtask___VforkTask_0__4____VDynScope_read_1__v0;
        }
        Vfifo_tb_fifo_if__D4___nba_sequent__TOP__fifo_tb__DOT__fif__2((&vlSymsp->TOP__fifo_tb__DOT__fif));
    }
}

void Vfifo_tb___024root___timing_commit(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_commit\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hda59b0a2__0.commit(
                                                   "@(negedge fifo_tb.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hda59b0e3__0.commit(
                                                   "@(posedge fifo_tb.clk)");
    }
}

void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_resume\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_hda59b0a2__0.resume(
                                                   "@(negedge fifo_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hda59b0e3__0.resume(
                                                   "@(posedge fifo_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfifo_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo_tb___024root___eval_phase__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__act(vlSelf);
    Vfifo_tb___024root___timing_commit(vlSelf);
    Vfifo_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfifo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vfifo_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vfifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo_tb___024root___eval_phase__nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfifo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfifo_tb___024root___eval_nba(vlSelf);
        Vfifo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tests/fifo_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tests/fifo_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vfifo_tb___024root___eval_phase__act(vlSelf));
    } while (Vfifo_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_debug_assertions\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
