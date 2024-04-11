// Recursion
    // A function calling itself (cycle)

// Factorial 
    // This function calculates the factorial of integer n a new value of n is saved in each stacked frame

// INVOKE Directive
    // The invoke directive is a powerful replacement for intel's CALL instruction that lets you pass multiple arguments 

// ADDR Operator 
    // Returns a near or far pointer to a variable, depending on which memory model your program uses:
        // Small model - returns 16-bit offset
        // Medium model - 32
        // Large model - 64

// PROC Directive 
    // decalres a procedure with an optional list of named parameters 

// Multimodule programs 
    // a program whose source code has been divided up into separate ASM files
    // Then into OBJ then into One entire EXE

    //Advantages 
        //Large programs are wasier to write, maintain and debug when divided into separate source code modules

// String Primitive instructions
    // MOVSB, MOBSW, and MOVSD
        // Copys data from memory location pointed to by ESI to the memory location pointed to by EDI
        // ESI and EDI are automatically incremented and decremented 

// Direction flag 
    // DF - clear (0)
    // DF - set (1)

// Using Repeat prefix
    // REP can be inserted just before MOVSB, MOBSW, and MOVSD

// CMPSB, CMPSW, and CMPSD
    // Each compares memory operand pointed by ESI to a memory operand pointed to by EDI

// Compare arrays 
    // Use a REPE (repeat while equal) to compare a array

// Compare stings 
    // Will tell if the source is smaller or larger than what was recieved 

// File Manipulation 
    //CreateFile
        // Creates a new file || Opens an exisiting file for reading || Opens an exisiting file for writing || Overwriting a file
    //ReadFile
        // Reads from an input file
    //WriteFile
        // Opens file for writing 
    //SetFilePointer
        // Moves the position pointer of an open file. You can use it to append data to a file, and to perform random-access record processing

// Screen buffer and Console window
    // The active screen buffer includes data displayed by the console window

// Controlling the Cursor 
    //GetConsoleCursorInfo
        // Returns the size and visibility of the cursor 
    // GetConsoleCusorPosition
        // Sets the X,Y position of the cursor

// Time and Date Functions
    // GetLocalTime, SetLocalTime
    // GetTickCount, Sleep
    // GetDateTime
    // SYSTEMTIME Structure
    // Creating a Stopwatch Timer

// Dyanmic memory allocation
    // Heap Manager
        //Large blocks of memory / then take and return
