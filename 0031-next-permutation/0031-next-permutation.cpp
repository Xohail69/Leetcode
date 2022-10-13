class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() ; 
       
        int i  = n - 1 ; 
        
        int last_inc_ix = -1 ; 
        while(i > 0 ){    
            if(nums[i-1]  < nums[i] ){
                last_inc_ix = i ; 
                break ;
            }
            i-- ; 
               
        }
            if(last_inc_ix == -1) {
                reverse(begin(nums) , end(nums) ) ; 
                return ; 
            }
             int j = n-1 , ix = last_inc_ix ;
       
                while(j > last_inc_ix ){
                    if( nums[i] > nums[j] and nums[j] > nums[i-1]  ){
                        ix = j ; 
                       
                        break;
                    }
                    j-- ;
                }
                swap(nums[last_inc_ix - 1] , nums[ix] ) ; 
                sort(nums.begin() + last_inc_ix , nums.end() )  ;
        
        
        
        
    
    }
};