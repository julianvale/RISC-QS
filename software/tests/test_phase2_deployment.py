import json
from pathlib import Path

import pytest

from riscq.deployment.bundle import BundleError, firmware_bundle_bytes, load_firmware_bundle
from riscq.deployment.context import PlatformContext
from riscq.deployment.engine import (DeploymentEngine, DeploymentError,
                                     Rfsoc4x2Adapter, adapter_for)
from riscq.deployment.identity import raw_config_identity
from riscq.map import MEM_BASE, SocMap


ROOT = Path(__file__).resolve().parents[1]
PARAMS = (ROOT / "configs" / "rfsoc4x2-nv-1q.json").read_bytes()
IDENTITY = raw_config_identity(PARAMS)
SYMBOLS = {
    "__rq_status": (MEM_BASE, 4),
    "__rq_magic": (MEM_BASE + 4, 4),
    "knob": (MEM_BASE + 8, 4),
    "answer": (MEM_BASE + 12, 4),
}
IMAGE = (b"\0" * 4 + (0x52515121).to_bytes(4, "little") + b"\0" * 8)
TOOLS = {name: {"path": f"/tools/{name}", "sha256": digit * 64, "version": "1.0"}
         for name, digit in (("compiler", "3"), ("objcopy", "4"), ("nm", "5"))}


def bundles(requirements=None, symbols=None, image=IMAGE):
    platform = PlatformContext(Path("test-release"), IDENTITY, "b" * 64, "h" * 64)
    firmware = load_firmware_bundle(firmware_bundle_bytes(
        firmware_id="test", version="1.0.0", image=image, symbols=symbols or SYMBOLS,
        entry=MEM_BASE, requirements=requirements or IDENTITY.requirements(),
        source={"kind": "c", "sha256": "1" * 64}, runtime={"sha256": "2" * 64},
        toolchain=TOOLS))
    return platform, firmware


class FakeAdapter:
    board_id = "rfsoc4x2-nv-1q"

    def __init__(self):
        self.mem = {}
        self.ops = []
        self.reset = None
        self.release_error = None
        self.readback_flip = None
        self.fail_read = None
        self.complete = True
        self.platform_override = None

    def verify_platform(self, expected):
        self.ops.append(("verify_platform",))
        return dict(expected if self.platform_override is None else self.platform_override)

    def assert_reset(self):
        self.reset = True
        self.ops.append(("reset", True))

    def release_reset(self):
        self.reset = False
        self.ops.append(("reset", False))
        if self.release_error:
            raise self.release_error
        if self.complete:
            self.mem[0] = 0xD04E0000
            self.mem[12] = 42

    def write_word(self, offset, value):
        self.mem[offset] = value & 0xFFFFFFFF
        self.ops.append(("write", offset, value & 0xFFFFFFFF))

    def read_word(self, offset):
        self.ops.append(("read", offset))
        if self.fail_read == offset:
            raise RuntimeError("read failed")
        value = self.mem.get(offset, 0)
        if self.readback_flip == offset:
            return value ^ 1
        return value


class Clock:
    def __init__(self):
        self.now = 0.0

    def monotonic(self):
        return self.now

    def sleep(self, delay):
        self.now += max(delay, 0.001)


def engine(adapter=None, clock=None):
    platform, firmware = bundles()
    adapter = adapter or FakeAdapter()
    clock = clock or Clock()
    return DeploymentEngine(adapter, platform, monotonic=clock.monotonic,
                            sleep=clock.sleep), firmware, adapter


def test_aligned_single_words_complete_readback_and_parameter_only_rerun():
    eng, firmware, adapter = engine()
    result = eng.run(firmware, parameters={"knob": 7}, results=["answer"])
    assert result == {"answer": 42}
    image_writes = [op for op in adapter.ops if op[:2] == ("write", 0)]
    assert image_writes
    first_load_writes = sum(op[0] == "write" and op[1] < len(IMAGE) for op in adapter.ops)
    eng.run(firmware, parameters={"knob": 8}, results=["answer"])
    second_load_writes = sum(op[0] == "write" and op[1] < len(IMAGE) for op in adapter.ops)
    assert second_load_writes == first_load_writes + 2  # status clear + knob only; no image reload
    assert adapter.reset is True and adapter.ops[-1] == ("reset", True)


def test_identity_mismatch_precedes_every_adapter_call():
    platform, firmware = bundles(requirements={**IDENTITY.requirements(), "map_digest": "0" * 64})
    adapter = FakeAdapter()
    eng = DeploymentEngine(adapter, platform)
    with pytest.raises(BundleError, match="map_digest"):
        eng.load(firmware)
    assert adapter.ops == []


def test_active_platform_hash_mismatch_precedes_reset_and_memory_access():
    eng, firmware, adapter = engine()
    adapter.platform_override = {"id": "wrong"}
    with pytest.raises(DeploymentError, match="active platform identity mismatch"):
        eng.load(firmware)
    assert adapter.ops == [("verify_platform",)]


def test_readback_timeout_release_result_and_copy_failures_end_in_reset():
    eng, firmware, adapter = engine()
    adapter.readback_flip = 4
    with pytest.raises(DeploymentError, match="readback"):
        eng.load(firmware)
    assert adapter.reset is True and adapter.ops[-1] == ("reset", True)

    eng, firmware, adapter = engine()
    adapter.complete = False
    with pytest.raises(TimeoutError):
        eng.run(firmware, timeout_s=0.003)
    assert adapter.reset is True and adapter.ops[-1] == ("reset", True)

    eng, firmware, adapter = engine()
    adapter.release_error = RuntimeError("release failed")
    with pytest.raises(RuntimeError, match="release failed"):
        eng.run(firmware)
    assert adapter.reset is True and adapter.ops[-1] == ("reset", True)

    eng, firmware, adapter = engine()
    eng.load(firmware)
    adapter.fail_read = 12
    with pytest.raises(RuntimeError, match="read failed"):
        eng.run(firmware, results=["answer"])
    assert adapter.reset is True and adapter.ops[-1] == ("reset", True)

    eng, firmware, adapter = engine()
    with pytest.raises(ArithmeticError):
        eng.run(firmware, result_copy=lambda _result: (_ for _ in ()).throw(ArithmeticError()))
    assert adapter.reset is True and adapter.ops[-1] == ("reset", True)


@pytest.mark.parametrize("symbols,image", [
    ({**SYMBOLS, "bad": (MEM_BASE + 1, 4)}, IMAGE),
    ({**SYMBOLS, "bad": (MEM_BASE + 0x3FFC, 8)}, IMAGE),
    (SYMBOLS, IMAGE + b"x"),
])
def test_symbol_and_image_bounds_fail_before_adapter(symbols, image):
    platform, firmware = bundles(symbols=symbols, image=image)
    adapter = FakeAdapter()
    eng = DeploymentEngine(adapter, platform)
    with pytest.raises(BundleError):
        eng.load(firmware)
    assert adapter.ops == []


def test_adapter_selection_is_exact_and_separate():
    driver = object()
    soc_map = SocMap(IDENTITY.params)
    adapter = adapter_for("rfsoc4x2-nv-1q", driver, soc_map)
    assert isinstance(adapter, Rfsoc4x2Adapter)
    for forbidden in ("mts", "adc_nyquist_zone", "dac_nyquist_zone", "dacvop"):
        assert not hasattr(adapter, forbidden)
    with pytest.raises(DeploymentError, match="no deployment adapter"):
        adapter_for("rfsoc4x2", driver, soc_map)
