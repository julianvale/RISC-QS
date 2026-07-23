import os
import glob
from pathlib import Path

import Pyro5.api
import Pyro5.errors
import serpent
from riscq.deployment.bundle import load_platform_bundle
from riscq.deployment.engine import DeploymentEngine, adapter_for
from riscq.board.rfsoc4x2_driver import Rfsoc4x2Driver

PLATFORMS_DIR = Path("/opt/riscq/platforms")
TOKEN_PATH = Path("/etc/riscq/token")
FIRMWARE_DIR = Path("/var/lib/riscq/firmware")


class AuthenticatedDaemon(Pyro5.api.Daemon):
    """Pyro5 daemon enforcing token authentication during client handshake."""

    def __init__(self, expected_token: str, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self._expected_token = expected_token

    def validateHandshake(self, conn, data):
        if data != self._expected_token:
            raise Pyro5.errors.SecurityError("Invalid pairing token")
        return "OK"


@Pyro5.api.expose
class RiscqBoardService:
    """The secure RPC interface. Exposes only bounded deployment methods."""

    def __init__(self, engine: DeploymentEngine):
        self._engine = engine

    def status(self) -> dict:
        return {"ready": True, "platform": self._engine.identity}

    def run_firmware(self, bundle: bytes, parameters: dict, results: list, timeout_s: float) -> dict:
        # Unwrap serpent's base64 dict back into raw Python bytes
        if isinstance(bundle, dict):
            bundle = serpent.tobytes(bundle)
            
        return self._engine.run(
            bundle, 
            parameters=parameters, 
            results=results, 
            timeout_s=timeout_s
        )

    def run_installed(self, name: str, version: str, parameters: dict, results: list, timeout_s: float) -> dict:
        target = FIRMWARE_DIR / f"{name}-{version}.rqfw"
        if not target.is_file():
            raise FileNotFoundError(f"Installed firmware {name} version {version} not found.")
        return self.run_firmware(target.read_bytes(), parameters, results, timeout_s)

    def self_test(self, bundle: bytes, timeout_s: float) -> dict:
        selftest_path = FIRMWARE_DIR / "selftest.rqfw"
        return self._engine.run(selftest_path.read_bytes(), results=["__rq_status"], timeout_s=timeout_s)


def startup_sequence():
    """Executes the strict fail-closed boot sequence."""
    platform_files = glob.glob(str(PLATFORMS_DIR / "*.rqplatform"))
    if not platform_files:
        raise FileNotFoundError("No .rqplatform bundle found in /opt/riscq/platforms")
    platform_path = platform_files[0]
    verified_platform = load_platform_bundle(platform_path)

    print("2. Extracting hardware assets and initializing driver...")
    # Create a clean directory for the extracted overlay
    overlay_dir = Path("/tmp/riscq_overlay")
    overlay_dir.mkdir(parents=True, exist_ok=True)

    # Dynamically locate the bitstream and hardware handoff files inside the bundle
    bit_name = next(name for name in verified_platform.files if name.endswith(".bit"))
    hwh_name = next(name for name in verified_platform.files if name.endswith(".hwh"))

    # PYNQ requires the .bit and .hwh to have the exact same base name
    bit_path = overlay_dir / "platform.bit"
    hwh_path = overlay_dir / "platform.hwh"
    params_path = overlay_dir / "params.json"

    # Write them to the real filesystem
    bit_path.write_bytes(verified_platform.files[bit_name])
    hwh_path.write_bytes(verified_platform.files[hwh_name])
    params_path.write_bytes(verified_platform.files["params.json"])
    
    driver = Rfsoc4x2Driver(
        bit_path=bit_path,
        params_path=params_path
    )

    driver.program_clocks()
    driver.load_overlay()
    driver.open_mmio()
    driver.reset_hold()

    status = driver.rfdc.IPStatus
    if int(status["State"]) != 0:
        raise RuntimeError(f"RFDC top-level state is {status['State']}, expected 0")

    driver.probe_last_ram_word()
    driver.reset_hold()

    adapter = adapter_for(verified_platform.manifest["id"], driver, driver.map)
    engine = DeploymentEngine(adapter, verified_platform)

    # Run installed board_check selftest
    selftest_path = FIRMWARE_DIR / "selftest.rqfw"
    if not selftest_path.is_file():
        raise FileNotFoundError(f"Self-test bundle missing at {selftest_path}")

    res = engine.run(selftest_path.read_bytes(), results=["board_check_result"], timeout_s=0.5)
    if res.get("board_check_result") != 0xC05C5C01:
        raise RuntimeError(f"Self-test failed: board_check_result = {res.get('board_check_result')}")

    engine.run(selftest_path.read_bytes(), results=["__rq_status"], timeout_s=0.5)
    return engine


def main():
    if not TOKEN_PATH.is_file():
        raise RuntimeError("Pairing token not found. Board must be provisioned first.")

    token = TOKEN_PATH.read_text().strip()

    Pyro5.config.COMMTIMEOUT = 5.0

    try:
        engine = startup_sequence()
    except Exception as e:
        print(f"Hardware startup failed: {e}")
        raise SystemExit(1)

    daemon = AuthenticatedDaemon(expected_token=token, host="0.0.0.0", port=50000)
    daemon.register(RiscqBoardService(engine), "riscq.board")

    print("Board Service ready. Listening securely at 0.0.0.0:50000")
    daemon.requestLoop()


if __name__ == "__main__":
    main()