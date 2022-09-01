class Solution
{
    public:
    int count(vector<int>&nums , int sum ){
    vector<int> z(nums.size() , 0  )  ;
        int zero = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] ==  0 ) zero++ ; 
            z[i] = zero ; 
        }
        
        int n = nums.size()  ; 
        vector<vector<int>> dp (n +1 , vector<int> (sum+1 , 0 ) ) ; 
        dp[0][0] = 1;
        for(int i = 0 ; i < n ; i++ ){
            dp[i+1][0] = pow(2 , z[i] ) ; 
        }
        for(int i = 1 ; i <  n + 1 ; i++ ){
            for(int j = 1 ; j < sum+1 ; j++ ){
                if(nums[i-1] <= j ){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]] ;
                }
                else dp[i][j] = dp[i-1][j] ; 
            }
        }
        return dp[n][sum] ; 
        
    }
    
        int findTargetSumWays(vector<int> &nums, int target)
        {   
            
            int sum = accumulate(nums.begin() , nums.end() , 0 ) ;
            
            if(sum < abs(target) ) return 0 ;
            if( (target+sum) &1 ) return 0 ;  
            
            int s = (target + sum) / 2;
            return count(nums , s) ; 
            
            
            
            
        }
};