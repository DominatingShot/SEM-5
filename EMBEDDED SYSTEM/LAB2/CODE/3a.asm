; Define a label "START"
START: 
       ; Load H and L registers with the 16-bit value 2050H
       LXI H, 2050H

       ; Load D and E registers with the 16-bit value 2070H
       LXI D, 2070H

       ; Load B register with the value 0AH (10 in decimal)
       MVI B, 0AH

; Define a label "NEXT"
 
       ; Load the accumulator (A) with the byte at the memory address pointed to by HL
NEXT:  MOV A, M

       ; Store the value in the accumulator (A) into the memory location pointed to by DE
       STAX D

       ; Increment the values in HL and DE registers
       INX H
       INX D

       ; Decrement the value in the B register
       DCR B

       ; Jump to the "NEXT" label if the Zero (Z) flag is not set (B is not zero)
       JNZ NEXT

       ; Halt the CPU, indicating the end of the program
       HLT
