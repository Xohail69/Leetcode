class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//         Count number of solutions to a + b + c + d  = 0
// ⇒ a + b = -(c + d)
// Iterate through the first 2 arrays and count the frequency of all possible sums of pairs
// Iterate through the other 2 arrays and sum up the frequency of -(c + d) where c and d are all possible pairs in these 2 arrays. -(c + d) should be equal to a + b for a valid solution.
// The number of such matches is the required result

        unordered_map<int,int> m ;
        for(auto i : nums1) {
            for(auto j : nums2 ) m[i+j]++ ;
        }
        int c(0) ;
        for(auto k : nums3) {
            for(auto l : nums4) c += m[ -k - l ] ;
        }
        return c ; 
        
    }
};