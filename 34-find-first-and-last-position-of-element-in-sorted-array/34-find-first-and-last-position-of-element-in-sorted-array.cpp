class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = -1 , last=-1 ; 
        int l = 0  , h = nums.size() - 1  , mid ; 
          if(h == 0 and nums[0] == target ) return {0 , 0 } ;
        while(l <= h ){
            mid = l + (h-l)/2 ; 
            if(nums[mid] == target ){
                int x = mid ; 
                while(x+1 < nums.size() and nums[x] == nums[x+1] ) x++ ;
                last = x ; 
                x = mid ; 
                while(x > 0 and nums[x] == nums[x-1] ) x-- ; 
                first = x ; 
                 return {first , last } ; 
                
            }
            else if(nums[mid] < target ) l = mid + 1 ; 
            else  h = mid - 1 ; 
            
        }
        return {first , last } ; 
        
        
        
    }
};