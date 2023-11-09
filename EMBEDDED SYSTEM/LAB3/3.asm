LXI B, 01H  ; Initialize B with 1
LXI D, 32H  ; Initialize D with 50 (32 in hexadecimal)

LOOP: ADD B   ; Add B to the accumulator
      INR B   ; Increment B
      DCR D   ; Decrement D
      JNZ LOOP  ; Jump to LOOP if D is not zero

STA 100H  ; Store the sum in memory location 0x100
HLT
