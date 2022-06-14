class Solution {
public:
    int trailingZeroes(int n) {
        // https://leetcode.com/problems/factorial-trailing-zeroes/discuss/52470/4-lines-4ms-C%2B%2B-Solution-with-Explanations
//         int ans(0) ; 
//         for(long long j = 5 ; n / j > 0 ; j *= 5 ){
//             ans += n/ j ;
//         }
        
//         return ans  ;
        
        
        
          int res=0;
        while(n){
            n/=5;
            res+=n;
        }
        return res;
    }
};