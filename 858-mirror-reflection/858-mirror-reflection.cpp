class Solution {
public:
    int gcd(int a , int b ){
        if( a == 0 ) return b ; 
        return gcd(b%a , a ) ; 
    }
    
    int mirrorReflection(int p, int q) {
        
        
     int hcf = gcd(p , q ) ; 
        int m = p/hcf ; 
        int n = q/hcf ; 
        if( n&1 ) {
            if(m %2 == 0 ) 
                return 2 ; 
            return 1 ; 
        }
        else 
            return 0 ; 
        
        
        
        
        
        
        
        
     
    }
};