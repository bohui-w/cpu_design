module exu (
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    input [2:0] exu_op,
    input exu_data_sel,
    output [31:0] exu_d
);
    alu #(
        .WIDTH(32)
    ) u_alu (
        .a   (rs1_data),
        .b   (exu_data_sel ? rs2_data : imm),
        .op  (exu_op),
        .D   (exu_d),
        /* verilator lint_off PINCONNECTEMPTY */
        .cout()
        /* verilator lint_on PINCONNECTEMPTY */
    );
endmodule
