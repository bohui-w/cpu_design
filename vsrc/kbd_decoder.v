module kbd_decoder (
    input clk,
    input rst,
    input [7:0] data,
    input ready,
    output nextdata_n,
    output reg [127:0] ascill
);
    localparam MAKE = 1'b0;
    localparam BREAK = 1'b1;
    reg state;
    reg next_state;

    assign nextdata_n = ~ready;
    
    always @(*) begin
        case (state)
            MAKE: begin
                if (data == 8'hf0 && ready)
                    next_state = BREAK;
                else
                    next_state = state;
            end
            BREAK: begin
                if (ready)
                    next_state = MAKE;
                else
                    next_state = state;
            end
            default:
                next_state = state;
        endcase
    end
    
    always @(posedge clk) begin
        if (rst)
            state <= MAKE;
        else
            state <= next_state;
    end
    
    function [7:0] scan2ascii;
        input [7:0] code;
        begin
            case (code)
                8'h1C: scan2ascii = "a";
                8'h32: scan2ascii = "b";
                8'h21: scan2ascii = "c";
                8'h23: scan2ascii = "d";
                8'h24: scan2ascii = "e";
                8'h2B: scan2ascii = "f";
                8'h34: scan2ascii = "g";
                8'h33: scan2ascii = "h";
                8'h43: scan2ascii = "i";
                8'h3B: scan2ascii = "j";
                8'h42: scan2ascii = "k";
                8'h4B: scan2ascii = "l";
                8'h3A: scan2ascii = "m";
                8'h31: scan2ascii = "n";
                8'h44: scan2ascii = "o";
                8'h4D: scan2ascii = "p";
                8'h15: scan2ascii = "q";
                8'h2D: scan2ascii = "r";
                8'h1B: scan2ascii = "s";
                8'h2C: scan2ascii = "t";
                8'h3C: scan2ascii = "u";
                8'h2A: scan2ascii = "v";
                8'h1D: scan2ascii = "w";
                8'h22: scan2ascii = "x";
                8'h35: scan2ascii = "y";
                8'h1A: scan2ascii = "z";
                default: scan2ascii = 8'h00;
            endcase
        end
    endfunction
    
    always @(posedge clk) begin
        if (rst)
            ascill <= 128'd0;
        else if (data == 8'hf0 || data == 8'he0)
            ascill <= ascill;
        else if (state == MAKE && ready)
            ascill[scan2ascii(data)[6:0]] <= 1'b1;
        else if (state == BREAK && ready)
            ascill[scan2ascii(data)[6:0]] <= 1'b0;
        else
            ascill <= ascill;
    end

    always @(posedge clk) begin
        if (ready) begin
            $display("data=0x%02X state=%d ascill[97]=%d nextdata_n=%d",
         data, state, ascill[97], nextdata_n);
        end
    end

endmodule
