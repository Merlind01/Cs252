                    ; //print h "Hello World" Template
DATA SEGMENT USE16
    MSG1 DB 'Enter the first number: $'
    MSG2 DB 'Enter the second number: $'
    RESULT_MSG DB 'The sum is: $'
    NUM1 DB ?
    NUM2 DB ?
    RESULT DB ?
DATA ENDS
CODE SEGMENT USE16
    ASSUME CS:CODE,DS:DATA
BEG:
    MOV AX, DATA
    MOV DS, AX

    ; Display the first prompt message
    MOV AH, 09h   ; Function to display string
    MOV DX, OFFSET MSG1
    INT 21h

    ; Get the first number from the user
    MOV AH, 01h   ; Function to read character from standard input, with echo
    INT 21h
    SUB Ax, '00'   ; Convert the character to a number
    MOV NUM1, AL  ; Store the first number

    ; Display a new line for neatness
    MOV AH, 02h   ; Function to display character
    MOV DL, 0Dh   ; Move the carriage return character into DL
    INT 21h
    MOV DL, 0Ah   ; Move the newline character into DL
    INT 21h

    ; Display the second prompt message
    MOV AH, 09h   ; Function to display string
    MOV DX, OFFSET MSG2
    INT 21h

    ; Get the second number from the user
    MOV AH, 01h   ; Function to read character from standard input, with echo
    INT 21h
    SUB AL, '0'   ; Convert the character to a number
    MOV NUM2, AL  ; Store the second number

    ; Add the two numbers
    MOV AL, NUM1  ; Move the first number into AL
    ADD AL, NUM2  ; Add the second number to AL
    MOV RESULT, AL ; Store the result in RESULT

    ; Convert the result to a printable character
    ADD RESULT, '0'  ; Convert the result to a printable character

    ; Display a new line before the result message
    MOV AH, 02h   ; Function to display character
    MOV DL, 0Dh   ; Move the carriage return character into DL
    INT 21h
    MOV DL, 0Ah   ; Move the newline character into DL
    INT 21h

    ; Display the result message
    MOV AH, 09h   ; Function to display string
    MOV DX, OFFSET RESULT_MSG
    INT 21h

    ; Display the result
    MOV AH, 02h   ; Function to display character
    MOV DL, RESULT  ; Move the result into DL
    INT 21h

    ; Exit the program
    MOV AH, 4Ch
    INT 21h

CODE ENDS
END BEG