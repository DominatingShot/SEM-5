; Load the accumulator (A) with the content of memory address 300H
LDA 300H

; Move the content of the accumulator (A) into the B register
MOV B, A

; Load the accumulator (A) with the content of memory address 301H
LDA 301H

; Subtract the content of the B register from the accumulator (A)
SUB B

; Store the result from the accumulator (A) into memory address 302H
STA 302H

; Halt the CPU, indicating the end of the program
HLT
