class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m = 0 , i = 0 , n = nums.size() , j = n - 1 ;
        while(m <= j ){
            if(nums[m] == 0 ) swap(nums[i++] , nums[m++]) ;
            else if(nums[m] == 2 ) swap(nums[j--] , nums[m]) ;
          else  m++ ; 
        }
        
       
        
    }
};