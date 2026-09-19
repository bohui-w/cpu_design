module inst_decoder (
    input [31:0] inst,

    output reg pc_op,
    output reg [31:0] pc_next,
    input [31:0] pc,
    input [31:0] pc_plus4,

    output reg [31:0] a,
    output reg [31:0] b,
    output reg [2:0] op,
    input [31:0] D,

    output reg w_en,
    output reg [4:0] waddr,
    output reg [4:0] raddr1,
    output reg [4:0] raddr2,
    output reg [31:0] wdata,
    input [31:0] rdata1,
    input [31:0] rdata2,

    output reg mem_w_en,
    output reg mem_op,
    output reg [31:0] mem_waddr,
    output reg [31:0] mem_wdata32,
    output reg [7:0] mem_wdata8,
    output reg [31:0] mem_raddr,
    input [31:0] mem_rdata32,
    input [7:0] mem_rdata8
);
    assign is_addi = (inst[6:0] == 7'b0010011) && (inst[14:12] == 3'b000);
    assign is_jalr = (inst[6:0] == 7'b1100111) && (inst[14:12] == 3'b000);
    assign is_add  = (inst[6:0] == 7'b0110011) && (inst[14:12] == 3'b000) && (inst[31:25] == 7'b0000000);
    assign is_lui  = (inst[6:0] == 7'b0110111);
    assign is_lw   = (inst[6:0] == 7'b0000011) && (inst[14:12] == 3'b010);
    assign is_lbu  = (inst[6:0] == 7'b0000011) && (inst[14:12] == 3'b100);
    assign is_sw   = (inst[6:0] == 7'b0100011) && (inst[14:12] == 3'b010);
    assign is_sb   = (inst[6:0] == 7'b0100011) && (inst[14:12] == 3'b000);

    always @(*) begin
        pc_op = 1'd0;
        pc_next = 32'd0;
        a = 32'd0;
        b = 32'd0;
        op = 3'd0;
        w_en = 1'd0;
        waddr = 5'd0;
        raddr1 = 5'd0;
        raddr2 = 5'd0;
        wdata = 32'd0;
        mem_w_en = 1'd0;
        mem_op = 1'd0;
        mem_waddr = 32'd0;
        mem_wdata32 = 32'd0;
        mem_wdata8 = 8'd0;
        mem_raddr = 32'd0;
        if (is_addi) begin
            w_en = 1'b1;
            waddr = inst[11:7];
            raddr1 = inst[19:15];
            a = rdata1;
            b = {{20{inst[31]}}, inst[31:20]};
            op = 3'b000;
            wdata = D;
        end else if (is_jalr) begin
            pc_op = 1'b1;
            raddr1 = inst[19:15];
            pc_next = (rdata1 + inst[31:20]) & ~32'd1;
            wdata = pc_plus4;
            w_en = 1'b1;
            waddr = inst[11:7];
        end else if (is_add) begin
            raddr1 = inst[19:15];
            raddr2 = inst[24:20];
            op = 3'b000;
            a = rdata1;
            b = rdata2;
            w_en = 1'b1;
            waddr = inst[11:7];
            wdata = D;
        end else if (is_lui) begin
            w_en = 1'b1;
            waddr = inst[11:7];
            wdata = {inst[31:12], 12'd0};
        end else if (is_lw) begin
            raddr1 = inst[19:15];
            a = rdata1;
            b = {{20{inst[31]}}, inst[31:20]};
            mem_raddr = D;
            w_en = 1'b1;
            waddr = inst[11:7];
            wdata = mem_rdata32;
        end else if (is_lbu) begin
            raddr1 = inst[19:15];
            a = rdata1;
            b = {{20{inst[31]}}, inst[31:20]};
            mem_raddr = D;
            w_en = 1'b1;
            waddr = inst[11:7];
            wdata = {24'd0, mem_rdata8};
        end else if (is_sw) begin
            raddr1 = inst[19:15];
            a = rdata1;
            b = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            raddr2 = inst[24:20];
            mem_w_en = 1'b1;
            mem_op = 1'b0;
            mem_waddr = D;
            mem_wdata32 = rdata2;
        end else if (is_sb) begin
            raddr1 = inst[19:15];
            a = rdata1;
            b = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            raddr2 = inst[24:20];
            mem_w_en = 1'b1;
            mem_op = 1'b1;
            mem_waddr = D;
            mem_wdata8 = rdata2[7:0];
        end
    end
    
endmodule
