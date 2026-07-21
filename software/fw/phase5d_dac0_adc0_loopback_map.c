/* Phase 5D bounded DAC0 -> ADC0 combined-loopback mapping firmware.
 *
 * The host selects exactly one reviewed control under reset: matched, no-DAC, or far-detuned.
 * Every run uses the same broad demod window and records the raw decoder outputs.  start.S publishes
 * DONE 0xD04E5D10 after main returns.  The host must initialize all 1024 lines of the DAC0 gate and
 * demod envelope banks to the reviewed constant before releasing reset.
 */
#include "riscq.h"

#define PHASE5D_MODE_MATCHED  ((uint32_t)0)
#define PHASE5D_MODE_NO_DAC   ((uint32_t)1)
#define PHASE5D_MODE_DETUNED  ((uint32_t)2)

#define PHASE5D_DAC_FREQ_WORD       ((int32_t)(667u << 16))
#define PHASE5D_MATCHED_FREQ_WORD   ((int32_t)(2668u << 16))
#define PHASE5D_DETUNED_FREQ_WORD   ((int32_t)(2924u << 16))
#define PHASE5D_DAC_AMP_WORD        ((int32_t)(3276u << 16))
#define PHASE5D_DEMOD_AMP_WORD      ((int32_t)(19896u << 16))
#define PHASE5D_DAC_DUR_BATCH       ((uint32_t)2458)
#define PHASE5D_DEMOD_DUR_BATCH     ((uint32_t)4096)
#define PHASE5D_SCHEDULE_LEAD       ((uint32_t)2048)
#define PHASE5D_DEMOD_EARLY         ((uint32_t)256)

volatile uint32_t RQ_PARAM phase5d_mode = 0xFFFFFFFFu;
volatile uint32_t phase5d_t_dac;
volatile uint32_t phase5d_t_demod;
volatile uint32_t phase5d_t_result;
volatile int32_t phase5d_res;
volatile int32_t phase5d_i;
volatile int32_t phase5d_q;
volatile int32_t phase5d_demod_code;
volatile uint32_t phase5d_signature;

int main(void) {
    uint32_t mode = phase5d_mode;
    if (mode > PHASE5D_MODE_DETUNED) {
        phase5d_signature = 0xBAD05D10u;
        return 0x5DF0;
    }

    /* Establish all live channel state; these registers survive core reset. */
    set_start(RF_CH0, now());
    set_phase_offset(RF_CH0, 0);
    set_dc_offset(RF_CH0, 0);
    set_freq(RF_CH0, PHASE5D_DAC_FREQ_WORD);
    set_phase(RF_CH0, 0, 0);
    set_amp(RF_CH0, 0, PHASE5D_DAC_AMP_WORD);
    set_env(RF_CH0, 0, 0);
    set_dur(RF_CH0, 0, PHASE5D_DAC_DUR_BATCH << 16);

    set_start(RF_CH2, now());
    set_phase_offset(RF_CH2, 0);
    set_dc_offset(RF_CH2, 0);
    phase5d_demod_code = mode == PHASE5D_MODE_DETUNED ? 2924 : 2668;
    set_freq(RF_CH2, mode == PHASE5D_MODE_DETUNED
                         ? PHASE5D_DETUNED_FREQ_WORD : PHASE5D_MATCHED_FREQ_WORD);
    set_phase(RF_CH2, 0, 0);
    set_amp(RF_CH2, 0, PHASE5D_DEMOD_AMP_WORD);
    set_env(RF_CH2, 0, 0);
    set_dur(RF_CH2, 0, PHASE5D_DEMOD_DUR_BATCH << 16);

    phase5d_t_dac = now() + PHASE5D_SCHEDULE_LEAD;
    phase5d_t_demod = phase5d_t_dac - PHASE5D_DEMOD_EARLY;
    play(RF_CH2, 0, phase5d_t_demod);
    if (mode != PHASE5D_MODE_NO_DAC) {
        play(RF_CH0, 0, phase5d_t_dac);
    }

    wait_until(phase5d_t_demod + PHASE5D_DEMOD_DUR_BATCH + RQ_RO_LEAD);
    phase5d_res = read_res();
    phase5d_i = read_real();
    phase5d_q = read_imag();
    phase5d_t_result = now();
    phase5d_signature = 0x354C4200u | mode; /* "5LB" plus the reviewed control mode. */
    return 0x5D10;
}
