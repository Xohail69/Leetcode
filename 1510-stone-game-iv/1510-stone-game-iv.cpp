class Solution {
public:
    //int dp[100001] ;
//     int helper(int n ) {
//      if(n <= 0 ) return 0 ; 
//         if(dp[n] != -1) return dp[n] ;
//         for(int i = 1 ; i*i <=n ; i++ ) {// looping for the perfect square which has to be less then n
            
//             if(helper(n - i*i) == 0 )  // if the previous branch has false, we will check the winner of this game. 
// 				// n - perfect square which can be possible in all branches.
//                 // if any of the branch gives us true then update dp
//                 return dp[n] = 1 ;
//         }
//         return dp[n] = 0 ;
//     }
    bool winnerSquareGame(int n) {
              // Time O(n^1.5)
              //   Space O(N)
        
        //Top to bottom
        // memset(dp , -1 , sizeof(dp)) ;
        // return helper(n ) ;
        
        
   
  
            //bottom up
        vector<bool> dp(n + 1, false);
        for (int i = 1; i <= n; ++i) {
            for (int k = 1; k * k <= i; ++k) {
                if (!dp[i - k * k]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
        
        
    }
};