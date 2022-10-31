class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& grid ) {
        int n = grid.size() , m = grid[0].size() ; 
        for(int i = 0 ; i < n ; i ++ ){
            for(int j = 0 ; j < m ; j++ ){
                if(i + 1 < n and j + 1 < m ){
                    if(grid[i][j] != grid[i+1][j+1] ) 
                        return 0 ; 
                }
            }
        }
        return 1 ; 
    }
};