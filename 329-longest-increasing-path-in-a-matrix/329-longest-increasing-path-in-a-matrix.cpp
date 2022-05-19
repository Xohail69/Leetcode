class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size() , vector<int>(matrix[0].size() , 0 )) ;
        int sexy =  0 ; 
        for(int i = 0 ; i < matrix.size() ; i++ ) {
            for(int j = 0 ; j < matrix[0].size() ; j++ ){
                sexy = max(sexy , lip(matrix , i , j , dp ) ) ;
            }
        }
        return sexy ; 
        
        
    }
    
    int lip(vector<vector<int>>& matrix , int i , int j , vector<vector<int>>& dp ){
         int n = matrix.size() ;
         int m = matrix[0].size() ;
        if(i < 0 or j <0 or i >= n or j >= m ) 
            return 0 ;
        if(dp[i][j] ) return dp[i][j]  ;
        int curr_maxi = 1 ;
        //down neighbour
        if(i+1 < n and i+1 >= 0 and matrix[i][j] < matrix[i+1][j] )
            curr_maxi = max(curr_maxi , 1 + lip(matrix , i + 1 , j , dp ) ) ;
        //up neighbour
        if(i-1 < n and i-1 >= 0 and matrix[i][j] < matrix[i-1][j] )
            curr_maxi = max(curr_maxi , 1 + lip(matrix , i - 1 , j , dp ) ) ;
        //right
        if(j+1 < m and j+1 >= 0 and matrix[i][j] < matrix[i][j+1] )
            curr_maxi = max(curr_maxi , 1 + lip(matrix , i  , j + 1 , dp ) ) ;
        //left
        if(j-1 < m and j-1 >= 0 and matrix[i][j] < matrix[i][j-1] )
            curr_maxi = max(curr_maxi , 1 + lip(matrix , i  , j - 1 , dp ) ) ;
        
        return dp[i][j] = curr_maxi ;
    }
    
    
};