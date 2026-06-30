// -----------------------------------------------------------------------------
// UramBlackBox.v — Xilinx UltraScale+ UltraRAM (URAM288) true dual-port template.
//
// Backs riscq.memory.UramBlackBox. Inferred as UltraRAM by Vivado on the RFSoC
// part: a true dual-port RAM with per-byte write enables and a configurable
// output pipeline (NBPIPE stages). The (* ram_style = "ultra" *) attribute and
// this coding style match Xilinx's recommended UltraRAM HDL template (UG901),
// so synthesis maps the array onto URAM288 primitives.
//
// Ports/generics mirror the BlackBox exactly (noIoPrefix): per port a byte-write
// vector (we*), a memory enable (mem_en*), data in/out (din*/dout*) and address
// (addr*), all on the single clock `clk`.
//
//   DWIDTH  : data width in bits      (= NUM_COL * column width)
//   NUM_COL : number of byte columns  (= mask width; one we bit per column)
//   AWIDTH  : address width in bits   (depth = 1 << AWIDTH)
//   NBPIPE  : number of output pipeline registers
//
// Read latency (addr -> dout) is NBPIPE + 1 cycles: one memory-read register
// plus NBPIPE output stages, each gated by a delayed copy of mem_en. Concurrent
// access to the same address from both ports is a write/read race (read-first per
// port here) and must be avoided by the user, as for any true dual-port RAM.
// -----------------------------------------------------------------------------
module UramBlackBox #(
    parameter AWIDTH  = 12,
    parameter NUM_COL = 9,
    parameter DWIDTH  = 72,
    parameter NBPIPE  = 3
) (
    input  wire                clk,

    // Port A
    input  wire [NUM_COL-1:0]  wea,
    input  wire                mem_ena,
    input  wire [DWIDTH-1:0]   dina,
    input  wire [AWIDTH-1:0]   addra,
    output wire [DWIDTH-1:0]   douta,

    // Port B
    input  wire [NUM_COL-1:0]  web,
    input  wire                mem_enb,
    input  wire [DWIDTH-1:0]   dinb,
    input  wire [AWIDTH-1:0]   addrb,
    output wire [DWIDTH-1:0]   doutb
);

  localparam CWIDTH = DWIDTH / NUM_COL;  // column (byte) width

  (* ram_style = "ultra" *)
  reg [DWIDTH-1:0] mem [(1<<AWIDTH)-1:0];   // memory array

  // Port A pipeline
  reg [DWIDTH-1:0] memrega;
  reg [DWIDTH-1:0] mem_pipe_rega [NBPIPE-1:0];
  reg              mem_en_pipe_rega [NBPIPE:0];

  // Port B pipeline
  reg [DWIDTH-1:0] memregb;
  reg [DWIDTH-1:0] mem_pipe_regb [NBPIPE-1:0];
  reg              mem_en_pipe_regb [NBPIPE:0];

  integer i;

  // ---------------------------------------------------------------------------
  // Port A : byte write, registered read
  // ---------------------------------------------------------------------------
  always @(posedge clk) begin
    if (mem_ena) begin
      for (i = 0; i < NUM_COL; i = i + 1)
        if (wea[i])
          mem[addra][i*CWIDTH +: CWIDTH] <= dina[i*CWIDTH +: CWIDTH];
    end
  end

  always @(posedge clk)
    if (mem_ena)
      memrega <= mem[addra];

  // Output enable pipeline (stage 0 = read register valid)
  always @(posedge clk) begin
    mem_en_pipe_rega[0] <= mem_ena;
    for (i = 0; i < NBPIPE; i = i + 1)
      mem_en_pipe_rega[i+1] <= mem_en_pipe_rega[i];
  end

  // Output data pipeline
  always @(posedge clk) begin
    if (mem_en_pipe_rega[0])
      mem_pipe_rega[0] <= memrega;
    for (i = 0; i < NBPIPE-1; i = i + 1)
      if (mem_en_pipe_rega[i+1])
        mem_pipe_rega[i+1] <= mem_pipe_rega[i];
  end

  assign douta = mem_pipe_rega[NBPIPE-1];

  // ---------------------------------------------------------------------------
  // Port B : byte write, registered read
  // ---------------------------------------------------------------------------
  always @(posedge clk) begin
    if (mem_enb) begin
      for (i = 0; i < NUM_COL; i = i + 1)
        if (web[i])
          mem[addrb][i*CWIDTH +: CWIDTH] <= dinb[i*CWIDTH +: CWIDTH];
    end
  end

  always @(posedge clk)
    if (mem_enb)
      memregb <= mem[addrb];

  always @(posedge clk) begin
    mem_en_pipe_regb[0] <= mem_enb;
    for (i = 0; i < NBPIPE; i = i + 1)
      mem_en_pipe_regb[i+1] <= mem_en_pipe_regb[i];
  end

  always @(posedge clk) begin
    if (mem_en_pipe_regb[0])
      mem_pipe_regb[0] <= memregb;
    for (i = 0; i < NBPIPE-1; i = i + 1)
      if (mem_en_pipe_regb[i+1])
        mem_pipe_regb[i+1] <= mem_pipe_regb[i];
  end

  assign doutb = mem_pipe_regb[NBPIPE-1];

endmodule
