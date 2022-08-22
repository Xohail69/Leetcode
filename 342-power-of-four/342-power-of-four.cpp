class Solution {
public:
    bool isPowerOfFour(int num ) {
         return num > 0 && (num&(num-1)) == 0 && (num & 0x55555555) != 0;
        // https://leetcode.com/problems/power-of-four/discuss/772428/C%2B%2B-Three-Solution-or-Explain-or-Naive-orBit-Manipulation
        
        
        
 //        Power of 4 numbers have those 3 common features.First,greater than 0.Second,only have one '1' bit in their binary notation,so we use x&(x-1) to delete the lowest '1',and if then it becomes 0,it prove that there is only one '1' bit.Third,the only '1' bit should be locate at the odd location,for example,16.It's binary is 00010000.So we can use '0x55555555' to check if the '1' bit is in the right place.
 // 0x55555555 is a hexametrical number，it is 1010101010101010101010101010101 in binary with a length of 32. To make sure the 1 locates in the odd location.
            
            
             // return num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
        
    
// (4^n - 1) % 3 == 0
// another proof:
// (1) 4^n - 1 = (2^n + 1) * (2^n - 1)
// (2) among any 3 consecutive numbers, there must be one that is a multiple of 3
// among (2^n-1), (2^n), (2^n+1), one of them must be a multiple of 3, and (2^n) cannot be the one, therefore either (2^n-1) or (2^n+1) must be a multiple of 3, and 4^n-1 must be a multiple of 3 as well.
    
    
    
            
            
        
    }
};