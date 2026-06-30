/* vna_point.c — one host-parameterized readout point, for the cosim VNA golden (docs/software/06).
 * The host writes the demod LO frequency code into the mailbox (fromHost); the program tunes the LO,
 * arms one integration window against the externally injected ADC tone, and leaves real/imag/res for
 * the host to read back. Run with the LO matched to the tone (large |z|) vs detuned (≈0). */
#include "riscq.h"

int main(void) {
  int lo = (int)from_host();        /* demod LO freq code, chosen by the host */
  set_demod(lo, 0);
  arm_readout(now() + 256, 40);     /* window well ahead of live time, 40-batch integration */
  int rs = read_res();              /* HALTS until the integral settles */
  int re = read_real();
  int im = read_imag();
  put_result(re, im, rs);           /* host reads these back over AXI from core RAM */
  for (;;) { }
}
