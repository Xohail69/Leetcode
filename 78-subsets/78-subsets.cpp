class Solution {
public:
    
       void dfs(vector<vector<int>> &ans , vector<int> &sub , vector<int> &nums , int start){
    ans.push_back(sub) ;
     for(int i = start ; i < nums.size() ; i++ ) {
                sub.push_back(nums[i]) ;
                dfs(ans , sub , nums , i+1 ) ;
                sub.pop_back() ;
            
        }
    
   }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        //M1 using Backtracking
        // vector<int> sub ;
        // vector<vector<int>> ans ;
        // dfs(ans , sub , nums , 0 ) ;
        // return ans ;
        
        
        //More simple & cool solution 
        //https://leetcode.com/problems/subsets/discuss/27511/C%2B%2B-8ms-simple-iterative-solution
        vector<vector<int>> ans(1 , vector<int>() ) ;
       
        for(int i = 0 ; i < nums.size() ; i++ ) {
            int n = ans.size() ;
            for(int j = 0 ; j < n  ; j++  ) {
                // ans.push_back(ans[j]) ; //push back the jth subvector of ans into ans 
                // ans.back().push_back(nums[i]) ; //push back nums et to the subvector pushed above
                
                //Or you can think like this 
                vector<int> t = ans[j] ;
                t.push_back(nums[i]) ;
                ans.push_back(t) ;   
            }
        }
        return ans ; 
        
        
        
        
        
        
        
        
    }
    
  

    
    
    
    
    
    
    
};