class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // if(nums.size() == 1 ) return nums[0] ;
        int csum = 0  , osum = nums[0]  ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
          if(csum >= 0 ) csum += nums[i] ;
            else csum = nums[i] ;
            osum = max(osum , csum ) ; 
        }
        return osum ; 
    }
};