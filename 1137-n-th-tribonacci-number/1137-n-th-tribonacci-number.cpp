class Solution {
public:
    int tribonacci(int n) {
        vector<long> v(38 , -1 ) ;
        v[0] = 0  , v[1] = 1 , v[2] = 1 ;
        for(int i = 3 ; i<38 ; i++ ) v[i] = v[i-1] + v[i-2] + v[i-3] ;
        return v[n] ;
    }
};