module ifu (
    input clk,
    input rst,
    input ifu_op,
    input [31:0] ifu_pc_next,
    input [31:0] ifu_rdata,
    input ifu_ls,
    output [31:0] ifu_raddr,
    output reg [31:0] ifu_pc,
    output [31:0] ifu_pc_plus4,
    output [31:0] ifu_inst,
    output ifu_valid,
    output ifu_done
);
    localparam IDEL = 2'b00;
    localparam WAIT = 2'b01;
    localparam LS_WAIT = 2'b10;
    reg [1:0] state, next_state;

    assign ifu_pc_plus4 = ifu_pc + 4;
    assign ifu_raddr = ifu_pc;
    assign ifu_valid = (state == WAIT) || (state == LS_WAIT);
    assign ifu_done  = (state == WAIT && !ifu_ls) || (state == LS_WAIT);
    assign ifu_inst = ifu_rdata;

    always @(*) begin
        case (state)
            IDEL: begin
                next_state = WAIT;
            end
            WAIT: begin
                if(ifu_ls) begin
                    next_state = LS_WAIT;
                end else begin
                    next_state = IDEL;
                end
            end
            LS_WAIT: begin
                next_state = IDEL;
            end
            default: begin
                next_state = state;
            end
        endcase
    end

    always @(posedge clk) begin
        if (rst) begin
            state <= IDEL;
        end else begin
            state <= next_state;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            ifu_pc <= 32'h80000000;
        end else if (ifu_op && state == WAIT) begin
            ifu_pc <= ifu_pc_next;
        end else if ((state == WAIT && ~ifu_ls) || (state == LS_WAIT)) begin
            ifu_pc <= ifu_pc +  32'd4;
        end else begin
            ifu_pc <= ifu_pc;
        end
    end
endmodule
