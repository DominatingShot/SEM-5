; Load the first 16-bit number into DE
LHLD 8501H    ; Load DE with the first 16-bit number

; Exchange the values of DE and HL, saving the first 16-bit number in DE
XCHG          ; Save first 16-bit number in DE

; Load the second 16-bit number into HL
LHLD 8503H    ; Load HL with the second 16-bit number

; Move the lower byte (E) of the first number into the accumulator
MOV A, E

; Subtract the lower byte (L) of the second number from the accumulator
SUB L

; Move the result back to the lower byte of HL
MOV L, A

; Move the higher byte (D) of the first number into the accumulator
MOV A, D

; Subtract the higher byte (H) of the second number with borrow
SBB H

; Move the result back to the higher byte of HL
MOV H, A

; Store the 16-bit result in memory at address 8505H
SHLD 8505H

; Halt the CPU, indicating the end of the program
HLT
