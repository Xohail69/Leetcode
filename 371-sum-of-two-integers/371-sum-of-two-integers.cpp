class Solution {
public:
    int getSum(int a, int b) {
        int p = a*b ; 
        if(p == 0 ) return a ? a : b ; 
        if(p < 0 ) {
         int pos = a > 0 ? a : b ;
        int neg = a < 0 ? a : b ;
        for(int i = 0 ; i < pos ; i++ )
            ++neg ; 
        return neg ; 
        }
        else {
            int f = 0 ; 
            if(a < 0 and b < 0 ){
                b = abs(b) ; 
                a = abs(a) ; 
                f = 1 ; 
            }
            for(int i = 0 ; i < b ;  i ++ ){
                a++ ; 
            }
            if(f) a *= -1 ; 
            return a; 
        }
       
    }
};