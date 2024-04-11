// Chapter Overview 
    // Boolean and Comparison Instruction
    // Conditional Jumps
    // Conditional Loop
    // Conditional Structs
    // Application: finite-state machines 
    // Conditional Control Flow Directives

    // CPU status flags 
    // AND instruction

//Staus Flags Review 
    // 0 flag is set when result of math is 0
    // Carry flag is set wen it generates something too large or small
    // Sign flag is set when operand is negative and it is clear if the desination operand is positive
    // Overflow flag is set when a value is to large for the variable
    // Pariaty flag (basic error check of a block of code)
        // Even Pariaty flag is set when generates an even number of 1 bits in the low byte of the destination opperand
    // Aixilliary Carry flag is set when an operation produces a carry out from bit 3 and bit 4

// And Instruction
    //preforms a Boolean AND Operation between each pair of matching bits of two operands 
            // Comparing bits then ADDing them

// Or 
    //Similar to AND
// XOR
    //Similar to AND 
        //XOR is a useful way to toggle (invert) the bits in an operand

// Union
    // {1,2,3,4} {3,4,5,6} 
    // Union would be 1-6 
    // Intersection would be 3 and 4
    // Set Union
        // mov eax,setX
        // or eax,setY

// Applications 
    // Task: convert the characters in AL to upper case 
    // Solution: use the AND instruction to clear bit 5

    // Task: Jump to a label if an integer is even
    // Solution: AND the lowest bit with a 1 if the result is Zero the number is even
        // mov ax,wordVal
        // and ax,1 
        // jz EvenValue         //jump if flag is zero
            //jnz IsNotZero     //jump if not zero

//CMP instruction
    //Comapares two values and if there the same (Will set the flag)
        //mov al,5
        //cmp al,5              //Zero flag set

        // mov al,4
        // cmp al,5             //Carry flag set

// Conditional Jumps
    //Based on 
        // Specific flags
        // Equality
    // Label a line to jump to if a flag is triggered
        //JB,JC - jump to a label if the carry flag is set
        // etc

// 