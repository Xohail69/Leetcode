class Solution {
public:
    int countOrders(int n) {
        long res = 1  , mod = 1e9 + 7  ;
        for(int i = 1 ; i <= n ; i++ ){
            res *= i ;
            res %= mod ;
            res *= (2*i-1) ;
            res %= mod ;
        }
        return res%mod ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};