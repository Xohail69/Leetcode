// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minColour(int N, int M, vector<int> mat[]) {
        // code here
          vector<vector<int>> adj(N+1);
        vector<int> indeg(N+1);
        
        for(int i=0;i<M;i++){
            adj[mat[i][0]].push_back(mat[i][1]);
            indeg[mat[i][1]]++;
        }
        
        int lvl=0;
        queue<int> q;
        
        for(int i=1;i<=N;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        
        if(q.empty()) return 0;
        
        while(!q.empty()){
            int size = q.size();
            for(int k=0;k<size;k++){
                int e = q.front();
                q.pop();
            
                for(auto it:adj[e]){
                   indeg[it]--;
                   if(indeg[it]==0){
                       q.push(it);
                   }
                }
            }
                lvl++;  
        }
        return lvl;
        
        
        
        
    }
};
  
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends