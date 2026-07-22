"""Isolated, digital-only RFSoC4x2 board bring-up path.

Unlike :mod:`riscq.board.pynq_driver`, this module does not support or alter the ZCU216 workflow.
Construction performs file/config validation only.  Board actions are explicit and ordered:
``program_clocks`` -> ``load_overlay`` -> ``open_mmio``.  There are deliberately no MTS, Nyquist,
DAC-current, DAC-output, or ADC-capture operations here.
"""

from __future__ import annotations

import hashlib
import json
import time
from pathlib import Path

import pynq
import xrfclk
import xrfdc  # noqa: F401 -- registers the RFdc overlay driver

from riscq.map import SocMap, SocParams


AXI_BASE = 0x8000_0000
AXI_SIZE = 0x1000_0000
RFDC_BASE = 0x9000_0000
RFDC_SIZE = 0x0004_0000
LMK_MHZ = 245.76
LMX_MHZ = 491.52
EXPECTED_BIT_SHA256 = "5ffe224d38a1ee5e4a1d5eee8fa0988644a8e37492bba4a45c9412fc815eff0f"
EXPECTED_HWH_SHA256 = "d3eddfd06915e1b35d62bc44316092438758224842896143856898980b47e983"
EXPECTED_PARAMS_SHA256 = "bad1e52c9c8b1417bf57b879e3c817a0a8c44ed32a71c682a92b30c4eb1d7156"


def _sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


