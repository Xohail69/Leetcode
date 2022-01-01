class Solution {
public:
    int maxCoins(vector<int>& a) {
        int n = a.size() ;
        int dp[n][n] ;
        for(int m = 0 ; m < n ; m++ ) {
        
            for(int i = 0 , j = m ; j < n ; j++ , i++ ) {
                int maxi = INT_MIN ;
                for(int k = i ; k <= j ; k++ ){
                    int left = k==i ? 0 : dp[i][k-1] ;
                    int right = k==j ? 0 : dp[k+1][j] ;
                    int val = (i==0 ? 1 : a[i-1]) * a[k] * (j==n-1 ? 1 : a[j+1] ) ;
                    int total = left + right + val ;
                    maxi = max(maxi , total ) ;
                    
                }
                dp[i][j] = maxi ;
            }
        }
        return dp[0][n-1] ;
    }
};