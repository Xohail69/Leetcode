class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size() ) ;
        int t = 0;
        for(int i = 0 ; i < nums.size() ; i++ ){
            t += nums[i] ; 
             ans[i] = t ;
        }
        return ans ; 
        
    }
};