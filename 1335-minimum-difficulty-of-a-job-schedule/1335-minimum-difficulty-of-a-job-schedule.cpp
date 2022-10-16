class Solution {
public:
    int dp[301][11] ; 
    int dfs(vector<int> &a , int i , int d ){
        int n = a.size() ; 
        if(i == n and d == 0 ) return 0 ; 
        if(d <= 0 ) return INT_MAX ; 
        if(dp[i][d] != -1 ) return dp[i][d] ;
        int maxi = 0 , mini = INT_MAX ; 
        for(int j = i ; j < n ; j++ ){
            maxi = max(maxi , a[j] ) ; 
            int t = dfs(a , j + 1  , d - 1 ) ; 
            if( t != INT_MAX ){
                mini = min(mini , maxi + t ) ; 
            }
        }
        return dp[i][d] = mini  ; 
    }
    
    int minDifficulty(vector<int>& a, int d) {
        memset(dp , -1 , sizeof(dp) ) ; 
        int ans =  dfs(a , 0 , d ) ; 
        if( ans != INT_MAX ) return ans ; 
        return -1 ; 
    
    }
};