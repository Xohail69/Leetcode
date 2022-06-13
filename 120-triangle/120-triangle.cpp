class Solution {
public:
    
        int dfs(int i, int j, int n, vector<vector<int>>& triangle, vector<vector<int>>& memo) {
        if (i == n) return 0;
        if (memo[i][j] != -1) return memo[i][j];
        
        int lower_left = triangle[i][j] + dfs(i + 1, j, n, triangle, memo);
        int lower_right = triangle[i][j] + dfs(i + 1, j + 1, n, triangle, memo);
        memo[i][j] = min(lower_left, lower_right);
        
        return memo[i][j];
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
         int n = triangle.size();
        vector<vector<int>> memo(n, vector<int>(n, -1));
        return dfs(0, 0, n, triangle, memo);
        
        
        
        
        
//           int n = triangle.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         for (int j = 0; j < n; j++) dp[n - 1][j] = triangle[n - 1][j];
//         for (int i = n - 2; i >= 0; i--) {
//             for (int j = 0; j < i + 1; j++) {
//                 int lower_left = triangle[i][j] + dp[i + 1][j];
//                 int lower_right = triangle[i][j] + dp[i + 1][j + 1];
//                 dp[i][j] = min(lower_left, lower_right);
//             }
//         }
//         return dp[0][0];
        
        
        
        
        
        
        
    }
};