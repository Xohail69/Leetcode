class Solution {
public:
    
    void helper(int ix , int target , vector<int> &candidates , vector<vector<int>> &ans , vector<int> &v ){
        //we reached end 
        if(ix == candidates.size() ) {
            if(target == 0 ) 
                ans.push_back(v) ;
            return ;
        }
        //pick up the et
        if(candidates[ix] <= target )
        {   v.push_back(candidates[ix]) ;
            helper(ix , target-candidates[ix] , candidates , ans  , v ) ;
            v.pop_back() ;
        }
        helper(ix+1 , target , candidates , ans , v ) ; 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans ; 
        vector<int> v ; 
        helper(0 , target , candidates , ans , v ) ;
        return ans  ;
        
    }
};