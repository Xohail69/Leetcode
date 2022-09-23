class Solution {
public:
    const int mod = 1e9 + 7 ; 
    
     int numberOfBits(int n) {
		  return log2(n) + 1;
    }
    
    int concatenatedBinary(int n) {

//         int ans = 0 ; 
//         int m = n ; 
//         int p = 1 ; 
//         while( n ){
//             if(m == 0 ) {
//                 n-- ; 
//                 m = n ; 
//             }
//             ans = (ans + (m&1)*(p%mod))%mod ; 
//             p = (p%mod)*2 ; 
//             m >>= 1 ; 
            
//         } 
//         return ans; 
        
        long ans = 0 ; 
        for(int i = 1 ; i <= n ; i++ ){
            int len = numberOfBits(i) ; 
            ans = ( (ans<<len)%mod + i )%mod ; 
        }
        return ans ; 
    }
};