from riscq import Board

def main():
    print("Connecting to board over authenticated Pyro5 RPC...")
    # Connects automatically using ~/.config/riscq/board.json profile
    board = Board.connect()

    # Query status
    status = board.status()
    print("Board status:", status)

    # Compile C program to .rqfw bundle on the host
    print("Compiling test_program.c...")
    firmware = board.compile_c("software/fw/test_program.c", name="exp_test", version="1.0.0")

    # Run firmware on the board over RPC
    print("Running firmware on board...")
    result = board.run(
        firmware,
        results=["user_val", "__rq_status"],
        timeout_s=1.0
    )

    print("Execution finished!")
    print(f"user_val: {result['user_val']:#010x}")
    print(f"__rq_status: {result['__rq_status']:#010x}")

    assert result["user_val"] == 0x12345678, "Data value mismatch!"
    print("TEST PASSED SUCCESSFULLY!")

if __name__ == "__main__":
    main()