module vmem(
    input  [9:0] h_addr,
    input  [9:0] v_addr,
    output [23:0] vga_data
);
    parameter IMG_W = 640;
    parameter IMG_H = 404;
    parameter BG_COLOR = 24'h000000;

    reg [23:0] mem [0:IMG_W*IMG_H-1];

    initial $readmemh("picture.hex", mem);

    wire in_picture = (h_addr < IMG_W) && (v_addr < IMG_H);
    wire [17:0] addr = v_addr * IMG_W + {8'b0, h_addr};
    // wire [17:0] addr = h_addr * IMG_H + {8'b0, v_addr};

    assign vga_data = in_picture ? mem[addr] : BG_COLOR;

endmodule
