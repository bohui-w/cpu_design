module pc #(
    parameter COUNT_WIDTH = 8,
    parameter STEP_WIDTH = 4
)(
    input clk,
    input rst,
    input [STEP_WIDTH-1:0] step,
    input op,
    output reg [COUNT_WIDTH-1:0] dout
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            dout <= {COUNT_WIDTH{1'b0}};
        else if (op == 1'b1)
            dout <= dout + {{COUNT_WIDTH-STEP_WIDTH{step[STEP_WIDTH-1]}}, step};
        else
            dout <= dout + {{COUNT_WIDTH-1{1'b0}}, 1'b1};
    end
endmodule
