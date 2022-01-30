class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size() ;
        std::rotate(nums.rbegin() , nums.rbegin()+k ,nums.rend()) ;
      //M2
//         reverse(nums.rbegin() , nums.rend());
//         reverse(nums.rbegin() , nums.rbegin() + nums.size()-k);
//         reverse(nums.rbegin() + nums.size() - k , nums.rend()) ;
        
        //M3
//         Without using reverse iterators 
//         reverse(nums.begin() , nums.end());
//         reverse(nums.begin() , nums.begin()+k);
//         reverse(nums.begin()+k , nums.end());
        
    }
};