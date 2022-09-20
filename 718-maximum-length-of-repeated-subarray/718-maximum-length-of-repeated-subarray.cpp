class Solution {
public:
    int findLength(vector<int>& x , vector<int>& y ) {
//         LCS
        int n = x.size() , m = y.size() ; 
        int dp[n+1][m+1] ; 
        int ans = INT_MIN ; 
        memset(dp , 0 , sizeof(dp) ) ;
        for(int i = 1 ; i < n + 1  ; i++ ){
            for(int j = 1 ; j < m + 1 ; j++ ){
                if(x[i-1] == y[j-1] ){
                    dp[i][j] = 1 + dp[i-1][j-1] ; 
                }
                else dp[i][j] = 0 ; 
                ans = max(ans , dp[i][j] ) ; 
            }
        }
        return ans; 
    }
};