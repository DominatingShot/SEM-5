; Load the accumulator (A) with the content of memory address 2050H
LDA 2050H

; Move the content of the accumulator (A) into the B register
MOV B, A

; Load the accumulator (A) with the content of memory address 2051H
LDA 2051H

; Load the C register with the immediate value 00H
MVI C, 00H

; Define a label "NEXT"

	; Compare the content of the B register with the accumulator (A)
NEXT:	CMP B

	; Jump to label "LOOP" if the Carry (C) flag is set (A < B)
	JC LOOP

	; Increment the value in the C register
	INR C

	; Subtract the content of the B register from the accumulator (A)
	SUB B

	; Jump to label "NEXT"
	JMP NEXT

; Define a label "LOOP"

	; Store the result from the accumulator (A) into memory address 2052H
LOOP:	STA 2052H

	; Move the content of the C register into the accumulator (A)
	MOV A, C

	; Store the value from the accumulator (A) into memory address 2053H
	STA 2053H

	; Halt the CPU, indicating the end of the program
	HLT
