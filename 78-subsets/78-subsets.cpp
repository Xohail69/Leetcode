class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> sub ;
        vector<vector<int>> ans ;
        dfs(ans , sub , nums , 0 ) ;
        return ans ;
        
    }
    
   void dfs(vector<vector<int>> &ans , vector<int> &sub , vector<int> &nums , int start){
    ans.push_back(sub) ;
     for(int i = start ; i < nums.size() ; i++ ) {
                sub.push_back(nums[i]) ;
                dfs(ans , sub , nums , i+1 ) ;
                sub.pop_back() ;
            
        }
    
   }
};