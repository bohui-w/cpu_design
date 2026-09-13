module top(
    input        clk,
    input        rst,
    input        PS2_CLK,
    input        PS2_DAT,
    output [15:0] led
);
    wire [7:0]  kbd_data;
    wire        ready;
    wire        nextdata_n;
    wire [127:0] ascill;

    ps2_keyboard u_kbd (
        .clk       (clk),
        .clrn      (~rst),
        .ps2_clk   (PS2_CLK),
        .ps2_data  (PS2_DAT),
        .data      (kbd_data),
        .ready     (ready),
        .overflow  (),
        .nextdata_n(nextdata_n)
    );

    kbd_decoder u_decoder (
        .clk      (clk),
        .rst      (rst),
        .data     (kbd_data),
        .ready    (ready),
        .nextdata_n(nextdata_n),
        .ascill   (ascill)
    );
    assign led = ascill[112:97];

endmodule
