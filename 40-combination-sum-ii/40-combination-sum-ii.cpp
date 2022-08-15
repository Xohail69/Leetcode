class Solution {
public:
    void solve(int ix  , vector<int> &a , int target , vector<int> &v ,  vector<vector<int>>&ans){
        if(target == 0 ) {
            ans.push_back(v) ; 
            return ; 
        }
        for(int i = ix ; i < a.size() ; i++ ){
            if(i > ix and a[i] == a[i-1] ) continue ; 
            if(a[i] > target ) break ; 
            v.push_back(a[i]) ; 
            solve(i + 1 , a , target - a[i] , v , ans ) ; 
            v.pop_back() ; 
            
        }
        
        
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> ans ; 
        vector<int> v ;
        sort(begin(candidates) , end(candidates) ) ; 
        solve(0 , candidates , target  , v , ans ) ; 
        return ans ; 
    }
};