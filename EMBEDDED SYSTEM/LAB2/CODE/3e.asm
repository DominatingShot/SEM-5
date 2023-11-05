; Load the accumulator (A) with the immediate value 5
MVI A, 5

; Move the content of the accumulator (A) into the B register
MOV B, A

; Load the C register with the immediate value 2
MVI C, 2

; Load the accumulator (A) with the immediate value 00H
MVI A, 00H

; Define a label "LABEL1"

	; Add the content of the B register to the accumulator (A)
LABEL1: ADD B

	; Decrement the value in the C register
	DCR C

	; Jump to label "LABEL1" if the Zero (Z) flag is not set (C is not zero)
	JNZ LABEL1

	; Store the result from the accumulator (A) into memory address 803H
	STA 803H

	; Halt the CPU, indicating the end of the program
	HLT
