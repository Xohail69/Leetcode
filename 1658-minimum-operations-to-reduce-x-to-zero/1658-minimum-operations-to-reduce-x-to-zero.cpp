class Solution {
public:
    int minOperations(vector<int>& nums , int x) {
      
        if(nums[0] > x  and nums.back() > x ) return -1 ; 
        int sum =  accumulate(nums.begin() , nums.end() , 0 ) ;
        if(sum < x ) return -1 ; 
       int target = sum - x ; 
        if(target == 0 ) return nums.size()  ;
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