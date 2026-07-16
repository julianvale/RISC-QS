// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , dspClk{vlSymsp->TOP.dspClk}
    , dspRst{vlSymsp->TOP.dspRst}
    , hostClk{vlSymsp->TOP.hostClk}
    , hostRst{vlSymsp->TOP.hostRst}
    , io_axi_aw_valid{vlSymsp->TOP.io_axi_aw_valid}
    , io_axi_aw_ready{vlSymsp->TOP.io_axi_aw_ready}
    , io_axi_aw_payload_id{vlSymsp->TOP.io_axi_aw_payload_id}
    , io_axi_aw_payload_region{vlSymsp->TOP.io_axi_aw_payload_region}
    , io_axi_aw_payload_len{vlSymsp->TOP.io_axi_aw_payload_len}
    , io_axi_aw_payload_size{vlSymsp->TOP.io_axi_aw_payload_size}
    , io_axi_aw_payload_burst{vlSymsp->TOP.io_axi_aw_payload_burst}
    , io_axi_aw_payload_lock{vlSymsp->TOP.io_axi_aw_payload_lock}
    , io_axi_aw_payload_cache{vlSymsp->TOP.io_axi_aw_payload_cache}
    , io_axi_aw_payload_qos{vlSymsp->TOP.io_axi_aw_payload_qos}
    , io_axi_aw_payload_prot{vlSymsp->TOP.io_axi_aw_payload_prot}
    , io_axi_w_valid{vlSymsp->TOP.io_axi_w_valid}
    , io_axi_w_ready{vlSymsp->TOP.io_axi_w_ready}
    , io_axi_w_payload_strb{vlSymsp->TOP.io_axi_w_payload_strb}
    , io_axi_w_payload_last{vlSymsp->TOP.io_axi_w_payload_last}
    , io_axi_b_valid{vlSymsp->TOP.io_axi_b_valid}
    , io_axi_b_ready{vlSymsp->TOP.io_axi_b_ready}
    , io_axi_b_payload_id{vlSymsp->TOP.io_axi_b_payload_id}
    , io_axi_b_payload_resp{vlSymsp->TOP.io_axi_b_payload_resp}
    , io_axi_ar_valid{vlSymsp->TOP.io_axi_ar_valid}
    , io_axi_ar_ready{vlSymsp->TOP.io_axi_ar_ready}
    , io_axi_ar_payload_id{vlSymsp->TOP.io_axi_ar_payload_id}
    , io_axi_ar_payload_region{vlSymsp->TOP.io_axi_ar_payload_region}
    , io_axi_ar_payload_len{vlSymsp->TOP.io_axi_ar_payload_len}
    , io_axi_ar_payload_size{vlSymsp->TOP.io_axi_ar_payload_size}
    , io_axi_ar_payload_burst{vlSymsp->TOP.io_axi_ar_payload_burst}
    , io_axi_ar_payload_lock{vlSymsp->TOP.io_axi_ar_payload_lock}
    , io_axi_ar_payload_cache{vlSymsp->TOP.io_axi_ar_payload_cache}
    , io_axi_ar_payload_qos{vlSymsp->TOP.io_axi_ar_payload_qos}
    , io_axi_ar_payload_prot{vlSymsp->TOP.io_axi_ar_payload_prot}
    , io_axi_r_valid{vlSymsp->TOP.io_axi_r_valid}
    , io_axi_r_ready{vlSymsp->TOP.io_axi_r_ready}
    , io_axi_r_payload_id{vlSymsp->TOP.io_axi_r_payload_id}
    , io_axi_r_payload_resp{vlSymsp->TOP.io_axi_r_payload_resp}
    , io_axi_r_payload_last{vlSymsp->TOP.io_axi_r_payload_last}
    , io_dac_0_valid{vlSymsp->TOP.io_dac_0_valid}
    , io_dac_0_ready{vlSymsp->TOP.io_dac_0_ready}
    , io_dac_1_valid{vlSymsp->TOP.io_dac_1_valid}
    , io_dac_1_ready{vlSymsp->TOP.io_dac_1_ready}
    , io_adc_0_valid{vlSymsp->TOP.io_adc_0_valid}
    , io_adc_0_ready{vlSymsp->TOP.io_adc_0_ready}
    , io_adc_1_valid{vlSymsp->TOP.io_adc_1_valid}
    , io_adc_1_ready{vlSymsp->TOP.io_adc_1_ready}
    , io_adc_2_valid{vlSymsp->TOP.io_adc_2_valid}
    , io_adc_2_ready{vlSymsp->TOP.io_adc_2_ready}
    , io_adc_3_valid{vlSymsp->TOP.io_adc_3_valid}
    , io_adc_3_ready{vlSymsp->TOP.io_adc_3_ready}
    , io_axi_aw_payload_addr{vlSymsp->TOP.io_axi_aw_payload_addr}
    , io_axi_w_payload_data{vlSymsp->TOP.io_axi_w_payload_data}
    , io_axi_ar_payload_addr{vlSymsp->TOP.io_axi_ar_payload_addr}
    , io_axi_r_payload_data{vlSymsp->TOP.io_axi_r_payload_data}
    , io_dac_0_payload{vlSymsp->TOP.io_dac_0_payload}
    , io_dac_1_payload{vlSymsp->TOP.io_dac_1_payload}
    , io_adc_0_payload{vlSymsp->TOP.io_adc_0_payload}
    , io_adc_1_payload{vlSymsp->TOP.io_adc_1_payload}
    , io_adc_2_payload{vlSymsp->TOP.io_adc_2_payload}
    , io_adc_3_payload{vlSymsp->TOP.io_adc_3_payload}
    , __PVT__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__pulseGenerator_3{vlSymsp->TOP.__PVT__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__pulseGenerator_3}
    , __PVT__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3{vlSymsp->TOP.__PVT__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    contextp()->executingFinal(true);
    Vtop___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
