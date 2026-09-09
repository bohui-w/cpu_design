module scommand_code (
    input [7:0] command,
    input [7:0] add_data,
    input [7:0] io_data,
    input eq_flag,
    output [7:0] wdata,
    output [1:0] wddr,
    output wen,
    output [1:0] rddr1,
    output [1:0] rddr2,
    output [3:0] step,
    output [2:0] io_sel,
    output pc_op,
    output io_en,
);
    wire [1:0] c_mod = command[7:6];
    wire [1:0] c_rd = command[5:4];
    wire [1:0] c_rddr1_s = command[3:2];
    wire [1:0] c_rddr2_imm = command[1:0];
    wire [2:0] c_selio = command[2:0];
    wire c_enrio = command[3];
    wire [3:0] c_step = command[5:2];
    wire [3:0] out_mod;

    Decode #(
        .KEY_LEN(2)
    ) u_decode (
        .in(c_mod),
        .en(1'b1),
        .out(out_mod)
    );
    
    assign pc_op = ~eq_flag & out_mod[3];
    assign io_en = c_enrio & out_mod[1];
    assign io_sel = c_selio;
    assign step = c_step;

    always @(*) begin
        case (c_mod)
            2'b00: begin
                wdata = add_data;
                wddr = c_rd;
                wen = 1'b1;
                rddr1 = c_rddr1_s;
                rddr2 = c_rddr2_imm;
            end
            2'b01: begin
                wdata = io_data;
                wddr = c_rd;
                wen = ~c_enrio;
                rddr1 = c_rd;
                rddr2 = 2'b00;
            end
            2'b10: begin
                wdata = {6'd000000, c_rddr2_imm} << (c_rddr1_s << 1);
                wddr = c_rd;
                wen = 1'b1;
                rddr1 = 2'b00;
                rddr2 = 2'b00;
            end
            2'b11: begin
                wdata = 8'd0;
                wddr = 2'd0;
                wen = 1'b0;
                rddr1 = 2'b00;
                rddr2 = c_rddr2_imm;
            end 
            default: begin
                wdata = 8'd0;
                wddr = 2'd0;
                wen = 1'b0;
                rddr1 = 2'b00;
                rddr2 = 2'b00;
            end
        endcase
    end

endmodule
