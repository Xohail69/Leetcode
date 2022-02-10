class Solution {
public:
    int findPairs(vector<int>& a, int k) {
//         unordered_map<int,int> m ;
//         for(auto x: a) m[x]++  ;
//         int c =0;
//         for(auto x: m){
//         if(k==0) {    
//             if(x.second>1)
//             c++;
//             }
//             else if(m.find(x.first+k)!=m.end())
//                 c++;            
//             }
//         return c ;
        
        
        
        
        sort(a.begin() , a.end()) ;
        set<int>s ;
        for(auto i = a.begin() ; i != a.end() ; i++ ) {
            if(binary_search( i+1 , a.end() , *i + k )){
                s.insert(*i) ;
            }
        }
        return s.size() ;
        
        
        
        
    }
};