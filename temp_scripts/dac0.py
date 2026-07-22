#!/usr/bin/env python3
"""Load and execute the one accepted Phase 5D DAC0 measurement burst.

This helper performs no clock, overlay, RFDC, MTS, ADC, or configuration-register operation. Run it
only after the separate cold-start health gate passes and the scope is armed on physical DAC A.
An outer `/usr/bin/timeout` remains mandatory even though the firmware pulse is duration-gated.
"""

from __future__ import annotations

import argparse
import atexit
import hashlib
import signal
import time
from pathlib import Path


AXI_BASE = 0x8000_0000
AXI_SPAN = 0x0005_0004
CORE_RAM = 0x0000_0000
GATE_ENV = 0x0001_0000
GATE_ENV_LINES = 1024
GATE_WORDS_PER_LINE = 4
RESET = 0x0005_0000

STATUS = 0x0000_026C
MAGIC = 0x0000_0270
T_FIRE = 0x0000_0274
SIGNATURE = 0x0000_0278

EXPECTED_BYTES = 628
EXPECTED_SHA256 = "e767aca88e84c28d4193448fe829106500acdb3b770de07eea7e1238af6cd61b"
EXPECTED_MAGIC = 0x52515121
EXPECTED_DONE = 0xD04E5D00
EXPECTED_SIGNATURE = 0x35444130
UNITY_REAL_WORD = 0x00007FFF


def _words(data: bytes) -> list[int]:
    if len(data) % 4:
        raise RuntimeError(f"firmware size {len(data)} is not word aligned")
    return [int.from_bytes(data[i : i + 4], "little") for i in range(0, len(data), 4)]


def run_once(mmio_cls, firmware: Path, timeout_s: float = 0.250) -> tuple[int, int, int, int]:
    data = firmware.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if len(data) != EXPECTED_BYTES or digest != EXPECTED_SHA256:
        raise RuntimeError(
            f"firmware identity mismatch: bytes={len(data)} sha256={digest}; "
            f"expected {EXPECTED_BYTES} and {EXPECTED_SHA256}"
        )

    mmio = mmio_cls(AXI_BASE, AXI_SPAN)

    def hold_reset() -> None:
        mmio.write(RESET, 1)

    hold_reset()
    atexit.register(hold_reset)
    old_handlers = {}

    def stop_signal(signum, _frame):
        raise RuntimeError(f"received signal {signum}; aborting with reset recovery")

    for signum in (signal.SIGINT, signal.SIGTERM):
        old_handlers[signum] = signal.signal(signum, stop_signal)

    try:
        fw_words = _words(data)
        for index, word in enumerate(fw_words):
            mmio.write(CORE_RAM + 4 * index, word)
        observed = [int(mmio.read(CORE_RAM + 4 * index)) for index in range(len(fw_words))]
        if observed != fw_words:
            bad = next(i for i, (want, got) in enumerate(zip(fw_words, observed)) if want != got)
            raise RuntimeError(
                f"firmware readback mismatch at word {bad}: "
                f"{observed[bad]:#010x} != {fw_words[bad]:#010x}"
            )
        if int(mmio.read(MAGIC)) != EXPECTED_MAGIC:
            raise RuntimeError("loaded firmware magic mismatch")

        for offset in (STATUS, T_FIRE, SIGNATURE):
            mmio.write(offset, 0)

        # One complete 10-bit address period. The 2458-batch pulse wraps this constant table twice.
        for line in range(GATE_ENV_LINES):
            base = GATE_ENV + line * GATE_WORDS_PER_LINE * 4
            for lane in range(GATE_WORDS_PER_LINE):
                mmio.write(base + 4 * lane, UNITY_REAL_WORD)

        print(
            "PHASE5D_DAC0_READY_RESET_HELD "
            f"fw_words={len(fw_words)} env_lines={GATE_ENV_LINES} "
            "freq_code=667 amp_code=3276 dur_batches=2458",
            flush=True,
        )

        mmio.write(RESET, 0)
        deadline = time.monotonic() + timeout_s
        status = int(mmio.read(STATUS))
        while status != EXPECTED_DONE:
            if time.monotonic() >= deadline:
                raise TimeoutError(
                    f"DAC0 firmware did not complete within {timeout_s:.3f}s; "
                    f"status={status:#010x}"
                )
            time.sleep(0.001)
            status = int(mmio.read(STATUS))
    finally:
        hold_reset()
        for signum, handler in old_handlers.items():
            signal.signal(signum, handler)

    result = (
        int(mmio.read(STATUS)),
        int(mmio.read(MAGIC)),
        int(mmio.read(T_FIRE)),
        int(mmio.read(SIGNATURE)),
    )
    if result[0] != EXPECTED_DONE or result[1] != EXPECTED_MAGIC or result[3] != EXPECTED_SIGNATURE:
        raise RuntimeError(
            "post-reset result mismatch: "
            f"status={result[0]:#010x} magic={result[1]:#010x} "
            f"t_fire={result[2]:#010x} signature={result[3]:#010x}"
        )
    print(
        "PHASE5D_DAC0_BURST_OK_RESET_REASSERTED "
        f"status={result[0]:#010x} magic={result[1]:#010x} "
        f"t_fire={result[2]:#010x} signature={result[3]:#010x}",
        flush=True,
    )
    return result


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("firmware", type=Path)
    parser.add_argument(
        "--execute-dac0-once",
        action="store_true",
        help="required acknowledgement that this command releases reset for one DAC0 burst",
    )
    args = parser.parse_args()
    if not args.execute_dac0_once:
        raise SystemExit("refusing to release reset without --execute-dac0-once")

    from pynq import MMIO

    run_once(MMIO, args.firmware.resolve(strict=True))


if __name__ == "__main__":
    main()