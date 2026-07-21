/* Phase 5D independent DAC1 measurement firmware for the accepted RFSoC4x2 v8 build.
 *
 * Logical DAC1: RF_CH1 / s00_axis / vout00 / physical DAC B.
 * One finite pulse: 80.04 MHz (code 667), amplitude code 3276 (<0.1 Q15), 2458 batches
 * (5.000813802 us), phase zero, envelope base line zero.  The host must load all 1024 readout-drive
 * envelope lines with the same reviewed constant value while reset is asserted; the 10-bit reader
 * wraps twice during this pulse.  start.S publishes DONE 0xD04E5D01 after main returns.
 */
#include "riscq.h"

#define PHASE5D_FREQ_WORD  ((int32_t)(667u << 16))
#define PHASE5D_AMP_WORD   ((int32_t)(3276u << 16))
#define PHASE5D_PHASE_WORD ((int32_t)0)
#define PHASE5D_ENV_WORD   ((uint32_t)0)
#define PHASE5D_DUR_BATCH  ((uint32_t)2458)
#define PHASE5D_DUR_WORD   ((uint32_t)(PHASE5D_DUR_BATCH << 16))
#define PHASE5D_LEAD_BATCH ((uint32_t)1024)
#define PHASE5D_SETTLE     ((uint32_t)16)

volatile uint32_t phase5d_t_fire;
volatile uint32_t phase5d_signature;

int main(void) {
    /* These channel registers are live across core resets; establish every relevant value. */
    set_start(RF_CH1, now());
    set_phase_offset(RF_CH1, 0);
    set_dc_offset(RF_CH1, 0);
    set_freq(RF_CH1, PHASE5D_FREQ_WORD);
    set_phase(RF_CH1, 0, PHASE5D_PHASE_WORD);
    set_amp(RF_CH1, 0, PHASE5D_AMP_WORD);
    set_env(RF_CH1, 0, PHASE5D_ENV_WORD);
    set_dur(RF_CH1, 0, PHASE5D_DUR_WORD);

    uint32_t start = now() + PHASE5D_LEAD_BATCH;
    phase5d_t_fire = start;
    play(RF_CH1, 0, start);
    wait_until(start + PHASE5D_DUR_BATCH + PHASE5D_SETTLE);
    phase5d_signature = 0x35444131u; /* "5DA1"; written only after the output window ends. */
    return 0x5D01;
}
