class Solution {
public:
    int findComplement(int num) {
        //M1 Basic idea is to find the smallest power of 2 that is larger than the input number num, and output the difference between powerof2s and num
//         input + output = 111....11 in binary format
//           
//         Let's find the first number X that X = 1111....1 > N
// And also, it has to be noticed that,
//         N + bitwiseComplement(N) = 11....11 = X
// Then bitwiseComplement(N) = X - N
//             N ^ bitwiseComplement(N) = 11....11 = X
// bitwiseComplement(N) = N ^ X
//             We construct a XOR mask from all ones until it's larger or equal than the number. For example, for 100101, the mask will be 111111. And for 1111, the mask will be 1111.
        // int n = 0 , j =0 ; 
        // while(n < num ) {
        //     n += 1<<j ;
        //     j++ ;
        // }
        // return n - num ;
        //or 
        //return n^num ;
        
        
        
        
        
        
        //M2 Logic
        // here we are collecting zero bits (of position jths )one by one by shifting n to right & raising it to the power of j and addding it . Now why zero bits ?? because after complementing the n zero bits will become oneans thus contribute to ower ans 
        
//         int i(0)  , ans(0) ;
//         while(num ) {
//             if( (num&1) == 0  )
//                 ans += 1<<i ;
//             i++ ;
//             num >>=1 ;
//         }
//         return ans ;
        
        
        //M3
         // return (pow(2,floor(log2(num))+1)-1)-num;
//         Here, floor(log2(num))+1 gives us the number of bits in integer num.
// The maximum value obtained with this number of bits is pow(2,no of bits)-1.
// When we subtract from maximum value to the given input will gives the complement of given input.
        
        //M4 https://leetcode.com/problems/number-complement/discuss/1649574/C%2B%2B-EASY-TO-SOLVE-oror-Different-Variations-of-code-with-detailed-exaplanations
        unsigned mask = ~0 ;
        while(mask & num ) mask <<=1 ;
        return ~num ^ mask ; 
//         Time Complexity: O(a9ut most 32bits to move) = O(1)
// Space Complexity: O(1)
        
        
        
    }
};