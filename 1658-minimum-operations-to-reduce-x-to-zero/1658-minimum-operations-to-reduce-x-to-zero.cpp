class Solution {
public:
    int minOperations(vector<int>& nums , int x) {
      
        
//         main point is that if successfully remove elements such that sum of removed elements is X , then
//  1. sum of remaining array elements will be (sum-X)
// 2.  remaing array will be subarray of original array.
//         So , now our task is find subaarray whose sum is (sum - X) and its length is maximum ( because we want to remove minimum number of elements , so we will have to maximise remianing element ) .

// TC - O(N)
// SC - O(1)
        
        
        
        if(nums[0] > x  and nums.back() > x ) return -1 ; 
        int sum =  accumulate(nums.begin() , nums.end() , 0 ) ;
        if(sum < x ) return -1 ; 
       int target = sum - x ; //We have to find max len subarray whose sum equals target
        if(target == 0 ) return nums.size()  ;
        
        
        //Using sliding window 
        int l = 0  , n = nums.size() , r = 0 , t = 0 , ans = 0 ; 
        while(r < n ){
            t += nums[r]  ;
            while(l <= r and t > target  ){
                t -= nums[l++] ;
            }
            if(t == target ) {
                ans = max(ans , r - l + 1 ) ; 
            }
            r++ ; 
        }
    
        return ans ? n - ans : -1 ;
   
    }
};