"""Reset-safe helpers for the accepted RFSoC4x2 validation assets.

This module is deliberately isolated from the ZCU216 adapter. It does not program clocks, load an
overlay, configure RFDC, enable MTS, change Nyquist zones, or change DAC current. Board packages are
imported only by the optional command-line entry points in later deployment work.
"""

from __future__ import annotations

import atexit
import hashlib
import math
import signal
import time
from contextlib import contextmanager
from pathlib import Path
from typing import Iterator


AXI_BASE = 0x8000_0000
AXI_SPAN = 0x0005_0004
CORE_RAM = 0x0000_0000
CORE_RAM_BYTES = 0x0000_4000
GATE_ENV = 0x0001_0000
READOUT_ENV = 0x0002_0000
DEMOD_ENV = 0x0003_0000
RESET = 0x0005_0000
UNITY_REAL_WORD = 0x0000_7FFF

EXPECTED_RFDC_DAC = {
    0: (1, 15, 1, 1, 1),
    1: (1, 15, 1, 1, 1),
    2: (1, 15, 1, 1, 1),
    3: (0, 0, 0, 0, 0),
}
EXPECTED_RFDC_ADC = {
    0: (0, 0, 0, 0, 0),
    1: (0, 0, 0, 0, 0),
    2: (1, 15, 2, 1, 1),
    3: (1, 12, 1, 1, 1),
}

DAC_TONES = {
    "dac0": {
        "bytes": 628,
        "sha256": "e767aca88e84c28d4193448fe829106500acdb3b770de07eea7e1238af6cd61b",
        "status": 0x0000_026C,
        "magic": 0x0000_0270,
        "t_fire": 0x0000_0274,
        "signature": 0x0000_0278,
        "done": 0xD04E_5D00,
        "signature_value": 0x3544_4130,
        "env_base": GATE_ENV,
        "env_words": 4096,
    },
    "dac1": {
        "bytes": 628,
        "sha256": "edd2593c0216c9c66ceedacd5d140eb5d219985d31d0e08dd49b13012a179814",
        "status": 0x0000_026C,
        "magic": 0x0000_0270,
        "t_fire": 0x0000_0274,
        "signature": 0x0000_0278,
        "done": 0xD04E_5D01,
        "signature_value": 0x3544_4131,
        "env_base": READOUT_ENV,
        "env_words": 1024,
    },
}

LOOPBACK_BYTES = 876
LOOPBACK_SHA256 = "716aa56b88d4962d36afa940fbd658561eb1efe88db88c0aaade10e99e31d9cb"
LOOPBACK_STATUS = 0x0000_0360
LOOPBACK_MAGIC = 0x0000_0364
LOOPBACK_MODE = 0x0000_0368
LOOPBACK_SIGNATURE = 0x0000_036C
LOOPBACK_DEMOD_CODE = 0x0000_0370
LOOPBACK_T_DAC = 0x0000_0374
LOOPBACK_T_DEMOD = 0x0000_0378
LOOPBACK_RESULT = 0x0000_037C
LOOPBACK_RAW_I = 0x0000_0380
LOOPBACK_RAW_Q = 0x0000_0384
LOOPBACK_T_RESULT = 0x0000_0388
LOOPBACK_DONE = 0xD04E_5D10
LOOPBACK_MODES = {"matched": 0, "no-dac": 1, "detuned": 2}
EXPECTED_MAGIC = 0x5251_5121


def _words(data: bytes) -> list[int]:
    if len(data) % 4:
        raise RuntimeError(f"firmware size {len(data)} is not word aligned")
    return [int.from_bytes(data[index:index + 4], "little")
            for index in range(0, len(data), 4)]


def _s32(value: int) -> int:
    value &= 0xFFFF_FFFF
    return value - (1 << 32) if value & (1 << 31) else value


def _verified_firmware(path: Path, expected_bytes: int, expected_sha256: str) -> bytes:
    data = path.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if len(data) != expected_bytes or digest != expected_sha256:
        raise RuntimeError(
            f"firmware identity mismatch: bytes={len(data)} sha256={digest}; "
            f"expected {expected_bytes} and {expected_sha256}"
        )
    return data


def validate_symbol_layout(symbols: dict, expected: dict[str, int]) -> dict[str, int]:
    """Require exact core-RAM symbol addresses, with word alignment and bounds."""
    observed = {}
    for name, address in expected.items():
        if name not in symbols:
            raise RuntimeError(f"firmware symbols missing {name!r}")
        value = int(symbols[name][0])
        offset = value - AXI_BASE
        if offset % 4 or not 0 <= offset <= CORE_RAM_BYTES - 4:
            raise RuntimeError(f"firmware symbol {name!r} at {value:#010x} is unaligned/out of RAM")
        if value != address:
            raise RuntimeError(
                f"firmware symbol {name!r} at {value:#010x} != accepted {address:#010x}"
            )
        observed[name] = value
    return observed


def validate_rfdc_health(status: dict) -> None:
    """Fail closed unless every active, dummy, and disabled RFDC tile is exact."""
    def fields(item):
        return tuple(int(item[key]) for key in (
            "IsEnabled", "TileState", "BlockStatusMask", "PowerUpState", "PLLState"
        ))

    observed_dac = {index: fields(item)
                    for index, item in enumerate(status["DACTileStatus"])}
    observed_adc = {index: fields(item)
                    for index, item in enumerate(status["ADCTileStatus"])}
    if observed_dac != EXPECTED_RFDC_DAC:
        raise RuntimeError(f"unexpected DAC tile health: {observed_dac} != {EXPECTED_RFDC_DAC}")
    if observed_adc != EXPECTED_RFDC_ADC:
        raise RuntimeError(f"unexpected ADC tile health: {observed_adc} != {EXPECTED_RFDC_ADC}")
    if int(status["State"]) != 0:
        raise RuntimeError(f"unexpected RFDC top-level State {status['State']}")


@contextmanager
def _reset_guard(mmio) -> Iterator[None]:
    """Hold reset on entry and every exit, including SIGINT/SIGTERM exceptions."""
    def hold_reset() -> None:
        mmio.write(RESET, 1)

    def stop_signal(signum, _frame):
        raise RuntimeError(f"received signal {signum}; aborting with reset recovery")

    hold_reset()
    atexit.register(hold_reset)
    old_handlers = {}
    try:
        for signum in (signal.SIGINT, signal.SIGTERM):
            old_handlers[signum] = signal.signal(signum, stop_signal)
        yield
    finally:
        try:
            hold_reset()
        finally:
            for signum, handler in old_handlers.items():
                signal.signal(signum, handler)


def _load_and_readback(mmio, data: bytes) -> list[int]:
    words = _words(data)
    if len(data) > CORE_RAM_BYTES:
        raise RuntimeError(f"firmware size {len(data)} exceeds core RAM {CORE_RAM_BYTES}")
    for index, word in enumerate(words):
        mmio.write(CORE_RAM + 4 * index, word)
    observed = [int(mmio.read(CORE_RAM + 4 * index)) for index in range(len(words))]
    if observed != words:
        bad = next(index for index, (want, got) in enumerate(zip(words, observed)) if want != got)
        raise RuntimeError(
            f"firmware readback mismatch at word {bad}: "
            f"{observed[bad]:#010x} != {words[bad]:#010x}"
        )
    return words


def _run_to_status(mmio, status_offset: int, expected: int,
                   timeout_s: float, label: str) -> None:
    if timeout_s <= 0:
        raise ValueError("timeout_s must be positive")
    mmio.write(RESET, 0)
    deadline = time.monotonic() + float(timeout_s)
    status = int(mmio.read(status_offset))
    while status != expected:
        if time.monotonic() >= deadline:
            raise TimeoutError(
                f"{label} did not complete within {timeout_s:.3f}s; status={status:#010x}"
            )
        time.sleep(0.001)
        status = int(mmio.read(status_offset))


def run_dac_tone(mmio_cls, firmware: Path, channel: str,
                 timeout_s: float = 0.250) -> tuple[int, int, int, int]:
    """Run one exact, finite, low-amplitude DAC validation tone under reset recovery."""
    if channel not in DAC_TONES:
        raise ValueError(f"unknown DAC tone channel {channel!r}")
    spec = DAC_TONES[channel]
    data = _verified_firmware(Path(firmware), int(spec["bytes"]), str(spec["sha256"]))
    mmio = mmio_cls(AXI_BASE, AXI_SPAN)

    with _reset_guard(mmio):
        words = _load_and_readback(mmio, data)
        if int(mmio.read(int(spec["magic"]))) != EXPECTED_MAGIC:
            raise RuntimeError("loaded firmware magic mismatch")
        for offset in (int(spec["status"]), int(spec["t_fire"]), int(spec["signature"])):
            mmio.write(offset, 0)
        for index in range(int(spec["env_words"])):
            mmio.write(int(spec["env_base"]) + 4 * index, UNITY_REAL_WORD)
        print(
            f"RFSOC4X2_{channel.upper()}_TONE_READY_RESET_HELD "
            f"fw_words={len(words)} env_words={spec['env_words']} "
            "freq_code=667 amp_code=3276 dur_batches=2458",
            flush=True,
        )
        _run_to_status(mmio, int(spec["status"]), int(spec["done"]), timeout_s,
                       f"{channel} tone firmware")

    result = (
        int(mmio.read(int(spec["status"]))),
        int(mmio.read(int(spec["magic"]))),
        int(mmio.read(int(spec["t_fire"]))),
        int(mmio.read(int(spec["signature"]))),
    )
    if (result[0] != int(spec["done"]) or result[1] != EXPECTED_MAGIC
            or result[3] != int(spec["signature_value"])):
        raise RuntimeError(
            f"post-reset result mismatch: status={result[0]:#010x} magic={result[1]:#010x} "
            f"t_fire={result[2]:#010x} signature={result[3]:#010x}"
        )
    print(
        f"RFSOC4X2_{channel.upper()}_TONE_OK_RESET_REASSERTED "
        f"status={result[0]:#010x} magic={result[1]:#010x} "
        f"t_fire={result[2]:#010x} signature={result[3]:#010x}",
        flush=True,
    )
    return result


