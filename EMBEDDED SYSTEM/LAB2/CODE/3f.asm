; Load the dividend from memory address 2050H into the accumulator (A)
LDA 2050H

; Move the dividend from the accumulator (A) to the B register
MOV B, A

; Load the divisor from memory address 2051H into the accumulator (A)
LDA 2051H

; Initialize the C register to 00H to store the quotient
MVI C, 00H

; Define a label "NEXT" for the loop
NEXT: CMP B ; Compare the contents of the B register with the accumulator (A)

; If A < B, jump to the label "LOOP"
JC LOOP

; Increment the C register to calculate the quotient
INR C

; Subtract the contents of the B register from the accumulator (A)
SUB B

; Jump back to the label "NEXT" to continue the loop
JMP NEXT

; Define a label "LOOP" for storing the remainder


; Store the remainder in memory address 2052H
LOOP: STA 2052H

; Move the value from the C register (quotient) to the accumulator (A)
MOV A, C

; Store the quotient in memory address 2053H
STA 2053H

; Halt the CPU, indicating the end of the program
HLT
