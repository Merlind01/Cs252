//Basics of Assembly Language 

    //NASM 

// Integer contants 
    // Optional leader + or - sign 
    // Binary, decimal, hexidecimal, or octal digits 
    // Common radix characters:
        // h - hexidecimal 
        // b - binary 

// Integer expressions 

// Character and string constants 
    // Enclose character in single or double quotes 
    // Enclose string in single or double quotes 
    // Embedded quotes:
        // 'Say "Goodnight," Gracie'

// Reserved words and identififers 
    // Identifiers 
        // 1-247 charcters, including digits
        // not case sensitive 

// Directives 
    // Commands that are reconginzed 
        // Not parrt of the intel instruction set 

// Instructions 
    // Assembled into machine code by assembler 

// Labels 
    // Act as place markers 
    // Every label has to be unqiue within the program
    // Code-Label 
        // can tell where to jump to

// Mnemonics and Operands 
    // Instruction Mnemonics 
        // Memory aid 
        // Ex: MOV, ADD, SUB, MUL, INC, DEC
            // MOV Ax, 3
            // MOV Bx, Ax
                // 3 is in both Ax and Bx
    // Opperands 
        // Constant 
        // Constant expression
        // Register
        // Memory (data label)

// Comments 
    //  begins with semicolon (;)

// Example adding and subtracting integers 
    // mov eax, 10000h              eax = 10000h
    // add eax, 40000h              eax = 50000h
    // sub eax, 20000h              eax = 30000h
    // call DumpRegs                display registers 
    // exit 
    // main ENDP    (similar to return 0)
    // END main

// Program Template 
// TITLE program template 
    // Program Description:
    // Author:
    // Creation Date:
    // Revisions:
    // Date:
                    // Modified by:
    // Include Irvine32.inc 
    //
    //

// Assembling, linking, and running program 
    // ASsemble-Link-Exectute cycle 
    // Listing File
    // Map File

// Listing File 
    // Source code 
    // Addresses 
    // Symbols (variables, constants)
    // Object code (machine language)
    // Segment names 

// Map File 
    // Starting and ending address 
    // Size 
    // Segment type
