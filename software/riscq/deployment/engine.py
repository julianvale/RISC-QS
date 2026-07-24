"""Shared manifest-backed, reset-safe firmware deployment engine.

The engine depends on a deliberately small adapter protocol and is fully
host-testable.  Board startup, RPC authentication, and provisioning belong to
the next deployment phase.
"""

from __future__ import annotations

import atexit
import signal
import threading
import time
from contextlib import AbstractContextManager
from dataclasses import dataclass
from typing import Any, Callable, Mapping, Protocol

from riscq.deployment.bundle import BundleError, VerifiedBundle, load_firmware_bundle
from riscq.deployment.identity import sha256_bytes, strict_json_loads
from riscq.map import MEM_BASE, SocMap


STATUS_DONE_MASK = 0xFFFF_0000
STATUS_DONE = 0xD04E_0000
MAGIC = 0x5251_5121


class DeploymentError(RuntimeError):
    """Deployment failed closed with reset reassertion attempted."""


class DeploymentAdapter(Protocol):
    """Private engine seam; it deliberately exposes no shell or filesystem API."""

    board_id: str

    def verify_platform(self, expected: Mapping[str, str]) -> Mapping[str, str]: ...
    def assert_reset(self) -> None: ...
    def release_reset(self) -> None: ...
    def write_word(self, offset: int, value: int) -> None: ...
    def read_word(self, offset: int) -> int: ...


@dataclass
class _DriverAdapter:
    driver: Any
    soc_map: SocMap
    board_id: str

    def verify_platform(self, expected: Mapping[str, str]) -> Mapping[str, str]:
        verifier = getattr(self.driver, "verify_platform_identity", None)
        if verifier is not None:
            return dict(verifier(dict(expected)))
        hashes = getattr(self.driver, "hashes", None)
        params_path = getattr(self.driver, "params_path", None)
        bit_path = getattr(self.driver, "bit_path", None)
        hwh_path = getattr(self.driver, "hwh_path", None)
        if isinstance(hashes, Mapping) and all(path is not None for path in
                                               (params_path, bit_path, hwh_path)):
            return {**{key: expected[key] for key in
                       ("id", "version", "params_digest", "map_digest", "abi_digest")},
                    "bit_sha256": str(hashes[bit_path.name]),
                    "hwh_sha256": str(hashes[hwh_path.name]),
                    "raw_params_sha256": str(hashes[params_path.name])}
        raise DeploymentError("adapter cannot verify the active platform identity")

    def assert_reset(self) -> None:
        self.driver.write32(self.soc_map.host_ctrl + self.soc_map.HOST_RESET, 1)

    def release_reset(self) -> None:
        self.driver.write32(self.soc_map.host_ctrl + self.soc_map.HOST_RESET, 0)

    def write_word(self, offset: int, value: int) -> None:
        self.driver.write32(int(offset), int(value) & 0xFFFF_FFFF)

    def read_word(self, offset: int) -> int:
        return int(self.driver.read32(int(offset))) & 0xFFFF_FFFF


class Zcu216Adapter(_DriverAdapter):
    """Explicit wrapper for the existing ZCU216 driver semantics."""

    def __init__(self, driver: Any, soc_map: SocMap):
        super().__init__(driver, soc_map, "zcu216-14q")


class Rfsoc4x2Adapter(_DriverAdapter):
    """Explicit digital-only RFSoC4x2 wrapper with no ZCU216 startup hooks."""

    def __init__(self, driver: Any, soc_map: SocMap):
        super().__init__(driver, soc_map, "rfsoc4x2-nv-1q")


def adapter_for(platform_id: str, driver: Any, soc_map: SocMap) -> DeploymentAdapter:
    """Select only exact known platform identities; never fall back by prefix."""
    if platform_id == "zcu216-14q":
        return Zcu216Adapter(driver, soc_map)
    if platform_id == "rfsoc4x2-nv-1q":
        return Rfsoc4x2Adapter(driver, soc_map)
    raise DeploymentError(f"no deployment adapter for platform {platform_id!r}")


class _ResetGuard(AbstractContextManager[None]):
    def __init__(self, adapter: DeploymentAdapter):
        self.adapter = adapter
        self._handlers: dict[int, Any] = {}
        self._registered = False

    def _recover(self) -> None:
        self.adapter.assert_reset()

    def _signal(self, signum: int, _frame: Any) -> None:
        self._recover()
        raise KeyboardInterrupt(f"signal {signum} received; reset reasserted")

    def __enter__(self) -> None:
        self.adapter.assert_reset()
        atexit.register(self._recover)
        self._registered = True
        if threading.current_thread() is threading.main_thread():
            for signum in (signal.SIGINT, signal.SIGTERM):
                self._handlers[signum] = signal.getsignal(signum)
                signal.signal(signum, self._signal)
        return None

    def __exit__(self, exc_type: Any, exc: Any, traceback: Any) -> bool:
        recovery_error: BaseException | None = None
        try:
            self._recover()
        except BaseException as reset_exc:  # reset failure is itself safety-critical
            recovery_error = reset_exc
        finally:
            for signum, handler in self._handlers.items():
                signal.signal(signum, handler)
            if self._registered:
                atexit.unregister(self._recover)
        if recovery_error is not None:
            if exc is not None:
                raise DeploymentError("reset recovery failed after deployment error") from recovery_error
            raise DeploymentError("final reset assertion failed") from recovery_error
        return False


@dataclass(frozen=True)
class Symbol:
    name: str
    address: int
    size: int


def _symbols(bundle: VerifiedBundle, mem_bytes: int) -> dict[str, Symbol]:
    raw = strict_json_loads(bundle.files["symbols.json"])
    entry = int(bundle.manifest["image"]["entry"])
    image_size = int(bundle.manifest["image"]["size"])
    if entry != MEM_BASE or entry % 4 or image_size <= 0 or image_size % 4:
        raise BundleError("firmware entry and image size must be aligned flat-RAM values")
    if image_size > mem_bytes:
        raise BundleError("firmware image exceeds platform RAM")
    out: dict[str, Symbol] = {}
    for name, pair in raw.items():
        address, size = int(pair[0]), int(pair[1])
        if address % 4 or size < 0 or size % 4:
            raise BundleError(f"symbol {name!r} is not word aligned")
        if not MEM_BASE <= address <= MEM_BASE + mem_bytes:
            raise BundleError(f"symbol {name!r} starts outside RAM")
        if address + size > MEM_BASE + mem_bytes:
            raise BundleError(f"symbol {name!r} extends outside RAM")
        out[name] = Symbol(name, address, size)
    for required in ("__rq_status", "__rq_magic"):
        symbol = out.get(required)
        if symbol is None or symbol.size != 4:
            raise BundleError(f"required scalar symbol {required!r} is missing or malformed")
    return out


class DeploymentEngine:
    """Validate first, then perform only bounded word operations under reset recovery."""

    def __init__(self, adapter: DeploymentAdapter, platform: VerifiedBundle, *,
                 monotonic: Callable[[], float] = time.monotonic,
                 sleep: Callable[[float], None] = time.sleep):
        if platform.kind != "platform" or platform.raw_config is None:
            raise BundleError("DeploymentEngine requires a verified platform bundle")
        if adapter.board_id != platform.manifest["id"]:
            raise DeploymentError("explicit adapter does not match platform identity")
        self.adapter = adapter
        self.platform = platform
        self.soc_map = SocMap(platform.raw_config.params)
        self._monotonic = monotonic
        self._sleep = sleep
        self._loaded_key: tuple[str, str] | None = None
        self._platform_verified = False

    @property
    def identity(self) -> dict[str, str]:
        return {key: str(self.platform.manifest[key]) for key in
                ("id", "version", "params_digest", "map_digest", "abi_digest")}

    def _firmware(self, source: VerifiedBundle | str | bytes) -> VerifiedBundle:
        bundle = source if isinstance(source, VerifiedBundle) else load_firmware_bundle(source)
        if bundle.kind != "firmware":
            raise BundleError("expected a firmware bundle")
        required = bundle.manifest["requires"]
        for field in ("params_digest", "map_digest", "abi_digest"):
            if required[field] != self.platform.manifest[field]:
                raise BundleError(f"firmware/platform {field} mismatch")
        return bundle

    def _host_address(self, symbol: Symbol) -> int:
        return self.soc_map.to_host_addr(0, symbol.address)

    def _verify_active_platform(self) -> None:
        if self._platform_verified:
            return
        files = self.platform.manifest["files"]
        expected = {
            **self.identity,
            "bit_sha256": str(files["platform.bit"]["sha256"]),
            "hwh_sha256": str(files["platform.hwh"]["sha256"]),
            "raw_params_sha256": str(self.platform.manifest["raw_params_sha256"]),
        }
        observed = dict(self.adapter.verify_platform(expected))
        if observed != expected:
            raise DeploymentError(f"active platform identity mismatch: {observed!r} != {expected!r}")
        self._platform_verified = True

    def _validate_assets(self, bundle: VerifiedBundle) -> None:
        layout = bundle.manifest["asset_layout"]
        for asset_name in bundle.manifest["assets"]:
            record = layout[asset_name]
            channel = int(record["channel"])
            line = int(record["line"])
            if line < 0:
                raise BundleError(f"asset {asset_name!r} line must be nonnegative")
            info = self.soc_map.channel(channel)
            data = bundle.files[asset_name]
            if len(data) % info.line_bytes:
                raise BundleError(f"asset {asset_name!r} is not a whole number of channel lines")
            if line + len(data) // info.line_bytes > self.soc_map.params.env_depth:
                raise BundleError(f"asset {asset_name!r} exceeds envelope RAM depth")

    def load(self, source: VerifiedBundle | str | bytes) -> VerifiedBundle:
        bundle = self._firmware(source)  # all identity checks precede adapter calls
        symbols = _symbols(bundle, self.soc_map.mem_bytes)
        self._validate_assets(bundle)
        image = bundle.files["firmware.bin"]
        expected_hash = str(bundle.manifest["image"]["sha256"])
        if sha256_bytes(image) != expected_hash:
            raise BundleError("firmware bytes changed after verification")
        key = (sha256_bytes(self.platform.to_bytes()), sha256_bytes(bundle.to_bytes()))
        if self._loaded_key == key:
            return bundle
        self._verify_active_platform()
        base = self.soc_map.to_host_addr(0, int(bundle.manifest["image"]["entry"]))
        with _ResetGuard(self.adapter):
            words = [int.from_bytes(image[index:index + 4], "little")
                     for index in range(0, len(image), 4)]
            for index, word in enumerate(words):
                self.adapter.write_word(base + 4 * index, word)
            for index, word in enumerate(words):
                observed = self.adapter.read_word(base + 4 * index)
                if observed != word:
                    raise DeploymentError(
                        f"complete image readback mismatch at byte {4 * index:#x}: "
                        f"{observed:#010x} != {word:#010x}"
                    )
                
            layout = bundle.manifest["asset_layout"]
            for asset_name in bundle.manifest["assets"]:
                record = layout[asset_name]
                channel = int(record["channel"])
                line = int(record["line"])
                info = self.soc_map.channel(channel)
                data = bundle.files[asset_name]
                if len(data) % info.line_bytes:
                    raise BundleError(f"asset {asset_name!r} is not a whole number of channel lines")
                lines = len(data) // info.line_bytes
                target_addr = self.soc_map.env_base(channel, 0) + line * info.line_bytes
                for index in range(0, len(data), 4):
                    self.adapter.write_word(target_addr + index,
                                             int.from_bytes(data[index:index + 4], "little"))

            magic = self.adapter.read_word(self._host_address(symbols["__rq_magic"]))
            if magic != MAGIC:
                raise DeploymentError(f"loaded image magic {magic:#010x} != {MAGIC:#010x}")
        self._loaded_key = key
        return bundle

    def run(self, source: VerifiedBundle | str | bytes, *,
            parameters: Mapping[str, int] | None = None,
            results: list[str] | None = None, timeout_s: float = 1.0,
            result_copy: Callable[[dict[str, bytes | int]], Any] | None = None) -> Any:
        bundle = self.load(source)
        symbols = _symbols(bundle, self.soc_map.mem_bytes)
        if not isinstance(timeout_s, (int, float)) or timeout_s <= 0:
            raise ValueError("timeout_s must be positive")
        parameters = dict(parameters or {})
        results = list(results or [])
        for name in parameters:
            if name not in symbols or symbols[name].size != 4:
                raise BundleError(f"parameter {name!r} is not a declared int32 symbol")
            value = parameters[name]
            if (not isinstance(value, int) or isinstance(value, bool)
                    or not -(1 << 31) <= value < (1 << 32)):
                raise BundleError(f"parameter {name!r} is outside the supported 32-bit range")
        for name in results:
            if name not in symbols or symbols[name].size <= 0:
                raise BundleError(f"result {name!r} is not a declared nonempty symbol")

        with _ResetGuard(self.adapter):
            status = symbols["__rq_status"]
            self.adapter.write_word(self._host_address(status), 0)
            for name, value in parameters.items():
                self.adapter.write_word(self._host_address(symbols[name]), int(value))
            start = self._monotonic()
            deadline = start + float(timeout_s)
            try:
                self.adapter.release_reset()
                observed = self.adapter.read_word(self._host_address(status))
                while (observed & STATUS_DONE_MASK) != STATUS_DONE:
                    if self._monotonic() >= deadline:
                        raise TimeoutError(
                            f"firmware did not complete within {timeout_s}s; status={observed:#010x}"
                        )
                    self._sleep(min(0.001, max(0.0, deadline - self._monotonic())))
                    observed = self.adapter.read_word(self._host_address(status))
                output: dict[str, bytes | int] = {}
                for name in results:
                    symbol = symbols[name]
                    words = [self.adapter.read_word(self._host_address(symbol) + offset)
                             for offset in range(0, symbol.size, 4)]
                    data = b"".join(word.to_bytes(4, "little") for word in words)
                    output[name] = words[0] if symbol.size == 4 else bytes(data)
                return result_copy(output) if result_copy is not None else output
            finally:
                # Covers release mutation+raise, timeout, polling, result read/conversion/copy,
                # KeyboardInterrupt, SystemExit, and other BaseException paths.
                self.adapter.assert_reset()

    def self_test(self, source: VerifiedBundle | str | bytes, *, timeout_s: float = 1.0) -> Any:
        return self.run(source, results=["__rq_status"], timeout_s=timeout_s)
