class Solution {
public:
    int trap(vector<int>& h ) {
        int n = h.size() ; 
        int l[n] , r[n] ; 
        l[0] = h[0] ; 
        for(int i = 1 ; i < n ; i++ ) {
            l[i] = max(l[i-1] , h[i] ) ; 
        }
        r[n-1] = h[n-1] ; 
        for(int i = n-2 ; i >=0 ; i--){
            r[i] = max(r[i+1] , h[i] ) ; 
        }
        int ans = 0 ; 
        for(int i = 1 ; i < n - 1; i++ ){
            int w = min(l[i-1] , r[i+1]) ;
            if(w > h[i] )
                ans += w - h[i] ; 
        }
        return ans ; 
        
        
    }
};