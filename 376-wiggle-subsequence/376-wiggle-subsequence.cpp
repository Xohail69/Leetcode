class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
//         if(nums.size() < 2 ){
//             return 1 ; 
//         }
//         //https://leetcode.com/problems/wiggle-subsequence/discuss/1115385/Short-and-Easy-w-Explanation-or-O(N)-time-O(1)-Space
//         int peak = 1 , valley = 1 ; 
//         for(int i = 1 ; i < nums.size() ; i++ ){
//             if(nums[i] > nums[i-1] ) peak = valley+1 ; 
//             else if(nums[i] < nums[i-1] ) valley = peak+1  ;
//         }
        
        
        
//         return max(peak , valley ) ; 
        
        
        
        
        int n = size(nums), len = 1, prevDiff = 0, currDiff;
	for(int i = 1; i < n; i++){
		currDiff = nums[i] - nums[i - 1];
		if((currDiff > 0 && prevDiff <= 0) || (currDiff < 0 && prevDiff >= 0))
			len++, prevDiff = currDiff;
	}
	return len;
        
        
        
        
        
        
        
        
        
    }
};