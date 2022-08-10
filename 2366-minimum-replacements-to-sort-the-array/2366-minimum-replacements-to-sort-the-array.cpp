class Solution {
public:
    typedef long long int ll ;
    long long minimumReplacement(vector<int>& a) {
        ll ans(0)  ;
        ll n=a.size() , next = 1e9 + 7 ; 
        for(int j = n - 1 ; j >= 0 ; j-- ) {
            if(a[j] <= next ){
                next = a[j] ; 
                continue ; 
            }
            ll parts = ceil(a[j]/(double)next ) ; 
            ans += parts - 1 ; 
            next =  a[j]/parts ; 
        }
        return ans ; 
        
        
        
       
        
        
        
        
        
        
        
//        
        
        
        
    }
};