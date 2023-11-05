; Load the value from memory address 2050H into the accumulator (A)
LDA 2050H

; Move the value from the accumulator (A) to the B register
MOV B, A

; Load another value from memory address 2051H into the accumulator (A)
LDA 2051H

; Add the contents of B and A and store the result in memory address 2052H
ADD B
STA 2052H

; Load the value from memory address 2053H into the accumulator (A)
LDA 2053H

; Move the value from the accumulator (A) to the B register
MOV B, A

; Load the result of the previous addition from memory address 2052H into the accumulator (A)
LDA 2052H

; Subtract the contents of B from A and store the result in memory address 2054H
SUB B
STA 2054H

; Halt the CPU, indicating the end of the program
HLT
