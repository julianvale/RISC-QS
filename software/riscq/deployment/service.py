"""RFSoC4x2-only root service for the trusted direct-link deployment."""

from __future__ import annotations

import json
import threading
from pathlib import Path

import Pyro5.api
import Pyro5.errors
import serpent

from riscq.board.rfsoc4x2_validation import validate_rfdc_health
from riscq.deployment.bundle import load_platform_bundle
from riscq.deployment.engine import DeploymentEngine, adapter_for


PLATFORMS_DIR = Path("/opt/riscq/platforms")
TOKEN_PATH = Path("/etc/riscq/token")
CONFIG_PATH = Path("/etc/riscq/service.json")
FIRMWARE_DIR = Path("/var/lib/riscq/firmware")


def load_service_config(path: str | Path = CONFIG_PATH) -> dict:
    """Load the exact root-owned service selection, without directory discovery."""
    document = json.loads(Path(path).read_text())
    if not isinstance(document, dict) or set(document) != {"platform", "bind", "port"}:
        raise RuntimeError("service configuration must contain exactly platform, bind, and port")
    if (not isinstance(document["platform"], str) or Path(document["platform"]).name != document["platform"]
            or not document["platform"].endswith(".rqplatform")):
        raise RuntimeError("service platform must be one filename ending in .rqplatform")
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

    def status(self) -> dict:
        return {"ready": True, "platform": self._engine.identity}

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


def startup_sequence(config: dict | None = None):
    # Keep configuration and fake-service tests host-only; PYNQ exists only on the board.
    from riscq.board.rfsoc4x2_driver import Rfsoc4x2Driver
    config = load_service_config() if config is None else config
    platform_path = PLATFORMS_DIR / config["platform"]
    if not platform_path.is_file():
        raise FileNotFoundError(f"configured platform bundle missing: {platform_path}")
    verified_platform = load_platform_bundle(platform_path)

    overlay_dir = Path("/tmp/riscq_overlay")
    overlay_dir.mkdir(parents=True, exist_ok=True)
    bit_path = overlay_dir / "platform.bit"
    hwh_path = overlay_dir / "platform.hwh"
    params_path = overlay_dir / "params.json"
    bit_path.write_bytes(verified_platform.files["platform.bit"])
    hwh_path.write_bytes(verified_platform.files["platform.hwh"])
    params_path.write_bytes(verified_platform.files["params.json"])

    driver = Rfsoc4x2Driver(bit_path=bit_path, params_path=params_path)
    driver.program_clocks()
    driver.load_overlay()
    driver.open_mmio()
    driver.reset_hold()
    validate_rfdc_health(driver.rfdc.IPStatus)
    driver.probe_last_ram_word()
    driver.reset_hold()

    adapter = adapter_for(verified_platform.manifest["id"], driver, driver.map)
    engine = DeploymentEngine(adapter, verified_platform)
    selftest_path = FIRMWARE_DIR / "selftest.rqfw"
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
