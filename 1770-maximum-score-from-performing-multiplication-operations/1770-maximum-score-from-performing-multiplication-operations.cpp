class Solution {
public:
    // typedef int long ;
 int helper(int i , int l , int r , vector<int>& nums, vector<int>& mult , vector<vector<int>> &dp) { 
     
        if(i == mult.size() ) {
            return 0 ;
        }
        if(dp[i][l] != INT_MIN ) return dp[i][l] ; 
        int left = nums[l]*mult[i] + helper(i + 1 , l +1 , r , nums , mult , dp ) ; 
        int right= nums[r]*mult[i] + helper(i + 1 , l , r - 1 , nums , mult , dp ) ; 
        return dp[i][l] = max(left , right ) ; 
        
    }
    int maximumScore(vector<int>& nums, vector<int>& mult ) {
        int m = mult.size()  ; 
        vector<vector<int>>dp(m , vector<int>(m , INT_MIN )) ; 
       return helper(0 , 0 , nums.size() - 1 , nums , mult , dp ) ; 
    }
};