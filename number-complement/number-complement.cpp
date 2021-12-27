class Solution {
public:
    int findComplement(int num) {
        //M1 
        // int n = 0 , j =0 ; 
        // while(n < num ) {
        //     n += 1<<j ;
        //     j++ ;
        // }
        // return n - num ;
        //or 
        //return n^num ;
        
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
//         Time Complexity: O(at most 32bits to move) = O(1)
// Space Complexity: O(1)
        
        
        
    }
};