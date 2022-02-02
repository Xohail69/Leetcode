class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        unordered_map<int, int> m ;
        for(auto x: a ) m[x]++ ;
        int n = floor(1.0*a.size()/3) ;
        vector<int> ans ;
        for(auto y : m ) {
            if(y.second > n ) ans.push_back(y.first) ;
        }
        return ans ; 
    }
};