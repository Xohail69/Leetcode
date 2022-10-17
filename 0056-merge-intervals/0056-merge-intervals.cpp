class Solution {
    
public:
    vector<vector<int>> merge(vector<vector<int>>&  a) {
        sort(a.begin() , a.end() ) ; 
             
        vector<vector<int>> ans ; 
        
        // ans.push_back(a[0]) ;
        // for(auto x  = ++a.begin() ; x != a.end() ; x++ ){
        //     auto prev = ans.back()  ;
        //     auto curr = *x ; 
        //     if( curr[0] <= prev[1] ){
        //         ans.pop_back() ; 
        //         ans.push_back({prev[0] , max(curr[1] , prev[1]) } )  ; 
        //     }
        //     else ans.push_back( curr ) ;
        // }
        
        ans.push_back(a[0]) ;
        for(auto &curr : a ){
            auto &prev = ans.back()  ; 
            if(ans.empty() or curr[0] > prev[1]  ){
                ans.push_back(curr) ; 
            }
            else{
                prev[1] = max(prev[1] , curr[1] ) ; 
            }
        }
        return ans ; 
        
    }
};


