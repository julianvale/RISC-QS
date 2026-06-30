"""The `Driver` seam: raw access to the host AXI window (docs/software/03 §3a).

Five methods move words in and out of the host AXI address space, plus the boot-gate reset
controls and two board-only optionals. Every backend — `DummyDriver`, `PynqDriver`,
`CocotbDriver`, `RemoteDriver` — implements exactly this, so the `Soc` facade and all experiment
code run unmodified across hardware, sim, and remote.

All addresses passed to a `Driver` are host-AXI offsets; the `Soc` facade owns the region/stride
arithmetic, so backends stay dumb.
"""

from abc import ABC, abstractmethod
from typing import Sequence


class Driver(ABC):
    # --- the core ABI: raw access to the host AXI window ---
    @abstractmethod
    def write_word(self, addr: int, data: int) -> None: ...

    @abstractmethod
    def write_words(self, addr: int, words: Sequence[int]) -> None:
        """Bulk write — the load path. A backend implements this as its most efficient bulk
        transfer; experiment/load code must never loop write_word for bulk data."""

    @abstractmethod
    def read_word(self, addr: int) -> int: ...

    # --- boot gate (host control block +0x00) ---
    @abstractmethod
    def reset_hold(self) -> None:
        """Write 1 → hold all cores in reset (time frozen)."""

    @abstractmethod
    def reset_release(self) -> None:
        """Write 0 → release the cores (time advances, programs run)."""

    # --- board-only, optional (no-op elsewhere) ---
    def set_ref_clks(self, lmk_freq=None, lmx_freq=None) -> None:
        pass

    def program_bitstream(self, path: str) -> None:
        pass
