module vmem(
    input [9:0] h_addr,
    input [9:0] v_addr,
    input [9:0] x_addr,
    input [9:0] y_addr,
    output [23:0] vga_data
);
    parameter IMG_W = 100;
    parameter IMG_H = 100;
    parameter BG_COLOR = 24'h000000;

    reg [23:0] mem [0:IMG_W*IMG_H-1];

    initial $readmemh("picture.hex", mem);

    wire in_picture = (h_addr < (IMG_W + x_addr)) && (h_addr >= x_addr) 
    && (v_addr < (IMG_H + y_addr)) && (v_addr >= y_addr);
    wire [13:0] v_rel = {4'b0, v_addr} - {4'b0, y_addr};
    wire [13:0] h_rel = {4'b0, h_addr} - {4'b0, x_addr};
    wire [13:0] addr = v_rel * IMG_W + h_rel;

    assign vga_data = in_picture ? mem[addr] : BG_COLOR;

endmodule
