class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int inc = 0 , exc = 0 ;
        int count[10001] = {0} ;
        for(int x : nums) count[x]++ ; 
        for(int i = 0 ; i < 10001 ; i++ ){
            int ni = exc + count[i]*i ;
            int ne = max(inc , exc) ; 
            inc = ni ;
            exc = ne ;
        }
        return max(inc , exc ) ; 
    }
};