typedef struct packed {
    logic [7:0] half_period;
    logic [15:0] dur;
    logic cw;
} laser_param;

module laser_out #() (
    input logic clk,
    input logic reset,
    input logic valid,
    input laser_param params,
    output logic d_out
);

    logic [15:0] counter;
    logic [7:0] period_counter;
    logic output_toggle;
    logic valid_prev;
    logic valid_pulse;

    logic [7:0] latched_h_period;
    logic latched_cw;

    always_ff @(posedge clk) begin
        if (reset) begin
            counter <= 16'b0;
            output_toggle <= 1'b0;
            period_counter <= 8'b0;
            valid_prev <= 1'b0;
        end else begin
            valid_prev <= valid;
            if (valid_pulse && params.half_period != 0 && params.dur != 0) begin // new pulse has priority over old, invalid pulses discarded
                latched_h_period <= params.half_period - 1; // latch half period to reload the counter later
                period_counter <= params.half_period - 1;
                counter <= params.dur - 1;
                latched_cw <= params.cw;
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

    assign valid_pulse = valid && !valid_prev; // trigger on rising edge of valid
    assign d_out = output_toggle;
    
endmodule