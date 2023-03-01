class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end() ) ; 
        int mini = *min_element(nums.begin() , nums.end() ) ; 
        unordered_map<int,int> count ; 
        for(auto x : nums ) 
            count[x]++ ;
        int ix = 0 ; 
        for(int x = mini ; x <= maxi ; x++ ){
            while(count[x] > 0 ) {
                nums[ix] = x ; 
                ix++ ; 
                count[x]-- ; 
            }
        }
        return nums  ; 
    }
};