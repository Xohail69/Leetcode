class Solution {
public:
    int threeSumClosest(vector<int>& a , int target) {
        if(a.size()==1 || a.size() == 0 ) return {} ;
    
        sort(a.begin() , a.end() ) ;
        int n = a.size() ;
         int res = a[0] + a[1] + a[n-1] ;
        for(int i = 0 ; i < n-2 ; i++ ) {
          
            int l = i  + 1 , r = n-1 ;
            while(l < r ) {
               int s = a[i] + a[l] + a[r] ;
                if( abs(target - s ) < abs(res - target)  ) {
                   res = s ;
                }
                else if(s > target ) r-- ;
                else l++ ;
            }
        
        }
        
        return res ;
    
    }
};