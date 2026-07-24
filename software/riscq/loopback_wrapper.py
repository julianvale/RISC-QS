from riscq import Board
from riscq.deployment import EnvelopeAsset
import numpy as np
import math

def _s32(value: int) -> int:
    """Convert raw 32-bit unsigned register value to signed integer"""
    value &= 0xFFFF_FFFF
    return value - (1 << 32) if value & (1 << 31) else value

def main():
    print("Connecting to board over authenticated Pyro5 RPC...")
    # Connects automatically using ~/.config/riscq/board.json profile
    board = Board.connect()

    # Query status
    status = board.status()
    print("Board status:", status)

    # Compile C program to .rqfw bundle on the host
    print("Compiling rfsoc4x2_loopback_validation.c...")
    UNITY_WORD = (0x00007FFF).to_bytes(4, "little")
    gate_env_bytes = UNITY_WORD * 4096
    demod_env_bytes = UNITY_WORD * 1024

    firmware = board.compile_c(
        "software/fw/rfsoc4x2_loopback_validation.c",
        name="loopback_test",
        version="1.0.0",
        assets={
            "assets/gate_env.bin": EnvelopeAsset(gate_env_bytes, channel=0, line=0),
            "assets/demod_env.bin": EnvelopeAsset(demod_env_bytes, channel=2, line=0),
        }
    )

    from riscq.deployment.bundle import load_firmware_bundle

    # Load and inspect the compiled firmware object
    verified = load_firmware_bundle(firmware.data)

    print("Assets in manifest:", verified.manifest["assets"])
    print("Gate asset size:   ", len(verified.files.get("assets/gate_env.bin", b"")))
    print("Demod asset size:  ", len(verified.files.get("assets/demod_env.bin", b"")))

    modes = ["matched", "no dac", "detuned"]
    for i in range(3):
        print(f"\n--- Running mode: {modes[i]} ---")
        result = board.run(
            firmware,
            parameters={"rfsoc4x2_mode": i},
            # Add the control variables to the results list!
            results=[
                "rfsoc4x2_mode",       # Did the C program actually receive 'i'?
                "rfsoc4x2_signature",  # Did the program finish (0x354C420x) or abort (0xBAD05D10)?
                "rfsoc4x2_t_dac",      # Did the timer calculate correctly?
                "rfsoc4x2_i", 
                "rfsoc4x2_q", 
                "__rq_status"
            ],
            timeout_s=1.0
        )


        # Inside your loop:
        i_val = _s32(result.get('rfsoc4x2_i', 0))
        q_val = _s32(result.get('rfsoc4x2_q', 0))
        magnitude = math.hypot(i_val, q_val)
        
        # Print the debug breadcrumbs
        print(f"DEBUG rfsoc4x2_mode : {result.get('rfsoc4x2_mode')}")
        print(f"DEBUG signature     : {result.get('rfsoc4x2_signature', 0):#010x}")
        print(f"DEBUG t_dac         : {result.get('rfsoc4x2_t_dac')}")
        print(f"DEBUG __rq_status   : {result.get('__rq_status', 0):#010x}")
        
        print(f"RESULT: i={i_val} q={q_val} magnitude={magnitude:.3f}")

if __name__ == "__main__":
    main()
