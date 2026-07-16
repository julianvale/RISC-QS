// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class Vtop_PulseGenerator;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&dspClk,0,0);
    VL_IN8(&dspRst,0,0);
    VL_IN8(&hostClk,0,0);
    VL_IN8(&hostRst,0,0);
    VL_IN8(&io_axi_aw_valid,0,0);
    VL_OUT8(&io_axi_aw_ready,0,0);
    VL_IN8(&io_axi_aw_payload_id,1,0);
    VL_IN8(&io_axi_aw_payload_region,3,0);
    VL_IN8(&io_axi_aw_payload_len,7,0);
    VL_IN8(&io_axi_aw_payload_size,2,0);
    VL_IN8(&io_axi_aw_payload_burst,1,0);
    VL_IN8(&io_axi_aw_payload_lock,0,0);
    VL_IN8(&io_axi_aw_payload_cache,3,0);
    VL_IN8(&io_axi_aw_payload_qos,3,0);
    VL_IN8(&io_axi_aw_payload_prot,2,0);
    VL_IN8(&io_axi_w_valid,0,0);
    VL_OUT8(&io_axi_w_ready,0,0);
    VL_IN8(&io_axi_w_payload_strb,3,0);
    VL_IN8(&io_axi_w_payload_last,0,0);
    VL_OUT8(&io_axi_b_valid,0,0);
    VL_IN8(&io_axi_b_ready,0,0);
    VL_OUT8(&io_axi_b_payload_id,1,0);
    VL_OUT8(&io_axi_b_payload_resp,1,0);
    VL_IN8(&io_axi_ar_valid,0,0);
    VL_OUT8(&io_axi_ar_ready,0,0);
    VL_IN8(&io_axi_ar_payload_id,1,0);
    VL_IN8(&io_axi_ar_payload_region,3,0);
    VL_IN8(&io_axi_ar_payload_len,7,0);
    VL_IN8(&io_axi_ar_payload_size,2,0);
    VL_IN8(&io_axi_ar_payload_burst,1,0);
    VL_IN8(&io_axi_ar_payload_lock,0,0);
    VL_IN8(&io_axi_ar_payload_cache,3,0);
    VL_IN8(&io_axi_ar_payload_qos,3,0);
    VL_IN8(&io_axi_ar_payload_prot,2,0);
    VL_OUT8(&io_axi_r_valid,0,0);
    VL_IN8(&io_axi_r_ready,0,0);
    VL_OUT8(&io_axi_r_payload_id,1,0);
    VL_OUT8(&io_axi_r_payload_resp,1,0);
    VL_OUT8(&io_axi_r_payload_last,0,0);
    VL_OUT8(&io_dac_0_valid,0,0);
    VL_IN8(&io_dac_0_ready,0,0);
    VL_OUT8(&io_dac_1_valid,0,0);
    VL_IN8(&io_dac_1_ready,0,0);
    VL_IN8(&io_adc_0_valid,0,0);
    VL_OUT8(&io_adc_0_ready,0,0);
    VL_IN8(&io_adc_1_valid,0,0);
    VL_OUT8(&io_adc_1_ready,0,0);
    VL_IN8(&io_adc_2_valid,0,0);
    VL_OUT8(&io_adc_2_ready,0,0);
    VL_IN8(&io_adc_3_valid,0,0);
    VL_OUT8(&io_adc_3_ready,0,0);
    VL_IN(&io_axi_aw_payload_addr,31,0);
    VL_IN(&io_axi_w_payload_data,31,0);
    VL_IN(&io_axi_ar_payload_addr,31,0);
    VL_OUT(&io_axi_r_payload_data,31,0);
    VL_OUTW(&io_dac_0_payload,255,0,8);
    VL_OUTW(&io_dac_1_payload,255,0,8);
    VL_IN64(&io_adc_0_payload,63,0);
    VL_IN64(&io_adc_1_payload,63,0);
    VL_IN64(&io_adc_2_payload,63,0);
    VL_IN64(&io_adc_3_payload,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_PulseGenerator* const __PVT__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__pulseGenerator_3;
    Vtop_PulseGenerator* const __PVT__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
