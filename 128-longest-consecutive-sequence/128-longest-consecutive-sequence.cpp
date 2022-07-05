class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0 ) return 0 ; 
        if(nums.size() == 1 and nums[0] == 0) return 1 ; 
        sort(nums.begin() , nums.end() ) ; 
        int ans = 0 ; 
        int c = 1 ; 
        for(int i = 0 ; i < nums.size()-1  ; i++ ){
            
           if(nums[i] != nums[i+1]) { 
               if (nums[i] + 1  ==  nums[i+1] ){
                c++ ;
            } 
            else{
            ans = max(ans , c ) ;
            c = 1 ;
            }
           }
        }
        return max(c , ans) ; 
    }
};