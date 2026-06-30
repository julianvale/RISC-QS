/* readout.c — drive a gate pulse, demodulate one readout window, leave the result for the host.
 * The readout sequence (docs/software/01 §2a): tune the LO, arm the decoder window (startTime+dur),
 * then read res (HALTS until the integral settles) and the latched real/imag. */
#include "riscq.h"

int main(void) {
  uint32_t t = now();

  /* gate drive at t + LEAD */
  set_start_time(GATE, t + 1024);
  set_freq (GATE, 1800);
  set_phase(GATE, 0, 2000);
  set_amp  (GATE, 0, 9000);
  set_env  (GATE, 0, 10);
  set_dur  (GATE, 0, 6);
  fire(GATE, 0);

  /* readout: LO carrier + an integration window after the gate */
  set_demod(2048, 0);
  arm_readout(t + 1224, 20);            /* startTime, 20-batch window */

  int res  = read_res();                /* HALTS until the integral settles */
  int real = read_real();
  int imag = read_imag();
  put_result(real, imag, res);          /* host reads these back over AXI */

  for (;;) { }
}
