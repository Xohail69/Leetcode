class Solution {
public:
    bool isValid(int r , int c , vector<vector<int>> &grid ){
        if(r>=0 and c >=0 and r < grid.size() and c < grid[0].size() and grid[r][c] == 0 )
            return true ;
        return false ;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
     if(grid[0][0] == 1) return -1 ;
    vector<vector<int>> dirs = { {1 , 0} , {0 , 1} , {0 , -1} , { -1 , 0 } ,
                                 {1 , 1} , {1 ,-1} , {-1 , 1} , {-1 , -1 } } ;
        queue<pair<int,int>> q ;
        q.push({0 , 0 }) ;
        grid[0][0] = 1 ;
        int ans = 0 ; 
        while(!q.empty() ){
            int n = q.size() ;
            ans++ ;
            for(int i = 0 ; i < n ; i++ ){
                auto p = q.front() ;
                q.pop() ;
                if(p.first == grid.size() -1 and p.second == grid[0].size() - 1 )
                    return ans ;
                for(int j =  0 ; j < dirs.size() ; j++ ){
                    int r = p.first + dirs[j][0] ;
                    int c = p.second + dirs[j][1] ;
                    if( isValid(r , c , grid ) ){
                        q.push({r,c}) ;
                        grid[r][c] = 1 ;
                    }
                }
            }
        }
        
        return -1 ;
        
        
        
        
        
        
        
        
        
        
        
        
//           int row[5] = {1,-1,0,1,1};
//             int col[5] = {0,1,1,-1,1};
//             int n = grid.size();
        
//             if (grid[0][0] == 1 || grid[n-1][n-1] == 1)
//                 return -1;
 
//             queue <pair<pair<int, int>, int>> q;
//             q.push({{ 0, 0 }, 1 });
        
//             while (!q.empty()) {            
//                 auto top = q.front();
//                 q.pop();

//                 int r = top.first.first, c = top.first.second, d = top.second, x, y;
//                 if (r == n-1 && c == n-1)
//                     return d;

//                 for(int i = 0; i < 5; i++) {
//                     x = r + row[i];
//                     y = c + col[i];

//                     if (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == 0) {
//                         grid[x][y] = 1;
//                         q.push({{ x, y }, d+1 });
//                     }
//                 }
//         }
//         return -1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};