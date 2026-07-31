"""RFSoC4x2-only root service for the trusted direct-link deployment."""

from __future__ import annotations

import json
import threading
from pathlib import Path

import Pyro5.api
import Pyro5.errors
import serpent

from riscq.board.rfsoc4x2_validation import validate_rfdc_health
from riscq.deployment.bundle import BundleError
from riscq.deployment.context import PlatformContext
from riscq.deployment.engine import DeploymentEngine, adapter_for
from riscq.deployment.program import (Rfsoc4x2ProgramAdapter, validate_program_identity,
                                       validate_program_wire)


PLATFORMS_DIR = Path("/opt/riscq/platforms")
TOKEN_PATH = Path("/etc/riscq/token")
CONFIG_PATH = Path("/etc/riscq/service.json")
FIRMWARE_DIR = Path("/var/lib/riscq/firmware")


def load_service_config(path: str | Path = CONFIG_PATH) -> dict:
    """Load the small root-owned network configuration."""
    document = json.loads(Path(path).read_text())
    if not isinstance(document, dict) or set(document) != {"bind", "port"}:
        raise RuntimeError("service configuration must contain exactly bind and port")
    if not isinstance(document["bind"], str) or not document["bind"].strip():
        raise RuntimeError("service bind address is required")
    if (not isinstance(document["port"], int) or isinstance(document["port"], bool)
            or not 1 <= document["port"] <= 65535):
        raise RuntimeError("service port is invalid")
    return document


class AuthenticatedDaemon(Pyro5.api.Daemon):
    def __init__(self, expected_token: str, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self._expected_token = expected_token

    def validateHandshake(self, conn, data):
        if data != self._expected_token:
            raise Pyro5.errors.SecurityError("Invalid pairing token")
        return "OK"


@Pyro5.api.expose
class RiscqBoardService:
    """Only bounded execution methods are exposed; all execution is serialized."""

    def __init__(self, engine: DeploymentEngine, firmware_dir: Path = FIRMWARE_DIR):
        self._engine = engine
        self._firmware_dir = Path(firmware_dir)
        self._lock = threading.RLock()
        self._program_map = None
        self._program_driver = None

    def status(self) -> dict:
        return {"ready": True, "platform": self._engine.identity,
                "params": self._engine.platform.params_json}

    def run_firmware(self, bundle: bytes, parameters: dict, results: list, timeout_s: float) -> dict:
        if isinstance(bundle, dict):
            bundle = serpent.tobytes(bundle)
        with self._lock:
            return self._engine.run(bundle, parameters=parameters, results=results,
                                    timeout_s=timeout_s)

    def run_installed(self, name: str, version: str, parameters: dict, results: list,
                      timeout_s: float) -> dict:
        target = self._firmware_dir / f"{name}-{version}.rqfw"
        if not target.is_file():
            raise FileNotFoundError(f"Installed firmware {name} version {version} not found")
        with self._lock:
            return self._engine.run(target.read_bytes(), parameters=parameters, results=results,
                                    timeout_s=timeout_s)

    def self_test(self, bundle: bytes = b"", timeout_s: float = 1.0) -> dict:
        target = self._firmware_dir / "selftest.rqfw"
        if not target.is_file():
            raise FileNotFoundError(f"Self-test bundle missing at {target}")
        with self._lock:
            return self._engine.run(target.read_bytes(), results=["__rq_status"],
                                    timeout_s=timeout_s)

    def program_setup(self, params_json: str, progmap: dict, timeout_s: float | None = None):
        """Load one restricted RFSoC4x2 Program map; core 0 is the only accepted core."""
        if timeout_s is not None and (not isinstance(timeout_s, (int, float)) or timeout_s <= 0):
            raise ValueError("timeout_s must be positive")
        with self._lock:
            try:
                if not isinstance(progmap, dict) or set(map(int, progmap)) != {0}:
                    raise ValueError("RFSoC4x2 Program setup requires core 0 only")
                m = validate_program_identity(params_json, self._engine.platform)
                wire = progmap[0] if 0 in progmap else progmap["0"]
                validate_program_wire(wire, m)
                from riscq import run as _run
                program = _run._prog_from_wire(wire)
                driver = getattr(self._engine.adapter, "driver", None)
                if driver is None:
                    raise RuntimeError("RFSoC4x2 Program adapter is unavailable")
                adapter = Rfsoc4x2ProgramAdapter(driver, m)
                self._engine.verify_active_platform()
                _run.setup(adapter, m, {0: program})
                # Publish only after the complete setup has succeeded.
                self._program_map = {0: program}
                self._program_driver = adapter
                return None
            except BundleError as exc:
                # Pyro's serpent serializer safely carries built-ins, not local exception classes.
                raise ValueError(str(exc)) from None

    def program_rerun(self, cores, params, arrays, results, timeout, timeout_s):
        if not isinstance(timeout_s, (int, float)) or timeout_s <= 0:
            raise ValueError("RFSoC4x2 Program rerun requires a positive timeout_s")
        with self._lock:
            if self._program_map is None or self._program_driver is None:
                raise RuntimeError("Program setup has not succeeded")
            if set(map(int, cores)) != {0}:
                raise ValueError("RFSoC4x2 Program rerun requires core 0 only")
            from riscq import run as _run
            out = _run.rerun(self._program_driver, self._engine.soc_map,
                             {0: self._program_map[0]}, params=dict(params), arrays=dict(arrays),
                             results=None if results is None else list(results),
                             timeout=int(timeout), timeout_s=float(timeout_s))
            return {0: {name: bytes(array.astype("<i4").tobytes())
                        for name, array in out[0].items()}}


def startup_sequence(config: dict | None = None, *,
                     platforms_dir: str | Path = PLATFORMS_DIR,
                     firmware_dir: str | Path = FIRMWARE_DIR):
    # Keep configuration and fake-service tests host-only; PYNQ exists only on the board.
    from riscq.board.rfsoc4x2_driver import Rfsoc4x2Driver
    config = load_service_config() if config is None else config
    platform = PlatformContext.from_current(platforms_dir)
    driver = Rfsoc4x2Driver(bit_path=platform.bit_path, hwh_path=platform.hwh_path,
                            params_path=platform.params_path)
    driver.program_clocks()
    driver.load_overlay()
    driver.open_mmio()
    driver.reset_hold()
    validate_rfdc_health(driver.rfdc.IPStatus)
    driver.probe_last_ram_word()
    driver.reset_hold()

    adapter = adapter_for(platform.identity["id"], driver, driver.map)
    engine = DeploymentEngine(adapter, platform)
    selftest_path = Path(firmware_dir) / "selftest.rqfw"
    if not selftest_path.is_file():
        raise FileNotFoundError(f"Self-test bundle missing at {selftest_path}")
    result = engine.run(selftest_path.read_bytes(), results=["board_check_result"], timeout_s=0.5)
    if result.get("board_check_result") != 0xC05C5C01:
        raise RuntimeError(f"self-test failed: {result.get('board_check_result')}")
    return engine


def main():
    if not TOKEN_PATH.is_file():
        raise RuntimeError("Pairing token not found; board must be provisioned first")
    config = load_service_config()
    token = TOKEN_PATH.read_text().strip()
    if not token:
        raise RuntimeError("pairing token is empty")
    engine = startup_sequence(config)
    daemon = AuthenticatedDaemon(expected_token=token, host=config["bind"], port=config["port"])
    daemon.register(RiscqBoardService(engine), "riscq.board")
    daemon.requestLoop()


if __name__ == "__main__":
    main()
