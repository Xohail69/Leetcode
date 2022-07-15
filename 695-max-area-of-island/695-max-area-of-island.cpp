class Solution {
public:
    bool isValid(int x , int y , int m , int n ){
        if(x >=0 and x < m and y >=0 and y < n ) 
            return 1 ; 
        return 0 ; 
    }
    
    int helper(vector<vector<int>>& grid , int i , int j ){
         int m = grid.size() , n = grid[0].size()  ; 
        if(isValid(i , j , m , n  ) and grid[i][j] == 1 ){
            grid[i][j] = 0 ; 
            return 1 + helper(grid , i-1 , j) + helper(grid , i+1 , j ) + helper(grid , i , j-1) + helper(grid , i , j + 1 ) ;
        }
        return 0 ; 
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi = 0 ; 
        int m = grid.size() , n = grid[0].size()  ; 
        for(int i = 0 ; i < m ; i++  ){
            for(int j = 0 ; j < n ; j++ ){
                maxi = max(maxi  , helper(grid , i , j ) ) ; 
            }
        }
        return maxi ;
    }
};