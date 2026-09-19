module lsu (
    input [31:0] lsu_wdata,  // rs2
    input [31:0] lsu_addr,  // exu->D
    input lsu_op,
    input lsu_w_en,

    output mem_w_en,
    output mem_op,
    output [31:0] mem_addr,
    output [31:0] mem_wdata32,
    output [7:0] mem_wdata8,

    input [31:0] mem_rdata32,
    input [7:0] mem_rdata8,

    output [31:0] lsu_rdata
);
    assign mem_w_en = lsu_w_en;
    assign mem_op = lsu_op;
    assign mem_addr = lsu_addr;
    assign mem_wdata32 = lsu_wdata;
    assign mem_wdata8 = lsu_wdata[7:0];
    assign lsu_rdata = lsu_op ? mem_rdata32 : {24'd0, mem_rdata8};
    
endmodule
