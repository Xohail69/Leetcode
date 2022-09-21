class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans ; 
        int even = 0 ; 
        for(auto x : nums ) if(x%2==0 ) even += x ; 
        
        for(auto &x : queries ){
            int ix = x[1] , val = x[0] ; 
            if(nums[ix]%2 == 0 ) {
                even -= nums[ix] ; 
            }
            nums[ix] += val ; 
            if(nums[ix]%2 == 0 ) even +=nums[ix] ;
            ans.push_back(even) ; 
        }
        return ans; 
    }
};