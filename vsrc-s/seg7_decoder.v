module seg7_decoder(
    input [3:0] din,
    output reg [6:0] seg
);

always @(*) begin
    case(din)
        4'h0: seg = 7'b0000001;
        4'h1: seg = 7'b1111001;
        4'h2: seg = 7'b0010010;
        4'h3: seg = 7'b0000110;
        4'h4: seg = 7'b1001100;
        4'h5: seg = 7'b0100100;
        4'h6: seg = 7'b0100000;
        4'h7: seg = 7'b0001111;
        4'h8: seg = 7'b0000000;
        4'h9: seg = 7'b0000100;
        default: seg = 7'b1111111;
    endcase
end

endmodule
