class Solution {
public:
    bool canPlaceFlowers(vector<int>& f , int n) {
        int c =0  , m = f.size() ;
        for(int i = 0 ; i < m ; i++ ) {
            if(f[i] == 0 and (i==0 or f[i-1] != 1) and ( i == m-1 or f[i+1] != 1) ) {
               
                f[i] =1 ; c++ ;
            }
            if(c >= n ) return 1 ;
        }
        return 0 ; 
        
    }
};