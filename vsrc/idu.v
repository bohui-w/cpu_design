module idu (
    input [31:0] inst,

    output reg [4:0] rd,
    output reg [4:0] rs1,
    output reg [4:0] rs2,
    output reg [31:0] imm,

    output reg [2:0] exu_op,
    output reg exu_data_sel,
    output reg w_en,
    output reg pc_op,
    output reg mem_op,
    output reg mem_w_en,
    output reg [1:0] wbu_op,
    output is_ebreak
);
    wire is_addi, is_jalr, is_add, is_lui, is_lw, is_lbu, is_sw, is_sb;
    assign is_addi = (inst[6:0] == 7'b0010011) && (inst[14:12] == 3'b000);
    assign is_jalr = (inst[6:0] == 7'b1100111) && (inst[14:12] == 3'b000);
    assign is_add  = (inst[6:0] == 7'b0110011) && (inst[14:12] == 3'b000) && (inst[31:25] == 7'b0000000);
    assign is_lui  = (inst[6:0] == 7'b0110111);
    assign is_lw   = (inst[6:0] == 7'b0000011) && (inst[14:12] == 3'b010);
    assign is_lbu  = (inst[6:0] == 7'b0000011) && (inst[14:12] == 3'b100);
    assign is_sw   = (inst[6:0] == 7'b0100011) && (inst[14:12] == 3'b010);
    assign is_sb   = (inst[6:0] == 7'b0100011) && (inst[14:12] == 3'b000);
    assign is_ebreak = (inst == 32'h00100073);

    always @(*) begin
        rd = 5'd0;
        rs1 = 5'd0;
        rs2 = 5'd0;
        imm = 32'd0;
        exu_op = 3'd0;
        w_en = 1'd0;
        pc_op = 1'd0;
        mem_op = 1'd0;
        mem_w_en = 1'd0;
        exu_data_sel = 1'd0;
        wbu_op = 2'b00;
        if (is_addi) begin
            w_en = 1'b1;
            rd = inst[11:7];
            rs1 = inst[19:15];
            imm = {{20{inst[31]}}, inst[31:20]};
            exu_op = 3'b000;
            exu_data_sel = 1'b0;
            wbu_op = 2'b10;
        end else if (is_jalr) begin
            pc_op = 1'b1;
            w_en = 1'b1;
            rd = inst[11:7];
            rs1 = inst[19:15];
            imm = {{20{inst[31]}}, inst[31:20]};
            exu_op = 3'b000;
            exu_data_sel = 1'b0;
            wbu_op = 2'b11;
        end else if(is_add) begin
            w_en = 1'b1;
            rd = inst[11:7];
            rs1 = inst[19:15];
            rs2 = inst[24:20];
            exu_op = 3'b000;
            exu_data_sel = 1'b1;
            wbu_op = 2'b10;
        end else if (is_lui) begin
            w_en = 1'b1;
            rd = inst[11:7];
            imm = {inst[31:12], 12'd0};
            wbu_op = 2'b01;
        end else if (is_lw) begin
            w_en = 1'b1;
            rd = inst[11:7];
            rs1 = inst[19:15];
            imm = {{20{inst[31]}}, inst[31:20]};
            mem_op = 1'b1;
            exu_op = 3'b000;
            exu_data_sel = 1'b0;
            wbu_op = 2'b00;
        end else if (is_lbu) begin
            w_en = 1'b1;
            rd = inst[11:7];
            rs1 = inst[19:15];
            imm = {{20{inst[31]}}, inst[31:20]};
            mem_op = 1'b0;
            exu_op = 3'b000;
            exu_data_sel = 1'b0;
            wbu_op = 2'b00;
        end else if (is_sw) begin
            rs1 = inst[19:15];
            rs2 = inst[24:20];
            imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            mem_op = 1'b1;
            mem_w_en = 1'b1;
            exu_op = 3'd000;
            exu_data_sel = 1'b0;
        end else if (is_sb) begin
            rs1 = inst[19:15];
            rs2 = inst[24:20];
            imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            mem_op = 1'b0;
            mem_w_en = 1'b1;
            exu_op = 3'd000;
            exu_data_sel = 1'b0;
        end else begin
            ;
        end
    end
endmodule
