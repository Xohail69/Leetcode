class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0 ;
        for(auto &m: nums ) x ^= m ;
        return x ;
    }
};