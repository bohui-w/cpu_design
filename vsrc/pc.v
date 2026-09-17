module pc (
    input clk,
    input rst,
    input pc_op,
    input [31:0] pc_next,
    output reg [31:0] pc,
    output [31:0] pc_plus4
);
    assign pc_plus4 = pc + 4;
    always @(posedge clk) begin
        if (rst)
            pc <= 32'd0;
        else if (pc_op)
            pc <= pc_next;
        else
            pc <= pc + 4;
    end
endmodule
