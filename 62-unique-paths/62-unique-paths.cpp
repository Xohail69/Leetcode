class Solution {
public:
    int solve(int i , int j , int m , int n , vector<vector<int>> &dp){
        if(i == m - 1 and j == n - 1 ) 
            return dp[i][j] = 1 ;
        
        
        
        if(i < m and j < n ){
            if(dp[i][j] != 0  ) return dp[i][j] ;
            return dp[i][j] = solve(i+1 , j , m , n ,dp ) + solve(i , j+1 , m , n , dp ) ;
        }
        return  0 ; 
        
        
        
        
        
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m , vector<int> (n , 0 )) ;
         solve(0 , 0 , m , n , dp ) ; 
        return dp[0][0] ;
        
    }
};