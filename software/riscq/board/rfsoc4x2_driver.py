"""Small RFSoC4x2-specific backend for the original board-server protocol."""

from __future__ import annotations

import asyncio
from pathlib import Path

import pynq
import xrfclk
import xrfdc  # noqa: F401 -- registers the RFdc overlay driver


AXI_BASE = 0x8000_0000
AXI_SIZE = 0x1000_0000
LMK_MHZ = 245.76
LMX_MHZ = 491.52


class Rfsoc4x2Driver:
    """RFSoC4x2 overlay/MMIO backend; no ZCU216 RFDC configuration surface."""

    def __init__(self, bit_path: str | Path, hwh_path: str | Path,
                 params: str | Path, download: bool = True):
        self.bit_path = Path(bit_path)
        self.hwh_path = Path(hwh_path)
        self.params_path = Path(params)
        missing = [str(path) for path in (self.bit_path, self.hwh_path, self.params_path)
                   if not path.is_file()]
        if missing:
            raise FileNotFoundError(f"missing RFSoC4x2 bundle files: {missing}")

        # PYNQ's Xrt device construction can occur in a Pyro worker thread.
        try:
            asyncio.get_running_loop()
        except RuntimeError:
            asyncio.set_event_loop(asyncio.new_event_loop())

        xrfclk.set_ref_clks(lmk_freq=LMK_MHZ, lmx_freq=LMX_MHZ)
        self.overlay = pynq.Overlay(str(self.bit_path), download=bool(download))
        self.rfdc = self.overlay.rf_data_converter
        self.mmio = pynq.MMIO(AXI_BASE, AXI_SIZE)
        self.mts_result = None

    def _check(self, addr: int, nbytes: int = 4) -> None:
        if addr % 4:
            raise ValueError(f"unaligned address {addr:#x}")
        if nbytes < 0 or addr < 0 or addr + nbytes > AXI_SIZE:
            raise ValueError(f"[{addr:#x}, {addr + nbytes:#x}) outside the AXI window")

    def read32(self, addr: int) -> int:
        self._check(addr)
        return int(self.mmio.read(addr))

    def write32(self, addr: int, value: int) -> None:
        self._check(addr)
        self.mmio.write(addr, int(value) & 0xFFFF_FFFF)

    def read_block(self, addr: int, nbytes: int) -> bytes:
        nbytes = int(nbytes)
        nwords = (nbytes + 3) // 4
        self._check(addr, nwords * 4)
        data = b"".join(self.read32(addr + 4 * word).to_bytes(4, "little")
                        for word in range(nwords))
        return data[:nbytes]

    def write_block(self, addr: int, data: bytes) -> None:
        data = bytes(data)
        if len(data) % 4:
            raise ValueError("write_block length must be a multiple of 4")
        self._check(addr, len(data))
        for offset in range(0, len(data), 4):
            self.write32(addr + offset, int.from_bytes(data[offset:offset + 4], "little"))

    def mts(self, *args, **kwargs):
        raise NotImplementedError("MTS is not supported on RFSoC4x2")

    def adc_nyquist_zone(self, *args, **kwargs):
        raise NotImplementedError("Nyquist selection is not supported on RFSoC4x2")

    def dac_nyquist_zone(self, *args, **kwargs):
        raise NotImplementedError("Nyquist selection is not supported on RFSoC4x2")

    def dacvop(self, *args, **kwargs):
        raise NotImplementedError("DAC current control is not supported on RFSoC4x2")
