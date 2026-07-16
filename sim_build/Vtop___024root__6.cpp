// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 5> &out, const VlUnpacked<QData/*63:0*/, 5> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((4U >= n));
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 5> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 5> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((5U > n));
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 5> &in);
void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/julian/RISC-Q/build/rtl/PulseTableSoc.v", 7, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/julian/RISC-Q/build/rtl/PulseTableSoc.v", 7, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/julian/RISC-Q/build/rtl/PulseTableSoc.v", 7, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.dspClk & 0xfeU)))) {
        Verilated::overWidthError("dspClk");
    }
    if (VL_UNLIKELY(((vlSelfRef.dspRst & 0xfeU)))) {
        Verilated::overWidthError("dspRst");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_valid & 0xfeU)))) {
        Verilated::overWidthError("io_axi_aw_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_payload_id 
                      & 0xfcU)))) {
        Verilated::overWidthError("io_axi_aw_payload_id");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_payload_region 
                      & 0xf0U)))) {
        Verilated::overWidthError("io_axi_aw_payload_region");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_payload_size 
                      & 0xf8U)))) {
        Verilated::overWidthError("io_axi_aw_payload_size");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_payload_burst 
                      & 0xfcU)))) {
        Verilated::overWidthError("io_axi_aw_payload_burst");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_payload_lock 
                      & 0xfeU)))) {
        Verilated::overWidthError("io_axi_aw_payload_lock");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_payload_cache 
                      & 0xf0U)))) {
        Verilated::overWidthError("io_axi_aw_payload_cache");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_payload_qos 
                      & 0xf0U)))) {
        Verilated::overWidthError("io_axi_aw_payload_qos");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_aw_payload_prot 
                      & 0xf8U)))) {
        Verilated::overWidthError("io_axi_aw_payload_prot");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_w_valid & 0xfeU)))) {
        Verilated::overWidthError("io_axi_w_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_w_payload_strb 
                      & 0xf0U)))) {
        Verilated::overWidthError("io_axi_w_payload_strb");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_w_payload_last 
                      & 0xfeU)))) {
        Verilated::overWidthError("io_axi_w_payload_last");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_b_ready & 0xfeU)))) {
        Verilated::overWidthError("io_axi_b_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_valid & 0xfeU)))) {
        Verilated::overWidthError("io_axi_ar_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_payload_id 
                      & 0xfcU)))) {
        Verilated::overWidthError("io_axi_ar_payload_id");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_payload_region 
                      & 0xf0U)))) {
        Verilated::overWidthError("io_axi_ar_payload_region");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_payload_size 
                      & 0xf8U)))) {
        Verilated::overWidthError("io_axi_ar_payload_size");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_payload_burst 
                      & 0xfcU)))) {
        Verilated::overWidthError("io_axi_ar_payload_burst");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_payload_lock 
                      & 0xfeU)))) {
        Verilated::overWidthError("io_axi_ar_payload_lock");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_payload_cache 
                      & 0xf0U)))) {
        Verilated::overWidthError("io_axi_ar_payload_cache");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_payload_qos 
                      & 0xf0U)))) {
        Verilated::overWidthError("io_axi_ar_payload_qos");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_ar_payload_prot 
                      & 0xf8U)))) {
        Verilated::overWidthError("io_axi_ar_payload_prot");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_axi_r_ready & 0xfeU)))) {
        Verilated::overWidthError("io_axi_r_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_dac_0_ready & 0xfeU)))) {
        Verilated::overWidthError("io_dac_0_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_dac_1_ready & 0xfeU)))) {
        Verilated::overWidthError("io_dac_1_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_adc_0_valid & 0xfeU)))) {
        Verilated::overWidthError("io_adc_0_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_adc_1_valid & 0xfeU)))) {
        Verilated::overWidthError("io_adc_1_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_adc_2_valid & 0xfeU)))) {
        Verilated::overWidthError("io_adc_2_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_adc_3_valid & 0xfeU)))) {
        Verilated::overWidthError("io_adc_3_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.hostClk & 0xfeU)))) {
        Verilated::overWidthError("hostClk");
    }
    if (VL_UNLIKELY(((vlSelfRef.hostRst & 0xfeU)))) {
        Verilated::overWidthError("hostRst");
    }
}
#endif  // VL_DEBUG
