`default_nettype none

module in_detector
(
    input wire clk,
    input wire rst_n,
    input logic in,
    output logic found
);

//This will detect the sequence 1101, overlapping

typedef enum logic [2:0]{
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
        cur_state <= START;
    end
    else
    begin
        cur_state <= next_state;
    end
end

always_comb 
begin
    next_state = cur_state;
    found = 'b0;

    case(cur_state)
        START:
        begin
            if(in == 0) next_state = START;
            else next_state = FIRST;
        end
        FIRST:
        begin
            if(in == 0) next_state = START;
            else next_state = SECOND;        
        end
        SECOND:
        begin
            if(in == 0) next_state = THIRD;
            else next_state = FIRST;           
        end

        THIRD:
        begin
            if(in == 0) next_state = START;
            else next_state = FOUND;            
        end
        
        FOUND:
        begin
            if(in == 0) next_state = START;
            else next_state = FIRST;            
        end

        default: next_state = START;
    endcase
end

endmodule