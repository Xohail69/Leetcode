class Solution {
public:
    vector<string> topKFrequent(vector<string>& w , int k) {
        unordered_map<string, int > m  ; 
        for(auto &s : w ){
            m[s]++ ; 
        }
        vector<pair<int,string>> v ; 
        for(auto &[s,f] : m ){
            v.push_back({f , s} )  ; 
        }
        sort(begin(v) , end(v)  ,   
            [&](auto &a , auto &b ){
                if(a.first == b.first ){
                    return a.second < b.second ; 
                    
                }
                return a.first > b.first ; 
            }
            
            
            ) ; 
        vector<string> ans ; 
        for(int i = 0 ; i < k ; i++ )
            ans.push_back(v[i].second) ; 
        return ans ;
    }
};