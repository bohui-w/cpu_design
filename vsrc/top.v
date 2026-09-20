module top (
    input clk,
    input rst,

    output [31:0] inst_addr,
    output M_w_en,
    output M_op,
    output [31:0] M_addr,
    output [31:0] M_wdata32,
    output [7:0] M_wdata8,
    input [31:0] M_rdata32,
    input [7:0] M_rdata8,
    input [31:0] inst,

    output is_ebreak
);
    wire [31:0] pc_plus4;
    wire [4:0]  rd;
    wire [4:0]  rs1;
    wire [4:0]  rs2;
    wire [31:0] imm;
    wire [2:0]  exu_op;
    wire        exu_data_sel;
    wire        w_en;
    wire        pc_op;
    wire        mem_op;
    wire        mem_w_en;
    wire [31:0] rdata1;
    wire [31:0] rdata2;
    wire [31:0] exu_d;
    wire [31:0] lsu_rdata;
    wire        gpr_w_en;
    wire [31:0] pc_next;
    wire [31:0] gpr_data;
    wire [1:0]  wbu_op;

    ifu u_ifu (
        .clk      (clk),
        .rst      (rst),
        .ifu_op   (pc_op),
        .pc_next  (pc_next),
        .pc       (inst_addr),
        .pc_plus4 (pc_plus4)
    );

    idu u_idu (
        .inst         (inst),
        .rd           (rd),
        .rs1          (rs1),
        .rs2          (rs2),
        .imm          (imm),
        .exu_op       (exu_op),
        .exu_data_sel (exu_data_sel),
        .w_en         (w_en),
        .pc_op        (pc_op),
        .mem_op       (mem_op),
        .mem_w_en     (mem_w_en),
        .wbu_op       (wbu_op),
        .is_ebreak    (is_ebreak)
    );

    gpr u_gpr (
        .clk    (clk),
        .rst    (rst),
        .w_en   (gpr_w_en),
        .waddr  (rd),
        .raddr1 (rs1),
        .raddr2 (rs2),
        .wdata  (gpr_data),
        .rdata1 (rdata1),
        .rdata2 (rdata2)
    );

    exu u_exu (
        .rs1_data    (rdata1),
        .rs2_data    (rdata2),
        .imm         (imm),
        .exu_op      (exu_op),
        .exu_data_sel(exu_data_sel),
        .exu_d       (exu_d)
    );

    lsu u_lsu (
        .lsu_wdata  (rdata2),
        .lsu_addr   (exu_d),
        .lsu_op     (mem_op),
        .lsu_w_en   (mem_w_en),
        .mem_w_en   (M_w_en),
        .mem_op     (M_op),
        .mem_addr   (M_addr),
        .mem_wdata32(M_wdata32),
        .mem_wdata8 (M_wdata8),
        .mem_rdata32(M_rdata32),
        .mem_rdata8 (M_rdata8),
        .lsu_rdata  (lsu_rdata)
    );

    wbu u_wbu (
        .lsu_rdata (lsu_rdata),
        .imm       (imm),
        .exu_d     (exu_d),
        .pc_plus4  (pc_plus4),
        .wbu_op    (wbu_op),
        .wbu_w_en  (w_en),
        .gpr_data  (gpr_data),
        .gpr_w_en  (gpr_w_en),
        .ifu_next  (pc_next)
    );
    
endmodule
