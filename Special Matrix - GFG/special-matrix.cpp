// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	    // Code here
	    int mod = 1e9+ 7 ;
	   vector<vector<int>> w (n+1 , vector<int>(m+1 , 0)) ; 
	   for(auto &b : blocked_cells )
	        w[b[0]][b[1]] = -1 ; 
	        
	        if(w[1][1] == -1 or w[n][m] == -1)
	            return 0 ;
	     
	        w[0][1] = 1 ;
	        for(int i = 0 ; i < n ; i ++ ){
	            for(int j = 0 ; j < m ; j++ ){
	                if(w[i+1][j+1] == -1 ) 
	                    w[i+1][j+1] = 0 ;
	               else 
	                    w[i+1][j+1] = (w[i][j+1] + w[i+1][j])%mod ;
	            }
	        }
	        
	        
	        
	        
	        
	        return w[n][m]  ;
	        
	        
	        
	        
	        
	        
	        
	        
	        
	    
	   
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int>>blocked_cells;
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			blocked_cells.push_back({x, y});
		}
		Solution obj;
		int ans = obj.FindWays(n, m, blocked_cells);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends