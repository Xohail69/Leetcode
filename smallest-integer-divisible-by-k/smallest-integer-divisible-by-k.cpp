class Solution {
public:
    int smallestRepunitDivByK(int k) {
 
        
        
        
//         why use next_rem = (10 * prev_rem + 1) % K
//  for (a + b) %n = [(a %n) + (b %n)] %n so
// for ex - consider 11 % k ;
//         now 111%k = (11*10 + 1 ) %k = ( 10*(11 % k) + 1 ) = (10*prev_rem +1)
//             or in more detailed way :-
// 11%k = (10 % k + 1 % k) % k = ((1 % k) * 10 + 1) % k
// 111%k = (100 % k + 10 % k + 1 % k) % k = ((((1 % k) * 10 + 1) % k) * 10 + 1) % k

     //   https://leetcode.com/problems/smallest-integer-divisible-by-k/solution/772861
        
        int rem = 0 ; 
        if(k%2 == 0 or k%5 == 0 ) return -1 ;
        for(int n = 1 ; n <= k ; n++ ) {
            rem = (rem * 10  + 1 ) % k ;
            if(rem == 0 ) return n ;
        }
        return -1 ;
        
        
        
        
        
    }
};