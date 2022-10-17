class Solution {
    
public:
    vector<vector<int>> merge(vector<vector<int>>&  a) {
        sort(a.begin() , a.end() ) ; 
        // auto prev = a.begin() ; 
        // for(auto x = a.begin() ; x != a.end() ; x++ ){
        //     if( (*x)[0] < (*prev)[1] ){
        //         (*prev)[1] = (*x)[1] ; 
        //     }
        //     prev = x ;
        // }
        // return a ; 
        
        vector<vector<int>> ans ; 
        // auto prev = a.begin() ; 
        ans.push_back(a[0]) ;
        for(auto x  = ++a.begin() ; x != a.end() ; x++ ){
            auto prev = ans.back()  ;
            auto curr = *x ; 
            if( curr[0] <= prev[1] ){
                ans.pop_back() ; 
                ans.push_back({prev[0] , max(curr[1] , prev[1]) } )  ; 
            }
            else ans.push_back( curr ) ;
        }
        return ans ; 
    }
};