; Load the 16-bit value from memory address 8501H into HL
LHLD 8501H    ; Get first 16-bit number in HL

; Exchange the values of DE and HL, saving the first 16-bit number in DE
XCHG               ; Save first 16-bit number in DE

; Load the 16-bit value from memory address 8503H into HL
LHLD 8503H    ; Get second 16-bit number in HL

; Load the accumulator (A) with the lower byte (from register E) of the first number
MOV A,E          ; Get lower byte of the first number

; Add the lower byte (from register L) of the second number to the accumulator (A)
ADD L               ; Add lower byte of the second number

; Store the result in the L register
MOV L,A          ; Store the result in L register

; Load the accumulator (A) with the higher byte (from register D) of the first number
MOV A,D          ; Get higher byte of the first number

; Add the higher byte (from register H) of the second number with the carry (if any)
ADD H               ; Add higher byte of second number with borrow

; Store the result in the H register
MOV H,A          ; Store the result in H register

; Store the 16-bit result in memory locations starting from 8505H
SHLD 8505H     ; Store 16-bit result in memory locations

; Halt the CPU, indicating the end of the program
HLT                    ; Terminate program
