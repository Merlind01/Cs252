
//The highest bit indicates the sign. 1 = negative, 0 = positive 
//(First Digit from left to right)


//Sign # -->  1 1 1 1 0 1 1 0  Negative 
//Sign # -->  0 0 0 0 1 0 1 0  Postive 


// If the highest digit of a hexadecimal integer is > 7, the value is negative. EX: 8A, C5, A2, 9D


//              Forming the Two's Complement 
// * Negative numbers are stored in two's complement notation
// * Represents the additive inverse 

//  Starting Value                           00000001
// Step 1: Reverse the bits                  11111110
// Step 2: add 1 to value from step 1        (Step 1) + 1
// Sum: two's complement representation      11111111


//EX
//          2's Complement          1's Complement
//  14         1 1 1 0                 1 0 0 0
// - 7         1 0 0 1                       1 +
//-----       ---------               -----------
//   7         0 1 1 1                 1 0 0 1 

