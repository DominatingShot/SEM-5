; Load the accumulator (A) with the content of memory address 5100H
LDA 5100H

; Complement the contents of the accumulator (A)
CMA

; Increment the value in the accumulator (A) by 1
INR A

; Store the incremented value from the accumulator (A) into memory address 5101H
STA 5101H

; Halt the CPU, indicating the end of the program
HLT
