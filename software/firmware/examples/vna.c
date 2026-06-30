/* vna.c — a frequency sweep: step the demod LO across NPTS points, integrate one window each, and
 * pace between points with sleep_until. Results land in a global array the host reads from core RAM
 * (its address is whatever the linker assigns; for a fixed layout the host reads RESULT_ADDR+0x10…). */
#include "riscq.h"

#define NPTS  8
#define STEP  64u        /* batches between sweep points */

static volatile int sweep_re[NPTS];
static volatile int sweep_im[NPTS];

int main(void) {
  uint32_t t = now() + 1024;           /* first window, well ahead of live time */

  for (unsigned i = 0; i < NPTS; i++) {
    set_demod(1000 + (int)i * 500, 0); /* step the LO carrier */
    arm_readout(t, 20);
    (void)read_res();                  /* HALTS until this window's integral settles */
    sweep_re[i] = read_real();
    sweep_im[i] = read_imag();
    /* publish into the fixed result ring so the host can read each point back */
    mmio(RESULT_ADDR + 0x10u + i * 8u + 0u) = (uint32_t)sweep_re[i];
    mmio(RESULT_ADDR + 0x10u + i * 8u + 4u) = (uint32_t)sweep_im[i];

    t += STEP;
    sleep_until(t);                    /* wait until the next point's instant */
    t += STEP;
  }
  mmio(RESULT_ADDR + 0xCu) = 1u;       /* done flag */

  for (;;) { }
}
