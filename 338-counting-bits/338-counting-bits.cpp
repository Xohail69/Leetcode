class Solution {
public:
    
    int count(int n ) {
        int ans = 0 ; 
        while(n > 0 ) {
            n = n & (n-1) ; 
            ans++ ; 
        }
        return ans ; 
    }
    
    vector<int> countBits(int n) {
        vector<int>ans (n + 1 ) ; 
        
        
    // for(int i = 0  ;  i < n + 1 ; i ++){
    //    // ans[i] = __builtin_popcount(i) ; 
    //     ans[i] = count(i) ; 
    //     }
    // return ans ; 
        
        
      //M2
//         In O(N) Time
// Let if we have X and Y in Such a way that,
// X/2 = Y
// then Number of set bits in X - Number of set bit in Y <= 1

// eg let X = 7and Y = 3
// then 7 / 2 = 3;

// 7 -> 1 1 1 number of set bit are 3
// 3 -> 0 1 1 number of set bit are 2

// there difference is 3 - 2 <= 1

// another eg
// X = 12 and y = 6
// then 12 / 2 = 6;

// 12 -> 1100 number of set bit are 2
// 6 -> 0110 number of set bit are 2

// there difference is 2 - 2 <= 1

// There can be 2 cases
// whether X is Odd or Even

// if X is ODD

// then the (LSB) Least Significant Bit will always be set and dividing by 2 means right shifting the number by 1 bit.
// so if last bit is set and right shift it by 1 bit than the last set bit will be lost.
// therfore the new number Y has 1 set bit less than in compare to X
// But if X is Even

// then LSB will be equal to 0, therefore even we do right shift by1 bit then only this 0 bit will be lost and no set bit got lost
// so When we have X has Even,

// no of set bit in X = no of set bit in Y
// and When X is ODD

// no of set bit in X = 1 + no of set bit in Y
// CODE

    
        
        // t[0] will be 0 beacuse 0 has count of set bit is 0;
        ans[0] = 0;
        
        // we can compute current set bit count using previous count
        // as x/2 in O(1) time
        
        // i%2 will be 0 for even number ans 1 for odd number
        
        for(int i = 1; i<=n; ++i)
            ans[i] = ans[i/2] + i%2;
        
        return ans ;
    
//         //The logic Behind "Why for even numbers the number of set bits would be same as its half and for odd numbers it would be +1".
// Things to observe:
// 1.All odd numbers would have their LSB (the rightmost bit) set. The reason being that no bit other than 0th bit will contribute an addition of odd number; all other powers of 2 will add to even.
// for example:
// 3 -> 0011
// 5 -> 0101
// 7 -> 0111
// Observe that LSB is set in all odd numbers
// For similar reasons, even numbers will never have LSB set.

// 2.Dividing by 2 is equivalent to right shift by 1

// In case of odd number, when we do a right shift by 1, we will always lose the rightmost bit. So inorder to compensate that lost set bit, we add 1. We will not lose any set bit while doing a right shift for even number. So for even number , set bits would be same as it was for half
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};