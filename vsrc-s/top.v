module top (
    input clk,
    input rst,
    output hsync,
    output vsync,
    output valid,
    output [7:0] vga_r,
    output [7:0] vga_g,
    output [7:0] vga_b
);
    wire pclk;
    wire [9:0] h_addr, v_addr;
    wire [23:0] vga_data;
    wire [9:0] x_addr;
    wire [9:0] y_addr;

    vga_ctrl u_vga_ctrl (
        .pclk(clk),
        .reset(rst),
        .vga_data(vga_data),
        .h_addr(h_addr),
        .v_addr(v_addr),
        .hsync(hsync),
        .vsync(vsync),
        .valid(valid),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b)
    );

    vmem u_vmem (
        .h_addr(h_addr),
        .v_addr(v_addr),
        .x_addr(x_addr),
        .y_addr(y_addr),
        .vga_data(vga_data)
    );

    image_control #(
        .COUNT(100000)
    ) u_image_control (
        .clk(clk),
        .rst(rst),
        .x_addr(x_addr),
        .y_addr(y_addr)
    );

    // clkgen #(
    //     .clk_freq(25000000)
    // ) u_clkgen (
    //     .clkin(clk),
    //     .rst(rst),
    //     .clken(1'b1),
    //     .clkout(pclk)
    // );

endmodule
