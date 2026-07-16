#include "riscq.h"

int main(void) {
  /* ---- init: load the pulse table once ---- */

  /* ---- schedule: launch by (start time, index) ---- */
  uint32_t t0 = now();
  set_demod(655, 0);
  arm_readout(t0 + 1024, 2500);
  int rs = read_res(); int re = read_real(); int im = read_imag();
  put_result(re, im, rs);
  sleep_until(t0 + 4024);

  for (;;) { }
}
