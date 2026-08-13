"""Small host-side helpers shared by the maintained NV experiments."""

from __future__ import annotations

import math
import json
from pathlib import Path

import numpy as np


def s32(value: int) -> int:
    """Interpret a firmware result word as a signed 32-bit integer."""
    value &= 0xFFFF_FFFF
    return value - (1 << 32) if value & (1 << 31) else value


def inclusive_linear_grid(start: float, stop: float, steps: int, *, name: str) -> list[float]:
    """Return an inclusive ascending float grid with clear validation errors."""
    if not all(math.isfinite(value) and value > 0 for value in (start, stop)):
        raise ValueError(f"{name} start and stop must be positive finite values")
    if steps < 1:
        raise ValueError(f"{name} steps must be positive")
    if steps > 1 and stop <= start:
        raise ValueError(f"{name} stop must exceed start when steps is greater than one")
    return [float(start)] if steps == 1 else np.linspace(start, stop, steps).tolist()


def write_metadata_sidecar(output: Path, metadata: dict[str, object]) -> str:
    """Write sorted experiment metadata beside an NPZ archive and return it."""
    encoded = json.dumps(metadata, indent=2, sort_keys=True)
    output.with_suffix(".json").write_text(encoded + "\n", encoding="utf-8")
    return encoded
