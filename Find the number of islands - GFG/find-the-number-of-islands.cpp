// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
     void dfs(vector<vector<char>> &grid, int x, int y)
    {
        if(x<0 || y<0 || x>=grid.size() || y>= grid[0].size() || grid[x][y]!='1')
        return;
        
        grid[x][y] = '0';
        //in leetcode we dont have to be worry about diagonal one
        //here we have to take that one also
        dfs(grid, x+1, y);
        dfs(grid, x, y+1);
        dfs(grid, x-1, y);
        dfs(grid, x, y-1);
        
        // these are all the diagonal cases 
        dfs(grid, x-1, y-1);
        dfs(grid, x+1, y+1);
        dfs(grid, x+1, y-1);
        dfs(grid, x-1, y+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
         // Code here
        int cnt = 0;
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    cnt++;
                    dfs(grid, i, j);
                }
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends