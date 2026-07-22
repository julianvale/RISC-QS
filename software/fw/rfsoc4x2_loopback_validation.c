/* Bounded DAC0 -> ADC0 loopback-validation firmware for the accepted RFSoC4x2 platform.
 *
 * The host selects exactly one reviewed control under reset: matched, no-DAC, or far-detuned.
 * Every run uses the same broad demod window and records the raw decoder outputs.  start.S publishes
 * DONE 0xD04E5D10 after main returns.  The host must initialize all 1024 lines of the DAC0 gate and
 * demod envelope banks to the reviewed constant before releasing reset.
 */
#include "riscq.h"

#define RFSOC4X2_MODE_MATCHED  ((uint32_t)0)
#define RFSOC4X2_MODE_NO_DAC   ((uint32_t)1)
#define RFSOC4X2_MODE_DETUNED  ((uint32_t)2)

#define RFSOC4X2_DAC_FREQ_WORD       ((int32_t)(667u << 16))
#define RFSOC4X2_MATCHED_FREQ_WORD   ((int32_t)(2668u << 16))
#define RFSOC4X2_DETUNED_FREQ_WORD   ((int32_t)(2924u << 16))
#define RFSOC4X2_DAC_AMP_WORD        ((int32_t)(3276u << 16))
#define RFSOC4X2_DEMOD_AMP_WORD      ((int32_t)(19896u << 16))
#define RFSOC4X2_DAC_DUR_BATCH       ((uint32_t)2458)
#define RFSOC4X2_DEMOD_DUR_BATCH     ((uint32_t)4096)
#define RFSOC4X2_SCHEDULE_LEAD       ((uint32_t)2048)
#define RFSOC4X2_DEMOD_EARLY         ((uint32_t)256)

volatile uint32_t RQ_PARAM rfsoc4x2_mode = 0xFFFFFFFFu;
volatile uint32_t rfsoc4x2_t_dac;
volatile uint32_t rfsoc4x2_t_demod;
volatile uint32_t rfsoc4x2_t_result;
volatile int32_t rfsoc4x2_res;
volatile int32_t rfsoc4x2_i;
volatile int32_t rfsoc4x2_q;
volatile int32_t rfsoc4x2_demod_code;
volatile uint32_t rfsoc4x2_signature;

int main(void) {
    uint32_t mode = rfsoc4x2_mode;
    if (mode > RFSOC4X2_MODE_DETUNED) {
        rfsoc4x2_signature = 0xBAD05D10u;
        return 0x5DF0;
    }

    /* Establish all live channel state; these registers survive core reset. */
    set_start(RF_CH0, now());
    set_phase_offset(RF_CH0, 0);
    set_dc_offset(RF_CH0, 0);
    set_freq(RF_CH0, RFSOC4X2_DAC_FREQ_WORD);
    set_phase(RF_CH0, 0, 0);
    set_amp(RF_CH0, 0, RFSOC4X2_DAC_AMP_WORD);
    set_env(RF_CH0, 0, 0);
    set_dur(RF_CH0, 0, RFSOC4X2_DAC_DUR_BATCH << 16);

    set_start(RF_CH2, now());
    set_phase_offset(RF_CH2, 0);
    set_dc_offset(RF_CH2, 0);
    rfsoc4x2_demod_code = mode == RFSOC4X2_MODE_DETUNED ? 2924 : 2668;
    set_freq(RF_CH2, mode == RFSOC4X2_MODE_DETUNED
                         ? RFSOC4X2_DETUNED_FREQ_WORD : RFSOC4X2_MATCHED_FREQ_WORD);
    set_phase(RF_CH2, 0, 0);
    set_amp(RF_CH2, 0, RFSOC4X2_DEMOD_AMP_WORD);
    set_env(RF_CH2, 0, 0);
    set_dur(RF_CH2, 0, RFSOC4X2_DEMOD_DUR_BATCH << 16);

    rfsoc4x2_t_dac = now() + RFSOC4X2_SCHEDULE_LEAD;
    rfsoc4x2_t_demod = rfsoc4x2_t_dac - RFSOC4X2_DEMOD_EARLY;
    play(RF_CH2, 0, rfsoc4x2_t_demod);
    if (mode != RFSOC4X2_MODE_NO_DAC) {
        play(RF_CH0, 0, rfsoc4x2_t_dac);
    }

    wait_until(rfsoc4x2_t_demod + RFSOC4X2_DEMOD_DUR_BATCH + RQ_RO_LEAD);
    rfsoc4x2_res = read_res();
    rfsoc4x2_i = read_real();
    rfsoc4x2_q = read_imag();
    rfsoc4x2_t_result = now();
    rfsoc4x2_signature = 0x354C4200u | mode; /* Accepted control-specific identity. */
    return 0x5D10;
}
