class Solution {
public:
    int splitArray(vector<int>& a , int m) {
        int n = a.size() ;
        if( n == 1) return a[0] ;
        int maxi = *max_element(a.begin() , a.end() ) ;
        if(m == n ) return maxi ; //arr will be divided into m equal subarrs , each containing a single et 
        //Applying BS on potential sums
        int l = maxi , h = accumulate(a.begin() , a.end() , 0 ) ;
        int mid , ans = 0 ; 
        
        while(l <= h ) {
            int mid = l + (h-l)/2 ;
            if(isPossible(a , m , mid) ) {
                ans = mid ;
                h = mid - 1 ; //if the potential sum (mid) is possible under m subarr then try to find more min sum 
            }
            else l = mid + 1 ; 
        }
        return ans ;
        
    }
    int isPossible(vector<int> &a , int m , int x) {
        
        int sum = 0  , sa = 1 ; 
        for(auto y : a ) {
            sum += y ; //subarr sum
            if(sum > x ) {
                sa++ ; //inc count of subarr
                sum = y ; //new subarr sum starting
            }
        }
        return sa <= m ;
        
    }
};