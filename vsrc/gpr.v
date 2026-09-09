module gpr #(
    parameter DDR_WIDTH = 2,
    parameter WIDTH = 8
)(
    input clk,
    input rst,
    input wen,
    input [DDR_WIDTH-1:0] wddr,
    input [DDR_WIDTH-1:0] rddr1,
    input [DDR_WIDTH-1:0] rddr2,
    input [WIDTH-1:0] Data,
    output [WIDTH-1:0] Q1,
    output [WIDTH-1:0] Q2
);
    wire [((1<<DDR_WIDTH)*WIDTH)-1:0] mid_Q;
    wire [(1<<DDR_WIDTH)-1:0] mid_en;

    selector #(
        .KEY_LEN(DDR_WIDTH),
        .WIDTH(WIDTH)
    ) u_selector1 (
        .D(mid_Q),
        .sel(rddr1),
        .Q(Q1)
    );

    selector #(
        .KEY_LEN(DDR_WIDTH),
        .WIDTH(WIDTH)
    ) u_selector2 (
        .D(mid_Q),
        .sel(rddr2),
        .Q(Q2)
    );

    Decode #(
        .KEY_LEN(DDR_WIDTH)
    ) u_Decode (
        .in(wddr),
        .en(wen),
        .out(mid_en)
    );

    genvar i;
    generate
        for (i = 0; i < (1<<DDR_WIDTH); i = i + 1) begin : reg_gen
            Reg #(
                .WIDTH(WIDTH),
                .RESET_VAL(0)
            ) u_reg (
                .clk(clk),
                .rst(rst),
                .din(Data),
                .dout(mid_Q[WIDTH*i +: WIDTH]),
                .wen(mid_en[i])
            );
        end
    endgenerate

endmodule
