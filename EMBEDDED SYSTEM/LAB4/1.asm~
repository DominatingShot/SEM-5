LXI B,0AH        ; Load BC register pair with the value 0AH
LXI H,4000H      ; Load HL register pair with the memory address 4000H
MVI A,00H        ; Initialize register A with 00H
LABEL:  ADD M     ; Add the value at the memory location pointed by HL to A
    INX H        ; Increment HL to point to the next memory location
    DCR C        ; Decrement BC
    JZ STOP      ; Jump to STOP if BC becomes zero
    JNZ LABEL    ; Jump back to LABEL if BC is not zero

STOP:   STA 4501H  ; Store the accumulated sum at memory location 4501H
	LDA 4500H
    	ANI 01       ; Perform a logical AND operation with 01
    	JZ EVEN      ; Jump to EVEN if the result is zero
    	LXI H, 4501H   ; Load HL register pair with the memory address 4501H
	MOV A, M       ; Move the content of the memory location pointed by HL to register A
	MVI D,00H
	MVI B, 0AH     ; Load register B with the divisor, 10

	DIVIDE_LOOP:  	CMP B       ; Compare A and B
    			JC DIVIDE_END; Jump to DIVIDE_END if there is a carry (A < B)
    			SUB B       ; Subtract B from A
    			INR D       ; Increment DE to keep track of the quotient
    			JMP DIVIDE_LOOP; Jump back to DIVIDE_LOOP

	DIVIDE_END:   	MOV A, D    ; Move the quotient to register A
    			STA 4503H  ; Store the result of the division at memory location 4503H
    			HLT         ; Halt the microprocessor		

EVEN:   LDA 4501H  ; Load the content of memory location 4501H to A
    	STA 4502H   ; Store the content of A at memory location 4502H
    	HLT          ; Halt the microprocessor
		