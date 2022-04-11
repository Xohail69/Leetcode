// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
 
	public:
	int numberOfCells(int n, int m, int r, int c, int u, int d, vector<vector<char>> &mat)
	{
		// Your code goes here
		if(mat[r][c] == '#') return 0 ; 

		queue<vector<int>> q ; 
		int cunt = 1 ; 
		
		q.push({r , c , 0 , 0 }) ; //startting at this position
        mat[r][c] = '1' ; // marking it as visited
        while(!q.empty() ) {
            int x = q.front()[0] ;
            int y = q.front()[1] ; 
            int up = q.front()[2] ;
            int down = q.front()[3] ;
            if(y-1 >=0 and mat[x][y-1] == '.' ) { // moving left
                q.push({x , y-1 , up , down }) ;
                cunt++ ; 
                mat[x][y-1] = '1' ;
            }
             if(y+1 < m and mat[x][y+1] == '.' ) { // moving right
                q.push({x , y+1 , up , down }) ;
                cunt++ ; 
                mat[x][y+1] = '1' ;
            }
            if(x-1 >= 0 and up != u and mat[x-1][y] =='.') { // moving up 
                q.push({x-1 , y , up + 1 , down }) ;
                cunt++ ;
                mat[x-1][y] = '1' ;
            }
            if(x+1 < n and down != d and mat[x+1][y] =='.') { // moving down 
                q.push({x+1 , y , up  , down + 1 }) ;
                cunt++ ;
                mat[x+1][y] = '1' ;
            }
            q.pop() ;
            
        }
        return cunt ; 
		
	}

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;

    while (t--)
    {
    	int n, m, r, c, u, d;
        cin >> n >> m >> r >> c >> u >> d;
        
        vector<vector<char>> mat(n, vector<char>(m, '.'));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < m; j++)
        	{
        		cin >> mat[i][j];
        	}
        }

      

        Solution obj;
        cout << obj.numberOfCells(n, m, r, c, u, d, mat) << "\n";
    
    }

    return 0;
}


  // } Driver Code Ends