class Rfsoc4x2Driver:
    """Accepted-artifact loader with explicit, fail-fast board bring-up stages."""

    def __init__(self, bit_path: str | Path, params_path: str | Path):
        self.bit_path = Path(bit_path)
        self.hwh_path = self.bit_path.with_suffix(".hwh")
        self.params_path = Path(params_path)
        missing = [str(path) for path in (self.bit_path, self.hwh_path, self.params_path)
                   if not path.is_file()]
        if missing:
            raise FileNotFoundError(f"missing accepted RFSoC4x2 platform files: {missing}")
        self.hashes = {
            self.bit_path.name: _sha256(self.bit_path),
            self.hwh_path.name: _sha256(self.hwh_path),
            self.params_path.name: _sha256(self.params_path),
        }
        if self.hashes[self.bit_path.name] != EXPECTED_BIT_SHA256:
            raise RuntimeError(f"bit hash {self.hashes[self.bit_path.name]} != accepted "
                               f"{EXPECTED_BIT_SHA256}")
        if self.hashes[self.hwh_path.name] != EXPECTED_HWH_SHA256:
            raise RuntimeError(f"hwh hash {self.hashes[self.hwh_path.name]} != accepted "
                               f"{EXPECTED_HWH_SHA256}")
        if self.hashes[self.params_path.name] != EXPECTED_PARAMS_SHA256:
            raise RuntimeError(f"raw params hash {self.hashes[self.params_path.name]} != accepted "
                               f"{EXPECTED_PARAMS_SHA256}")

        raw = json.loads(self.params_path.read_text())
        self.params = SocParams.from_json(json.dumps(raw))
        if (self.params.name, self.params.qubit_num, self.params.dsp_freq_hz) != (
                "rfsoc4x2-nv-1q", 1, 491_520_000.0):
            raise RuntimeError("params are not the accepted one-core RFSoC4x2 491.52 MHz build")
        self.map = SocMap(self.params)
        self.overlay = None
        self.rfdc = None
        self.mmio = None
        self.reset_held = None
        self.stages = {"clocks": False, "overlay": False, "mmio": False}

    def program_clocks(self) -> None:
        xrfclk.set_ref_clks(lmk_freq=LMK_MHZ, lmx_freq=LMX_MHZ)
        self.stages["clocks"] = True

    def load_overlay(self) -> None:
        if not self.stages["clocks"]:
            raise RuntimeError("program_clocks() must succeed before load_overlay()")
        overlay = pynq.Overlay(str(self.bit_path), download=False)
        expected = {"top": (AXI_BASE, AXI_SIZE),
                    "rf_data_converter": (RFDC_BASE, RFDC_SIZE)}
        for name, (base, size) in expected.items():
            if name not in overlay.ip_dict:
                raise RuntimeError(f"overlay missing required IP {name!r}; "
                                   f"have {sorted(overlay.ip_dict)}")
            entry = overlay.ip_dict[name]
            got = (int(entry["phys_addr"]), int(entry["addr_range"]))
            if got != (base, size):
                raise RuntimeError(f"overlay {name!r} range {got} != {(base, size)}")
        # Overlay attributes are lazy IP constructors.  In particular, hasattr(overlay,
        # "rf_data_converter") can instantiate xrfdc.RFdc and call native
        # XRFdc_CfgInitialize, so it is not a metadata-only binding check.
        rfdc_driver = overlay.ip_dict["rf_data_converter"].get("driver")
        if rfdc_driver is not xrfdc.RFdc:
            raise RuntimeError(f"matching HWH parsed but RFDC driver is {rfdc_driver!r}, "
                               f"expected {xrfdc.RFdc!r}")
        print("RFSOC4X2_OVERLAY_METADATA_OK", flush=True)
        print("RFSOC4X2_DOWNLOAD_BEGIN", flush=True)
        overlay.download()
        print("RFSOC4X2_DOWNLOAD_RETURNED", flush=True)
        self.overlay = overlay
        print("RFSOC4X2_RFDC_CONSTRUCT_BEGIN", flush=True)
        self.rfdc = overlay.rf_data_converter
        print("RFSOC4X2_RFDC_CONSTRUCT_RETURNED", flush=True)
        self.stages["overlay"] = True

    def open_mmio(self) -> None:
        if not self.stages["overlay"]:
            raise RuntimeError("load_overlay() must succeed before open_mmio()")
        self.mmio = pynq.MMIO(AXI_BASE, AXI_SIZE)
        self.stages["mmio"] = True

    def address_dict(self) -> dict[str, dict[str, int]]:
        if self.overlay is None:
            raise RuntimeError("overlay is not loaded")
        return {name: {key: int(self.overlay.ip_dict[name][key])
                       for key in ("phys_addr", "addr_range")}
                for name in ("top", "rf_data_converter")}

    def _check_mmio(self, offset: int) -> None:
        if self.mmio is None:
            raise RuntimeError("MMIO is not open")
        if offset % 4 or not 0 <= offset <= AXI_SIZE - 4:
            raise ValueError(f"unaligned/out-of-range MMIO offset {offset:#x}")

    def read32(self, offset: int) -> int:
        self._check_mmio(offset)
        return int(self.mmio.read(offset))

    def write32(self, offset: int, value: int) -> None:
        self._check_mmio(offset)
        self.mmio.write(offset, int(value) & 0xFFFF_FFFF)

    def reset_hold(self) -> None:
        self.write32(self.map.host_ctrl + self.map.HOST_RESET, 1)
        self.reset_held = True

    def reset_release(self) -> None:
        self.write32(self.map.host_ctrl + self.map.HOST_RESET, 0)
        self.reset_held = False

    def probe_last_ram_word(self, pattern: int = 0x5C00_5C01) -> tuple[int, int, int]:
        """Save/write/read/restore one harmless RAM word while reset is known asserted."""
        if self.reset_held is not True:
            raise RuntimeError("reset_hold() must succeed before RAM probing")
        offset = self.map.imem(0) + self.map.mem_bytes - 4
        saved = self.read32(offset)
        try:
            self.write32(offset, pattern)
            observed = self.read32(offset)
            if observed != (pattern & 0xFFFF_FFFF):
                raise RuntimeError(f"RAM readback {observed:#010x} != {pattern:#010x}")
        finally:
            self.write32(offset, saved)
        restored = self.read32(offset)
        if restored != saved:
            raise RuntimeError(f"RAM restore {restored:#010x} != saved {saved:#010x}")
        return saved, observed, restored

    def load_image(self, image_path: str | Path, offset: int = 0) -> dict[str, int | str]:
        """Load and word-verify a flat little-endian image while reset is known asserted."""
        if self.reset_held is not True:
            raise RuntimeError("reset_hold() must succeed before loading firmware")
        data = Path(image_path).read_bytes()
        if offset < 0 or offset % 4:
            raise ValueError(f"image offset {offset:#x} must be nonnegative and word aligned")
        if not data or len(data) % 4:
            raise ValueError("firmware image must be nonempty and word aligned")
        if len(data) > self.map.mem_bytes or offset + len(data) > self.map.mem_bytes:
            raise ValueError(f"image [{offset:#x}, {offset + len(data):#x}) outside core RAM")
        words = [int.from_bytes(data[i:i + 4], "little") for i in range(0, len(data), 4)]
        for index, word in enumerate(words):
            self.write32(self.map.imem(0) + offset + 4 * index, word)
        for index, word in enumerate(words):
            observed = self.read32(self.map.imem(0) + offset + 4 * index)
            if observed != word:
                raise RuntimeError(f"firmware verify failed at {offset + 4 * index:#x}: "
                                   f"{observed:#010x} != {word:#010x}")
        return {"bytes": len(data), "words": len(words),
                "sha256": hashlib.sha256(data).hexdigest()}

    def run_until(self, status_offset: int, mask: int, expected: int,
                  timeout_s: float) -> tuple[int, float]:
        """Release reset, poll one RAM word to a deadline, and always reassert reset."""
        if self.reset_held is not True:
            raise RuntimeError("reset_hold() must succeed before firmware execution")
        start = time.monotonic()
        deadline = start + float(timeout_s)
        status = self.read32(status_offset)
        try:
            self.reset_release()
            while (status & mask) != expected:
                if time.monotonic() >= deadline:
                    raise TimeoutError(f"status {status:#010x} did not reach "
                                       f"{expected:#010x}/{mask:#010x} in {timeout_s}s")
                time.sleep(0.001)
                status = self.read32(status_offset)
            return status, time.monotonic() - start
        finally:
            self.reset_hold()
