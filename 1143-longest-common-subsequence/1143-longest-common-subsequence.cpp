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
        return lcs(s1.size() , s2.size()  , s1 , s2 ) ;
    }
};