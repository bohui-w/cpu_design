module wbu (
    input [31:0] lsu_rdata,
    input [31:0] imm,
    input [31:0] exu_d,
    input [31:0] pc_plus4,
    input [1:0] wbu_op,
    input wbu_w_en,
    output reg [31:0] gpr_data,
    output gpr_w_en,
    output [31:0] ifu_next
);
    assign gpr_w_en = wbu_w_en;
    assign ifu_next = exu_d & ~32'd1;
    always @(*) begin
        case (wbu_op)
            2'b00: gpr_data = lsu_rdata;
            2'b01: gpr_data = imm;
            2'b10: gpr_data = exu_d;
            2'b11: gpr_data = pc_plus4;
            default: gpr_data = 32'd0;
        endcase
    end
endmodule
