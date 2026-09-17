module io_bank (
    input clk,
    input rst,
    input en,
    input [2:0] sel,
    output [7:0] dout,
    input [7:0] din,
    output [((1<<3)*8)-1:0] led_bar,
    input [((1<<3)*8)-1:0] io_in
);
    wire [7:0] select;
    wire [((1<<3)*8)-1:0] io_out;

    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : io_gen
            io u_io (
                .clk    (clk),
                .rst    (rst),
                .iow_in (din),
                .ior_in (io_in[8*i +: 8]),
                .iow_out(led_bar[8*i +: 8]),
                .ior_out(io_out[8*i +: 8]),
                .io_en  (en),
                .io_sel (select[i])
            );
        end
    endgenerate

    Decode #(
        .KEY_LEN(3)
    ) u_decode (
        .in (sel),
        .en (1'b1),
        .out(select)
    );

    selector #(
        .KEY_LEN(3),
        .WIDTH(8)
    ) u_selector (
        .D  (io_out),
        .sel(sel),
        .Q  (dout)
    );
    
endmodule
