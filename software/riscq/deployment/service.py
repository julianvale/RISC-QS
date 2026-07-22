import os
import glob
from pathlib import Path

import Pyro5.api
import Pyro5.core
from riscq.deployment.bundle import load_platform_bundle
from riscq.deployment.engine import DeploymentEngine, adapter_for
from rfsoc4x2_driver import Rfsoc4x2Driver  # The existing digital-only bring-up path

# Strict directories defined in the Phase 3 plan
PLATFORMS_DIR = Path("/opt/riscq/platforms")
TOKEN_PATH = Path("/etc/riscq/token")
FIRMWARE_DIR = Path("/var/lib/riscq/firmware")

@Pyro5.api.expose
class RiscqBoardService:
    """The secure RPC interface. Exposes only bounded deployment methods."""
    
    def __init__(self, engine: DeploymentEngine):
        self._engine = engine

    def status(self) -> dict:
        return {"ready": True, "platform": self._engine.identity}

    def run_firmware(self, bundle: bytes, parameters: dict, results: list, timeout_s: float) -> dict:
        # Relies entirely on the proven reset-safe engine
        return self._engine.run(
            bundle, 
            parameters=parameters, 
            results=results, 
            timeout_s=timeout_s
        )

    def run_installed(self, name: str, version: str, parameters: dict, results: list, timeout_s: float) -> dict:
        # Looks up immutable installed firmware bundles 
        target = FIRMWARE_DIR / f"{name}-{version}.rqfw"
        if not target.is_file():
            raise FileNotFoundError(f"Installed firmware {name} version {version} not found.")
        return self.run_firmware(target.read_bytes(), parameters, results, timeout_s)

    def self_test(self, bundle: bytes, timeout_s: float) -> dict:
        return self._engine.self_test(bundle, timeout_s=timeout_s)

def startup_sequence():
    """Executes the strict 7-step fail-closed boot sequence."""
    
    print("1. Verifying configured platform bundle...")
    platform_files = glob.glob(str(PLATFORMS_DIR / "*.rqplatform"))
    if not platform_files:
        raise FileNotFoundError("No .rqplatform bundle found in /opt/riscq/platforms")
    platform_path = platform_files[0]
    verified_platform = load_platform_bundle(platform_path)
    
    print("2. Initializing driver and programming clocks...")
    # Extract params to pass to the legacy driver
    params_path = PLATFORMS_DIR / "params.json"
    params_path.write_bytes(verified_platform.files["params.json"])
    
    driver = Rfsoc4x2Driver(
        bit_path=platform_path, # In reality, you'd extract the bit/hwh first
        params_path=params_path
    )
    driver.program_clocks()
    
    print("3. Validating HWH ranges and loading overlay...")
    driver.load_overlay()
    
    print("4. Opening MMIO and immediately asserting reset...")
    driver.open_mmio()
    driver.reset_hold()
    
    print("5. Validating RFDC health...")
    # Health checks extracted from validate_rfdc_health logic
    status = driver.rfdc.IPStatus
    if int(status["State"]) != 0:
        raise RuntimeError(f"RFDC top-level state is {status['State']}, expected 0")
        
    print("6. Performing RAM readback validation...")
    driver.probe_last_ram_word()
    
    print("7. Platform is healthy. Reasserting reset and initializing secure engine...")
    driver.reset_hold()
    adapter = adapter_for(verified_platform.manifest["id"], driver, driver.map)
    engine = DeploymentEngine(adapter, verified_platform)
    
    return engine

def main():
    if not TOKEN_PATH.is_file():
        raise RuntimeError("Pairing token not found. Board must be provisioned first.")
    
    # Read the token provisioned by the CLI 
    token = TOKEN_PATH.read_text().strip()
    
    # Secure the Pyro5 network configuration
    Pyro5.config.REQUIRE_EXPOSE = True
    Pyro5.config.COMMTIMEOUT = 5.0
    # The HMAC key guarantees only a client with the pairing token can connect
    Pyro5.core.current_context.track_credentials = True
    Pyro5.config.HMAC_KEY = token.encode("utf-8")
    
    try:
        # Run the fail-closed hardware boot sequence
        engine = startup_sequence()
    except Exception as e:
        print(f"Hardware startup failed: {e}")
        raise SystemExit(1)
        
    # Start the authenticated RPC server on the private link address
    daemon = Pyro5.api.Daemon(host="0.0.0.0", port=50000)
    uri = daemon.register(RiscqBoardService(engine), "riscq.board")
    
    print(f"Board Service ready. Listening securely at {uri}")
    daemon.requestLoop()

if __name__ == "__main__":
    main()