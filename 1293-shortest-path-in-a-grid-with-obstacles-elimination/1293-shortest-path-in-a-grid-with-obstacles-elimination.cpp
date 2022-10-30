class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
            int n = grid.size() , m = grid[0].size() ; 
        vector<vector<int>> vis(n , vector<int> (m , -1 ) ) ; 
        queue<vector<int>> q ; 
        // queue stores (x,y,current path length,number of obstacles we can still remove)
        q.push({0, 0 , 0 , k } )  ; 
        while(!q.empty() ){
            auto t = q.front() ;
            q.pop() ;
            int x = t[0] , y = t[1] ; 
            // continue if current position is outside of the grid
            if(x < 0 or y < 0 or x >= n or y >= m ){
                continue ; 
            }
            //reached at end 
            if(x == n -1 and y == m -1 )
                return t[2] ; 
            if(grid[x][y] == 1){ //obstable encountered 
                if(t[3] > 0 ) // remove obstacle if possible
                    t[3]-- ;  //decrease k 
                else continue  ;
            }
    // The cell was previously visited by some path and we were able to remove more obstacles from the previous path.
			// Then we don't need to continue on our current path
            if(vis[x][y] != -1 and vis[x][y] >= t[3] ) 
                continue ; 
            vis[x][y] = t[3] ; 
            q.push({x+1   , y , t[2]+1 , t[3] } ) ; 
            q.push({x, y + 1  , t[2]+1 , t[3] } ) ;
            q.push({x-1 ,  y  , t[2]+1 , t[3] } ) ; 
            q.push({x, y -1   , t[2]+1 , t[3] } ) ; 
           
        }
        return -1 ; 
    }
};