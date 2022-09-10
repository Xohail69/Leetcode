class Solution {
public:
    int lcs(string &x , string &y) {
        int n = x.length() , m = y.length() ; 
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , 0 ) ) ;
        for(int i = 1 ; i < n+1 ; i++ ){
            for(int j = 1 ; j < m + 1 ; j++ ){
                if(x[i-1] == y[j-1] ){
                    dp[i][j] = 1 + dp[i-1][j-1] ;
                }
                else dp[i][j] = max(dp[i-1][j] , dp[i][j-1] ) ;
            }
        }
        return dp[n][m] ; 
    }
    
    int minDistance(string x , string y ) {
        return x.size() + y.size() - 2*lcs(x,y) ; 
    }
};