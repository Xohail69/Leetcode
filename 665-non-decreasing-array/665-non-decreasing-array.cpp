class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        // https://leetcode.com/problems/non-decreasing-array/discuss/1190765/Non-decreasing-Array-or-JS-Python-Java-C%2B%2B-or-Simple-Solution-w-Visual-Explanation
        int c(0) ; 
        for(int i = 1 ;  i  <  nums.size() ; i++ ){
            if(nums[i-1] > nums[i] ){
                if( c++ or ( i > 1 and i < nums.size() - 1 and nums[i-2] > nums[i] and 
                           nums[i+1] < nums[i-1] )  )
                    return 0 ; 
            }
        }
        return 1 ; 
        
    }
    
};

