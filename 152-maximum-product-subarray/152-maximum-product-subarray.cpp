class Solution {
public:
    int maxProduct(vector<int>& a) {
        //M1
        int ans , maxi , mini ;
        //Why do we need to maintain the minimum product while we are asked for a maximum? The fact is that elements in nums can be negative, so it possible that for some negative element the previous min possible product can turn the current product into a greater value.
       
//         ans = maxi = mini = a[0] ;
//         for(int i = 1 ; i < a.size() ; i++ ) {
//             if(a[i] < 0 ) swap(maxi , mini )  ;
//             maxi = max(a[i] , a[i]*maxi) ;
//             mini = min(a[i] , a[i]*mini) ;
//             ans = max(ans , maxi ) ;
            
//         }
//         return ans ;
        
        
        
        
        //M2
        int n = a.size(), res = a[0], l = 1, r = 1;
        for (int i = 0; i < n; i++) {
            l =  (l) * a[i];
            r =  (r) * a[n - 1 - i];
            res = max(res, max(l, r));
            if(l==0)l=1;
            if(r==0)r=1;
        }
        return res;
        
        
        
        
        
    }
};