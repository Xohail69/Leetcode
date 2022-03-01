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
    for(int i = 0  ;  i < n + 1 ; i ++){
       // ans[i] = __builtin_popcount(i) ; 
        ans[i] = count(i) ; 
        }
    return ans ; 
    }
};