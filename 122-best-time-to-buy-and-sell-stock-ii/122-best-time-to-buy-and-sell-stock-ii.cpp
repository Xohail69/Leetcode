class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        ios_base::sync_with_stdio(0) ;
        cin.tie(NULL) ;
        int n = p.size() ;
        int diff = 0 ; 
        for(int i = 1 ; i < n ; i++ ) {
            if(p[i] > p[i-1] )
                diff += p[i] - p[i-1] ;
        }
        return diff ; 
        
        
        
        
        
        
        
    }
};