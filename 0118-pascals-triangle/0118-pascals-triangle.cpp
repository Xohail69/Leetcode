class Solution {
public:
    vector<vector<int>> generate(int n ) {
        if(n == 1 ) return {{1}} ;
          vector<vector<int>> ans ={{1} , {1,1}} ; 
        for(int i = 2 ; i < n ; i++ ){
            vector<int> v(i + 1 , 1  ) ;
            for(int j = 1 ; j < i ; j++ ){
                auto x = ans.back() ; 
                v[j] = x[j] + x[j-1] ; 
            }
            ans.push_back(v) ; 
        }
        return ans ; 
    }
};