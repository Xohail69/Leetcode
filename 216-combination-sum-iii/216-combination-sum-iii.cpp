class Solution {
public:
    vector<vector<int>> ans ; 
    void helper(vector<int> &comb , int k , int n , int start ){
        if(k == comb.size() and n == 0 )
          {  ans.push_back(comb) ;
              return ; 
          }
        for(int i = start ; i <= 9 ; i++ ){
            comb.push_back(i) ;
            helper(comb , k , n - i  , i + 1 ) ;
            comb.pop_back() ; 
        }
        
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>comb ; 
        helper(comb , k , n  , 1 ) ; 
        return ans ; 
    }
};