class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        
        
        
        
        
        
        
        sort(nums.begin() , nums.end() ) ; 
        int n = nums.size() ; 
        int med = 0 ; 
        if(n & 1 ) med = nums[n/2] ; 
        else med = (nums[n/2] + nums[n/2 - 1 ])/2  ; 
        int ans (0) ; 
        // for(int i = 0 ; i < n ; i++ ){
        //     ans += abs(med - nums[i] ) ; 
        // }
        //M2
          for(int i=0; i<n/2; i++){
            ans += nums[n-1-i] - nums[i]; //Adding difference
        }
        
         // we can use nth_element to find the median in O(N) time without having to fully sort 
        //  vector<int>::iterator mid = nums.begin() + nums.size() / 2;
        // nth_element(nums.begin(), mid, nums.end());
        // int ans = 0, median = nums[nums.size() / 2];
        
        
        return ans ; 
        
        
        
        
        
        
        
        
    }
};