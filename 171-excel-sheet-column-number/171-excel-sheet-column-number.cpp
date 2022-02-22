class Solution {
public:
    int titleToNumber(string s) {
        long long int ans = 0  , p = 1 ; 
        for(int i = s.size() - 1 ;  i >= 0 ; i-- ) {
            ans += (s[i] - 'A' + 1 )*p ;
            p *= 26 ;
        }
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};