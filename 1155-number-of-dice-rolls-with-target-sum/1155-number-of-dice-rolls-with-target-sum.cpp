class Solution {
public: 
     int dp[31][1001] ; 
    const int mod = 1e9 + 7 ; 
        
    int  helper(int n , int t , int k ){
        
        if(n == 0 and t == 0 ) { return 1 ;  }
        if(n <= 0 or t < 0 ) return 0 ; 
       
        if(dp[n][t] != -1 ) return dp[n][t] ; 
        int ans = 0 ;
        for(int i = 1 ; i <= k ; i++ ){
           ans = (ans + helper(n-1 , t - i , k ) )%mod ; 
        }
        return dp[n][t] = ans ; 
    }
    
    int numRollsToTarget(int n, int k, int target) {
        // memset(dp , -1 , sizeof(dp) ) ;
        // helper(n , target , k  ) ; 
        // return dp[n][target] ;
        
        
        vector<vector<int>> dp(n+1 , vector<int>(target+1 , 0 ) ) ; 
        dp[0][0] = 1 ; 
        for(int i = 1 ; i < n+1  ; i++ ){
            for(int j = 1 ; j < target+1 ; j++ ) {
                for(int m = 1  ; m <= k ; m++ ){
                    dp[i][j] = (dp[i][j] + (j >= m ? dp[i-1][j-m] :0 ) )%mod ;
                }
                
            }
        }
        return dp[n][target] ; 
        
        
    }
};