; Initialize the H-L register pair to point to the starting memory location (2000H)
LXI H, 2000H
MVI A, 00H ; Initialize the accumulator (result) to 0
MVI C, 0AH ; Count of 10 numbers
ADD_LOOP:   MOV B, M   
    ADD B ; Add the value in B to the accumulator (result)
    INX H ; Increment H-L to point to the next memory location
    DCR C ; Decrement the counter
    JNZ ADD_LOOP ; Jump back to the loop if the counter is not zero
    STA 200AH

HLT
