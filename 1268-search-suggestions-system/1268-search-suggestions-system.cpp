class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        sort(products.begin() , products.end() ) ; 
        vector<vector<string>> ans ; 
        int start , bsStart = 0 , n = products.size() ; 
        string prefix ; 
        for(auto &x : searchWord){
            prefix += x ; 
            start = lower_bound(products.begin() + bsStart , products.end()  , prefix ) - products.begin() ; 
            ans.push_back({}) ;
            for(int i = start ; i < min(start + 3 , n ) and  !products[i].compare(0 ,                                                                   prefix.length() , prefix )  ; i++ ){
                ans.back().push_back(products[i] ) ;
            }
            bsStart = start ; 
        }
        return ans ; 
        
        
        
        
    }
}; 