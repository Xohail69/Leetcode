class Solution {
public:
     int lcs(vector<int> &x , vector<int> &y ) {
        int n = x.size() , m = y.size() ; 
         vector<vector<int>>dp( n + 1 , vector<int>(m +1 , 0 ) ) ;
		    for(int i = 1 ; i < n + 1 ; i++ ) {
		        for(int j = 1 ; j < m + 1 ; j++ ){
		            if(x[i-1] == y[j-1] ) {
		                dp[i][j] = 1 + dp[i-1][j-1] ; 
		            }
		            else dp[i][j] = max(dp[i-1][j] , dp[i][j-1] ) ; 
		        }
		    }
		    return dp[n][m] ; 
    }
    
    int lengthOfLIS(vector<int>& nums) {
        
        set<int> s(nums.begin() , nums.end() ) ; 
        vector<int> v (s.begin() , s.end() ) ; 
        return lcs(nums , v )  ;
    }
};