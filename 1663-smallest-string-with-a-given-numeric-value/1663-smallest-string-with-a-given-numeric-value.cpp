class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n , 'a') ;
        k -= n ;
        while( k ){
            ans[--n] += min( k , 25) ;
            k -= min(k , 25 ) ;
        }
        return ans ; 
    }
};