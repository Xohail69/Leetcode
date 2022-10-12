class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(begin(nums) , end(nums) ) ; 
        int n = nums.size() ; 
        int ans = 0 ; 
        for(int i = n -1 ; i >=0 ; i-- ){
            if(i >=2 and nums[i] < nums[i-1] + nums[i-2] ){
              return nums[i] + nums[i-1] +  nums[i-2] ; 
                // ans = max(ans , sum ) ; 
            }
        }
        return ans; 
    }
};