def run_loopback_validation(mmio_cls, firmware: Path, mode_name: str,
                            timeout_s: float = 0.250) -> dict[str, int | float | str]:
    """Run one exact DAC0-to-ADC0 broad-window control under reset recovery."""
    if mode_name not in LOOPBACK_MODES:
        raise ValueError(f"unknown loopback mode {mode_name!r}")
    mode = LOOPBACK_MODES[mode_name]
    data = _verified_firmware(Path(firmware), LOOPBACK_BYTES, LOOPBACK_SHA256)
    mmio = mmio_cls(AXI_BASE, AXI_SPAN)

    with _reset_guard(mmio):
        words = _load_and_readback(mmio, data)
        if int(mmio.read(LOOPBACK_MAGIC)) != EXPECTED_MAGIC:
            raise RuntimeError("loaded firmware magic mismatch")
        mmio.write(LOOPBACK_MODE, mode)
        for offset in (LOOPBACK_STATUS, LOOPBACK_T_DAC, LOOPBACK_T_DEMOD,
                       LOOPBACK_T_RESULT, LOOPBACK_RESULT, LOOPBACK_RAW_I,
                       LOOPBACK_RAW_Q, LOOPBACK_DEMOD_CODE, LOOPBACK_SIGNATURE):
            mmio.write(offset, 0)
        for index in range(4096):
            mmio.write(GATE_ENV + 4 * index, UNITY_REAL_WORD)
        for index in range(1024):
            mmio.write(DEMOD_ENV + 4 * index, UNITY_REAL_WORD)
        print(
            "RFSOC4X2_LOOPBACK_READY_RESET_HELD "
            f"mode={mode_name} fw_words={len(words)} "
            "dac_code=667 dac_amp=3276 dac_dur=2458 "
            f"demod_code={2924 if mode == 2 else 2668} "
            "demod_amp=19896 demod_dur=4096",
            flush=True,
        )
        _run_to_status(mmio, LOOPBACK_STATUS, LOOPBACK_DONE, timeout_s,
                       "loopback validation firmware")

    result: dict[str, int | float | str] = {
        "mode": mode_name,
        "status": int(mmio.read(LOOPBACK_STATUS)),
        "magic": int(mmio.read(LOOPBACK_MAGIC)),
        "t_dac": int(mmio.read(LOOPBACK_T_DAC)),
        "t_demod": int(mmio.read(LOOPBACK_T_DEMOD)),
        "t_result": int(mmio.read(LOOPBACK_T_RESULT)),
        "res": _s32(int(mmio.read(LOOPBACK_RESULT))),
        "i": _s32(int(mmio.read(LOOPBACK_RAW_I))),
        "q": _s32(int(mmio.read(LOOPBACK_RAW_Q))),
        "demod_code": _s32(int(mmio.read(LOOPBACK_DEMOD_CODE))),
        "signature": int(mmio.read(LOOPBACK_SIGNATURE)),
    }
    result["magnitude"] = math.hypot(int(result["i"]), int(result["q"]))
    expected_code = 2924 if mode == LOOPBACK_MODES["detuned"] else 2668
    expected_signature = 0x354C_4200 | mode
    if (result["status"] != LOOPBACK_DONE or result["magic"] != EXPECTED_MAGIC
            or result["demod_code"] != expected_code
            or result["signature"] != expected_signature
            or ((int(result["t_dac"]) - int(result["t_demod"])) & 0xFFFF_FFFF) != 256):
        raise RuntimeError(f"post-reset result mismatch: {result}")
    print(
        "RFSOC4X2_LOOPBACK_OK_RESET_REASSERTED "
        f"mode={mode_name} status={int(result['status']):#010x} "
        f"magic={int(result['magic']):#010x} signature={int(result['signature']):#010x} "
        f"t_dac={int(result['t_dac']):#010x} t_demod={int(result['t_demod']):#010x} "
        f"t_result={int(result['t_result']):#010x} res={result['res']} "
        f"i={result['i']} q={result['q']} magnitude={float(result['magnitude']):.6f} "
        f"demod_code={result['demod_code']}",
        flush=True,
    )
    return result


def evaluate_loopback(results: list[dict[str, int | float | str]]) -> dict[str, float]:
    """Apply the accepted magnitude/stability gate without using the result sign."""
    grouped = {name: [] for name in LOOPBACK_MODES}
    for result in results:
        grouped[str(result["mode"])].append(float(result["magnitude"]))
    if (len(grouped["matched"]) != 2 or len(grouped["no-dac"]) != 1
            or len(grouped["detuned"]) != 1):
        raise RuntimeError(
            "loopback validation requires exactly two matched, one no-DAC, and one detuned control"
        )
    matched_low = min(grouped["matched"])
    matched_high = max(grouped["matched"])
    noise = grouped["no-dac"][0]
    detuned = grouped["detuned"][0]
    if matched_low <= 0 or matched_high > 1.20 * matched_low:
        raise RuntimeError(f"matched magnitude is absent or unstable: {grouped['matched']}")
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
