class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k == nums.size() ) return nums ; 
        map<int,int> m ;
        for(auto x : nums) m[x]++ ; 
        auto comp = [&](int x , int y) {
            return m[x] > m[y] ;
        };
        priority_queue<int,vector<int> , decltype(comp) > p(comp) ;
        for(auto &y : m ){
            p.push(y.first) ;
            if(p.size() > k ) p.pop() ;
        }
        vector<int> ans ; 
        while(k--) { ans.push_back(p.top()) ; p.pop() ; }
        return ans; 
        
    }
};