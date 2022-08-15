class Solution {
public:
    void solve(int ix  , vector<int> &a , int target , vector<int> &v ,  vector<vector<int>>&ans){
        if(target == 0 ) {
//base case
        //when the combination ds is carrying is a valid one add it into th ans
            ans.push_back(v) ; 
            return ; 
        }
        for(int i = ix ; i < a.size() ; i++ ){
            
              //to avoid picking up the same elements and thus avoiding duplicates (no picking of element)
            if(i > ix and a[i] == a[i-1] ) continue ; 
            
            
            // no point of it to add it to the ans if the  candidate at ith element exceeds the target no picking up hence break 
            if(a[i] > target ) break ; 
            
            
            v.push_back(a[i]) ; 
            solve(i + 1 , a , target - a[i] , v , ans ) ; //call for next  index element
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


