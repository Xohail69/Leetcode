class Solution {
public:
    vector<string> topKFrequent(vector<string>& w , int k) {
        // unordered_map<string, int > m  ; 
        // for(auto &s : w ){
        //     m[s]++ ; 
        // }
        // vector<pair<int,string>> v ; 
        // for(auto &[s,f] : m ){
        //     v.push_back({f , s} )  ; 
        // }
        // sort(begin(v) , end(v)  ,   
        //     [&](auto &a , auto &b ){
        //         if(a.first == b.first ){
        //             return a.second < b.second ; 
        //         }
        //         return a.first > b.first ; 
        //     } ) ; 
        // vector<string> ans ; 
        // for(int i = 0 ; i < k ; i++ )
        //     ans.push_back(v[i].second) ; 
        // return ans ;
        
        
        
        
//         Using Priority Queue 
         unordered_map<string, int > m  ; 
        for(auto &s : w ){
            m[s]++ ; 
        }
       auto comp =  [&](auto &a , auto &b ){
                if(a.first == b.first ){
                    return a.second < b.second ; 
                }
                return a.first > b.first ; 
            }  ; 
        priority_queue<pair<int,string> , vector<pair<int,string>> , decltype(comp) > p(comp) ; 
        for(auto &[s , f ] : m ){
            p.push({f , s}) ; 
            if(p.size() > k ) p.pop()  ; 
        }
          vector<string> ans ; 
        while(p.size() ) {
            ans.push_back(p.top().second) ;
            p.pop() ; 
        }
        reverse(begin(ans) , end(ans) ) ; 
        return ans ;

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};