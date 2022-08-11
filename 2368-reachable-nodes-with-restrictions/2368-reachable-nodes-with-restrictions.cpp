class Solution {
public:
    void dfs(int node , vector<vector<int>> &graph ,  vector<bool> &visited , unordered_set<int> &s , int &cunt ){
        visited[node] = true ; 
        for(auto &neighbour : graph[node] ){
            if( !s.count(neighbour ) and !visited[neighbour] ){
                cunt++ ; 
                dfs(neighbour , graph , visited , s  , cunt ) ; 
            }
        }
    }
  
  
    
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& res ) {
      
        vector<vector<int>> adj (n ) ; 
        //Creating a graph or adjacency list 
        for(auto &e : edges ){
            int u = e[0] ,  v = e[1] ;
            adj[u].push_back(v) ; 
            adj[v].push_back(u) ; 
        }
        
        
        unordered_set<int> s(res.begin() , res.end() ) ; 
        int cunt (0) ; 
         vector<bool> visited(n , false ) ; 
        
        
//         //BFS
//         queue<int> q ; 
//         q.push(0) ; 
       
//         while(q.size() ){
//             int n= q.size() ; 
//             while(n-- ) {
//                 auto x = q.front() ; q.pop() ; 
                
//                 //If node is visited & restricted then ignore & continue 
//                 if(vis[x] or s.count(x) ) continue ; 
                
                
                
//                 cunt++ ; 
//                 vis[x] = 1  ;
//                 for(auto y : adj[x]){
//                     if( !vis[y] and !s.count(y) ){
//                         q.push(y) ; 
//                     }
//                 }
                
//             }
//         }
//         return cunt ; 
            
        
        
        //DFS
        int ans = 1 ; 
        dfs(0 , adj , visited , s , ans ) ; 
        return ans ; 
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    }
};