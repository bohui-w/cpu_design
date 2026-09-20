module ifu (
    input clk,
    input rst,
    input ifu_op,
    input [31:0] pc_next,
    output reg [31:0] pc,
    output [31:0] pc_plus4
);
    assign pc_plus4 = pc + 4;
    always @(posedge clk) begin
        if (rst)
            pc <= 32'h80000000;
        else if (ifu_op)
            pc <= pc_next;
        else
            pc <= pc + 4;
    end
endmodule
