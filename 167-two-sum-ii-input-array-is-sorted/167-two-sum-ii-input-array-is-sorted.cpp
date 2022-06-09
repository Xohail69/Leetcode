class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0  , j = nums.size()- 1;
        vector<int>ans(2) ; 
        while(i <= j ){
            int tar = nums[i] + nums[j] ; 
            if(tar == target){
                ans[0] = i+1 ;
                ans[1] = j+1 ; break ;
            }
            else if(tar < target ) i++ ;
            else j-- ;
        }
        return ans ;
    }
};