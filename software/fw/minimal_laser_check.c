#include "riscq.h"

volatile uint32_t rfsoc4x2_signature;

int main(void) {
    play_laser(10, 500, 0, now());
    rfsoc4x2_signature = 0x35444130u; /* Accepted completion identity. */
    return 0x5D00;
}


