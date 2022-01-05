class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      
        vector<vector<int>> ans(1 , vector<int>() ) ;
        sort(begin(nums) , end(nums) ) ;
        for(int i = 0 ; i < nums.size() ; i++ ) {
            int n = ans.size()  , j ;
             if(i == 0 or nums[i] != nums[i-1] ) j = 0 ;
            for(  ; j < n  ; j++  ) {
               
                // ans.push_back(ans[j]) ; //push back the jth subvector of ans into ans 
                // ans.back().push_back(nums[i]) ; //push back nums et to the subvector pushed above
                
                //Or you can think like this 
                vector<int> t = ans[j] ;
                t.push_back(nums[i]) ;
                ans.push_back(t) ;   }
            
        }
        return ans ; 
    }
};