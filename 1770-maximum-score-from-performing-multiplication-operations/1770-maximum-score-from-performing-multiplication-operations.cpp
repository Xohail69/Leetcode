class Solution {
public:
  
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
        
//         Idea
// We can easy to realise that this is a Dynamic Programming problem. In operation ith, we can choose to pick the left or the right side of nums.
// The naive dp has 3 params which is dp(l, r, i), time complexity = O(m^3), l and r can be picked up to m numbers.
// We can optimize to 2 params which is dp(l, i), time complexity = O(m^2) , we can compute params r base on l and i:
// Where:
// l, r is the index of the left side and the right side corresponding.
// i is the number of elements that we picked.
// leftPicked: is the number of elements picked on the left side, leftPicked = l.
// rightPicked: is the number of elements picked on the right side, rightPicked = i - leftPicked = i - l.
// Finally: r = n - rightPicked - 1 = n - (i-l) - 1.
// Complexity

// Time: O(2 * m^2), where m <= 10^3
// Space: O(m^2)
        
        
        
//         int m = mult.size()  ; 
//         vector<vector<int>>dp(m , vector<int>(m , INT_MIN )) ; 
//        return helper(0 , 0 , nums.size() - 1 , nums , mult , dp ) ; 
        
        
        
        
        
        
        
        
              
        int m = mult.size() , n = nums.size() ; 
        vector<vector<int>>dp(m+1 , vector<int>(m+1 , 0 )) ; 
        for(int i = m -1 ; i >=0 ; i-- ){
            for(int j = i ; j >=0 ; j-- ){
                dp[i][j] = max( mult[i]*nums[j] + dp[i+1][j+1] , mult[i]*nums[n-(i-j)-1] + dp[i+1][j] ) ;
            }
        }
 return dp[0][0] ;        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};