	; Initialize the C register with 00H
	MVI C, 00H

	; Load the accumulator (A) with the content of memory address 800H
	LDA 800H

	; Move the content of the accumulator (A) into the B register
	MOV B, A

	; Load the accumulator (A) with the content of memory address 801H
	LDA 801H

	; Add the content of the B register to the accumulator (A)
	ADD B

	; Jump to label AHEAD if there is no carry flag (JNC - Jump if No Carry)
	JNC AHEAD

	; Increment the value in the C register
	INR C


	; Store the result from the accumulator (A) into memory address 802H
AHEAD:	STA 802H

	; Move the content of the C register into the accumulator (A)
	MOV A, C

	; Store the value from the accumulator (A) into memory address 803H
	STA 803H

	; Halt the CPU, indicating the end of the program
	HLT
