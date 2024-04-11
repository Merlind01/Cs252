//      Boolean Operations

//AND                       Or                                  Not
// A | B | A^B              A | B | AvB                         A | A'
//-------------            -------------                       -------
// 0 | 0 | 0                0 | 0 | 0                           0 | 1
// 0 | 1 | 0                0 | 1 | 1                           1 | 0
// 1 | 0 | 0                1 | 0 | 1
// 1 | 1 | 1                1 | 1 | 1

//And Gate                  Or Gate                             Not Gate
// ==D---                  ==D--                                ---|>o-----
//                  D Section is "Arrow Tip" shape       Triangle with circle at tip


//XOR                    
// A | B | A+B            
//-------------           
// 0 | 0 | 0               
// 0 | 1 | 1              
// 1 | 0 | 1            
// 1 | 1 | 0  