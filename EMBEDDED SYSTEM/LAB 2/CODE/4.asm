; Load the accumulator (A) with the content of memory address 700H
LDA 700H

; Move the content of the accumulator (A) into the B register
MOV B, A

; Load the accumulator (A) with the content of memory address 701H
LDA 701H

; Add the content of the B register to the accumulator (A)
ADD B

; Store the result from the accumulator (A) into memory address 702H
STA 702H

; Halt the CPU, indicating the end of the program
HLT
