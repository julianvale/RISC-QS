module laser_out #() (
    input wire clk,
    input wire reset,
    input wire valid,
    input [24:0] params,
    output wire d_out
);

    reg [15:0] counter;
    reg [7:0] period_counter;
    reg output_toggle;

    reg [7:0] latched_h_period;
    reg latched_cw;

    wire [7:0] half_period = params[24:17];
    wire [15:0] dur = params[16:1];
    wire cw = params[0];

    always @(posedge clk) begin
        if (reset) begin
            counter <= 16'b0;
            output_toggle <= 1'b0;
            period_counter <= 8'b0;
        end else begin
            if (valid && half_period != 0 && dur != 0) begin // new pulse has priority over old, invalid pulses discarded
                latched_h_period <= half_period - 1; // latch half period to reload the counter later
                period_counter <= half_period - 1;
                counter <= dur - 1;
                latched_cw <= cw;
                output_toggle <= 1'b1;
            end else begin
                if (counter == 0) output_toggle <= 1'b0;
                else begin
                    if (!latched_cw) begin // toggle output every half period, if continuous wave mode is disabled.
                        if (period_counter == 0) begin
                            period_counter <= latched_h_period;
                            output_toggle <= ~output_toggle;
                        end else period_counter <= period_counter - 1'b1;
                    end
                    counter <= counter - 1'b1;
                end
            end
        end
    end

    assign d_out = output_toggle;
    
endmodule