class Solution {
public:
        int dp[1001][1001] ;
   Solution(){ memset(dp , -1 , sizeof(dp)) ; }
  
     int lcs(int x, int y, string &s1, string &s2)
    {   
       
        if(x == 0 or y == 0 ) return 0 ; 
        if(dp[x][y] != -1 ) return dp[x][y] ; 
        if(s1[x-1] == s2[y-1] )
            return dp[x][y] = 1 + lcs(x-1 , y-1 , s1 , s2 ) ;
        else 
            return dp[x][y] = max( lcs(x , y-1  , s1 , s2 ) , lcs(x-1 , y , s1 , s2 ) ) ;
    }
    int longestCommonSubsequence(string s1, string s2) {
        // return lcs(s1.size() , s2.size()  , s1 , s2 ) ;
        
        
//         Bottom up
        int n = s1.size() , m = s2.size() ; 
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , 0 )) ;
//         filled with 0 cux we have to make first row & col 0 
        for(int i = 1 ; i < n + 1 ; i++ ){
            for(int j = 1 ; j < m + 1 ; j++ ){
                if(s1[i-1] == s2[j-1] ){
                    dp[i][j] = 1 + dp[i-1][j-1] ; 
                }
                else 
                    dp[i][j] = max(dp[i][j-1] , dp[i-1][j] ) ; 
            }
        }
        return dp[n][m] ; 
        
    }
};