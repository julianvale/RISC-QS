/* Independent DAC1 tone firmware for the accepted RFSoC4x2 platform.
 *
 * Logical DAC1: RF_CH1 / s00_axis / vout00 / physical DAC B.
 * One finite pulse: 80.04 MHz (code 667), amplitude code 3276 (<0.1 Q15), 2458 batches
 * (5.000813802 us), phase zero, envelope base line zero.  The host must load all 1024 readout-drive
 * envelope lines with the same reviewed constant value while reset is asserted; the 10-bit reader
 * wraps twice during this pulse.  start.S publishes DONE 0xD04E5D01 after main returns.
 */
#include "riscq.h"

#define RFSOC4X2_FREQ_WORD  ((int32_t)(667u << 16))
#define RFSOC4X2_AMP_WORD   ((int32_t)(3276u << 16))
#define RFSOC4X2_PHASE_WORD ((int32_t)0)
#define RFSOC4X2_ENV_WORD   ((uint32_t)0)
#define RFSOC4X2_DUR_BATCH  ((uint32_t)2458)
#define RFSOC4X2_DUR_WORD   ((uint32_t)(RFSOC4X2_DUR_BATCH << 16))
#define RFSOC4X2_LEAD_BATCH ((uint32_t)1024)
#define RFSOC4X2_SETTLE     ((uint32_t)16)

volatile uint32_t rfsoc4x2_t_fire;
volatile uint32_t rfsoc4x2_signature;

int main(void) {
    /* These channel registers are live across core resets; establish every relevant value. */
    set_start(RF_CH1, now());
    set_phase_offset(RF_CH1, 0);
    set_dc_offset(RF_CH1, 0);
    set_freq(RF_CH1, RFSOC4X2_FREQ_WORD);
    set_phase(RF_CH1, 0, RFSOC4X2_PHASE_WORD);
    set_amp(RF_CH1, 0, RFSOC4X2_AMP_WORD);
    set_env(RF_CH1, 0, RFSOC4X2_ENV_WORD);
    set_dur(RF_CH1, 0, RFSOC4X2_DUR_WORD);

    uint32_t start = now() + RFSOC4X2_LEAD_BATCH;
    rfsoc4x2_t_fire = start;
    play(RF_CH1, 0, start);
    wait_until(start + RFSOC4X2_DUR_BATCH + RFSOC4X2_SETTLE);
    rfsoc4x2_signature = 0x35444131u; /* Accepted completion identity. */
    return 0x5D01;
}
