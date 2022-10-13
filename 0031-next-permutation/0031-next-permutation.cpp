class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() ; 
        bool f = 1 , g = 0 ;
        for(int i = n -1 ; i >=1 ; i-- ){
            if(nums[i-1]  < nums[i] ){
                g = 1 ; 
                int j = n-1 ;
                while(j > i ){
                    if( nums[i] > nums[j] and nums[j] > nums[i-1]  ){
                        swap(nums[j] , nums[i-1] ) ; 
                        f = 0 ;
                        break;
                    }
                    j-- ;
                }
                if( f ) {
                    swap(nums[i-1] , nums[i] ) ; 
                    
                }
                sort(nums.begin() + i , nums.end() ) ; 
            break;
            }
        }
        if(!g ) reverse(nums.begin() , nums.end() )  ;
        
        
        
        
    
    }
};