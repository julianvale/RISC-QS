#!/usr/bin/env python3
"""Run one hash-checked Phase 5D DAC0-to-ADC0 broad-window control under reset."""

from __future__ import annotations

import argparse
import atexit
import hashlib
import math
import signal
import time
from pathlib import Path


AXI_BASE = 0x8000_0000
AXI_SPAN = 0x0005_0004
CORE_RAM = 0x0000_0000
GATE_ENV = 0x0001_0000
DEMOD_ENV = 0x0003_0000
RESET = 0x0005_0000

STATUS = 0x0000_0360
MAGIC = 0x0000_0364
MODE = 0x0000_0368
SIGNATURE = 0x0000_036C
DEMOD_CODE = 0x0000_0370
T_DAC = 0x0000_0374
T_DEMOD = 0x0000_0378
RESULT = 0x0000_037C
RAW_I = 0x0000_0380
RAW_Q = 0x0000_0384
T_RESULT = 0x0000_0388

EXPECTED_BYTES = 876
EXPECTED_SHA256 = "716aa56b88d4962d36afa940fbd658561eb1efe88db88c0aaade10e99e31d9cb"
EXPECTED_MAGIC = 0x52515121
EXPECTED_DONE = 0xD04E5D10
UNITY_REAL_WORD = 0x00007FFF
MODES = {"matched": 0, "no-dac": 1, "detuned": 2}


def _words(data: bytes) -> list[int]:
    if len(data) % 4:
        raise RuntimeError(f"firmware size {len(data)} is not word aligned")
    return [int.from_bytes(data[i:i + 4], "little") for i in range(0, len(data), 4)]

def _s32(value: int) -> int:
    value &= 0xFFFF_FFFF
    return value - (1 << 32) if value & (1 << 31) else value


def run_control(mmio_cls, firmware: Path, mode_name: str,
                timeout_s: float = 0.250) -> dict[str, int | float | str]:
    mode = MODES[mode_name]
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

        mmio.write(MODE, mode)
        for offset in (STATUS, T_DAC, T_DEMOD, T_RESULT, RESULT, RAW_I, RAW_Q,
                       DEMOD_CODE, SIGNATURE):
            mmio.write(offset, 0)

        for word_index in range(1024 * 4):
            mmio.write(GATE_ENV + 4 * word_index, UNITY_REAL_WORD)
        for line in range(1024):
            mmio.write(DEMOD_ENV + 4 * line, UNITY_REAL_WORD)

        print(
            "PHASE5D_LOOPBACK_READY_RESET_HELD "
            f"mode={mode_name} fw_words={len(fw_words)} "
            "dac_code=667 dac_amp=3276 dac_dur=2458 "
            f"demod_code={2924 if mode == 2 else 2668} demod_amp=19896 demod_dur=4096",
            flush=True,
        )

        mmio.write(RESET, 0)
        deadline = time.monotonic() + timeout_s
        status = int(mmio.read(STATUS))
        while status != EXPECTED_DONE:
            if time.monotonic() >= deadline:
                raise TimeoutError(
                    f"loopback control did not complete within {timeout_s:.3f}s; "
                    f"status={status:#010x}"
                )
            time.sleep(0.001)
            status = int(mmio.read(STATUS))
    finally:
        hold_reset()
        for signum, handler in old_handlers.items():
            signal.signal(signum, handler)

    result = {
        "mode": mode_name,
        "status": int(mmio.read(STATUS)),
        "magic": int(mmio.read(MAGIC)),
        "t_dac": int(mmio.read(T_DAC)),
        "t_demod": int(mmio.read(T_DEMOD)),
        "t_result": int(mmio.read(T_RESULT)),
        "res": _s32(int(mmio.read(RESULT))),
        "i": _s32(int(mmio.read(RAW_I))),
        "q": _s32(int(mmio.read(RAW_Q))),
        "demod_code": _s32(int(mmio.read(DEMOD_CODE))),
        "signature": int(mmio.read(SIGNATURE)),
    }
    result["magnitude"] = math.hypot(result["i"], result["q"])
    expected_code = 2924 if mode == MODES["detuned"] else 2668
    expected_signature = 0x354C4200 | mode
    if (result["status"] != EXPECTED_DONE or result["magic"] != EXPECTED_MAGIC
            or result["demod_code"] != expected_code
            or result["signature"] != expected_signature
            or ((result["t_dac"] - result["t_demod"]) & 0xFFFF_FFFF) != 256):
        raise RuntimeError(f"post-reset result mismatch: {result}")

    print(
        "PHASE5D_LOOPBACK_CONTROL_OK_RESET_REASSERTED "
        f"mode={mode_name} status={result['status']:#010x} magic={result['magic']:#010x} "
        f"signature={result['signature']:#010x} t_dac={result['t_dac']:#010x} "
        f"t_demod={result['t_demod']:#010x} t_result={result['t_result']:#010x} "
        f"res={result['res']} i={result['i']} q={result['q']} "
        f"magnitude={result['magnitude']:.6f} demod_code={result['demod_code']}",
        flush=True,
    )
    return result


def evaluate_mapping(results: list[dict[str, int | float | str]]) -> dict[str, float]:
    """Apply the complete broad-window gate without using read_res sign for acceptance."""
    grouped = {name: [] for name in MODES}
    for result in results:
        grouped[str(result["mode"])].append(float(result["magnitude"]))
    if len(grouped["matched"]) != 2 or len(grouped["no-dac"]) != 1 \
            or len(grouped["detuned"]) != 1:
        raise RuntimeError("mapping gate requires exactly two matched, one no-DAC, and one detuned control")

    matched_low = min(grouped["matched"])
    matched_high = max(grouped["matched"])
    noise = grouped["no-dac"][0]
    detuned = grouped["detuned"][0]
    if matched_low <= 0 or matched_high > 1.20 * matched_low:
        raise RuntimeError(
            f"matched magnitude is absent or unstable: {grouped['matched']}"
        )
    if matched_low < 4.0 * noise:
        raise RuntimeError(f"matched magnitude {matched_low} is not comfortably above noise {noise}")
    if matched_low < 4.0 * detuned:
        raise RuntimeError(f"matched magnitude {matched_low} is less than 4x detuned {detuned}")
    return {
        "matched_low": matched_low,
        "matched_high": matched_high,
        "noise": noise,
        "detuned": detuned,
    }


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("firmware", type=Path)
    parser.add_argument("--mode", required=True, choices=tuple(MODES))
    parser.add_argument(
        "--execute-bounded-loopback-control",
        action="store_true",
        help="required acknowledgement that reset is released for one bounded control",
    )
    args = parser.parse_args()
    if not args.execute_bounded_loopback_control:
        raise SystemExit("refusing to release reset without --execute-bounded-loopback-control")

    from pynq import MMIO

    run_control(MMIO, args.firmware.resolve(strict=True), args.mode)


if __name__ == "__main__":
    main()