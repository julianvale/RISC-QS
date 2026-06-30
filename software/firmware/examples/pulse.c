/* pulse.c — play one gate pulse. The C counterpart of src/riscq/soc/sim/sw/pulse_sched.S:
 * read time → startTime = time + LEAD → program gate table[0] → fire slot 0 → spin.
 * Codes are precomputed on the host (the core does no float); these match pulse_sched.S. */
#include "riscq.h"

int main(void) {
  set_start_time(GATE, now() + 1024);   /* LEAD = 1024 batches, well ahead of live time */
  set_freq (GATE, 1800);                /* shared carrier */
  set_phase(GATE, 0, 2000);             /* table[0] */
  set_amp  (GATE, 0, 9000);
  set_env  (GATE, 0, 10);               /* envelope-RAM line index */
  set_dur  (GATE, 0, 6);                /* 6 batches */
  fire(GATE, 0);                        /* latch table[0] at startTime */
  for (;;) { }                          /* reset vector never falls through */
}
