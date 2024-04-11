#include <iostream>
using namespace std;

int main()
{
    // Array of ints {7, 8, 3, 12, 1}

// Linear search (Start from beggining and go through) - simple but ineffiecent 

    // Lowest = 7
    // if (Lowest < 8) then keeping if not set Lowest to that number 

// Binary Search
    // Look at middle int (Pivot)
    // If pivot is Greater then number to look for then only search left (If ints are in order)
    // If pivot is Less then number to look for then only search right (If ints are in order)

//Using Sorts you can make Binary Searchs even more effiecent then Linear Searchs

    // Merge Sort       etc
    //Bubble Sort

// Look at first two ints to see which is greater and changes if not 
//      14 33 27 35 10      Checks 14 and 33
//      14 33 27 35 10      Checks 33 and 27 (needs to swap)
//      14 27 33 35 10      Checks 33 and 35 
//      14 27 33 10 35      Checks 35 and 10 (needs to swap)    - Last digit is known to be biggest so dont need to check anymore
//      14 27 33 10 35      Checks 14 and 27 
//      14 27 33 10 35      Checks 27 and 33
//      14 27 10 33 35      Checks 33 and 10 (needs to swap)    - Last 2 largest digits is known
//  
//              ETC
//   until 
//      10 14 27 33 35
//   then
// Able to use Binary sort Easier 


    return 0;
}
