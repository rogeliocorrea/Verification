`default_nettype none

interface seq_if (input bit clk);
    logic rst_n;
    logic in;
    logic vld;
    logic found;
endinterface

module sequence_detector
(
    seq_if vif
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
    vif.found = 'b0;

    case(cur_state)
        START:
        begin
            if(vif.vld)
            begin
                if(vif.in == 0) next_state = START;
                else next_state = FIRST;
            end
            else next_state = cur_state;
        end
        FIRST:
        begin
            if(vif.vld)
            begin
                if(vif.in == 0) next_state = START;
                else next_state = SECOND;        
            end
            else next_state = cur_state;
        end
        SECOND:
        begin
            if(vif.vld)
            begin
                if(vif.in == 0) next_state = THIRD;
                else next_state = FIRST;    
            end       
            else next_state = cur_state;
        end

        THIRD:
        begin
            if(vif.vld)
            begin
                if(vif.in == 0) next_state = START;
                else next_state = FOUND;  
            end      
            else next_state = cur_state;    
        end
        
        FOUND:
        begin
            vif.found = 'b1;
            if(vif.vld)
            begin
                if(vif.in == 0) next_state = START;
                else next_state = FIRST;    
            end
            else next_state = cur_state;
        end

        default: next_state = START;
    endcase
end

endmodule