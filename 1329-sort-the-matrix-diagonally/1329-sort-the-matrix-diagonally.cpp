class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& a ) {
        unordered_map<int, priority_queue<int,vector<int>,greater<int>> > mp ;
        int n = a.size() , m = a[0].size() ; 
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                mp[i-j].push(a[i][j]) ;
            }
        }
         for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
               a[i][j] = mp[i-j].top() ; 
                mp[i-j].pop() ; 
            }
        }
        
        return a; 
        
        
        
        
    }
};