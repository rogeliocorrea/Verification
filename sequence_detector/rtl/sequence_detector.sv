`default_nettype none

module sequence_detector
(
    input wire clk,
    input wire rst_n,
    input logic sequence,
    output logic found
);

//This will detect the sequence 1101, overlapping

typedef enum {
    START,
    FIRST,
    SECOND,
    THIRD,
    FOUND
} state_t;

state_t cur_state, next_state;

always_ff @(posedge clk, negedge rst_n)
begin
    if(!rst_n)
    begin
        cur_state <= 'b0;
        next_state <= 'b0;
    end
    else
    begin
        cur_state <= next_state;
    end
end

always_comb 
begin
    case(cur_state)
        FIRST:
        begin
            
        end

        SECOND:
        begin
            
        end

        THIRD:
        begin
            
        end
        
        FOUND:
        begin
            
        end
    endcase
end

endmodule