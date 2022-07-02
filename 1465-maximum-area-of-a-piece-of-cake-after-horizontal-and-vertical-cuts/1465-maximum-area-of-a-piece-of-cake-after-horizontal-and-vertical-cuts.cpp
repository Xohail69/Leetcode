class Solution {
public:
    const int mod = 1e9 + 7 ;
    int maxArea(int h, int w, vector<int>& hC ,  vector<int>& vC ) {
        hC.push_back(0) ; 
        hC.push_back(h) ; 
        vC.push_back(0) ; 
        vC.push_back(w) ; 
        sort(hC.begin() , hC.end() ) ; 
        sort(vC.begin() , vC.end() ) ; 
        int l = 1 , b = 1 ; 
        for(int i = 0 ;i < hC.size()-1 ; i++ ){
           l = max ( hC[i+1] - hC[i]  , l )  ;
        }
        for(int i = 0 ; i < vC.size()-1 ; i++ ){
            b = max ( vC[i+1] - vC[i] , b ) ; 
        } 
       
        return (long)l*b%mod ; 
        
        
    }
};