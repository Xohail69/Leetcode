class Solution {

public:
    int dp[100] = {0} ; 
    int helper(int i , string &s ){
        if(i == s.size() ) return 1 ; 
        if(i > s.size() ) return 0 ; 
        if(dp[i] != 0 ) return dp[i] ; 
        // int ans = 0 ; 
        if(s[i] != '0' ) dp[i] += helper(i+1 , s ) ; 
        if(i + 1 < s.size() and s[i] == '1' or s[i] == '2' and s[i+1] <= '6' )
            dp[i] += helper(i+2  , s ) ;
        return dp[i] ; 
    }
    int numDecodings(string s) {
        return helper(0 , s) ; 
    }
};