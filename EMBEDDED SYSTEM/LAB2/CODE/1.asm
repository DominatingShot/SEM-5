; Load the accumulator (A) with the content of memory address 5100H
LDA 5100H

; Complement the contents of the accumulator (A)
CMA

; Store the complemented value from the accumulator (A) into memory address 510H
STA 510H

; Halt the CPU, indicating the end of the program
HLT
