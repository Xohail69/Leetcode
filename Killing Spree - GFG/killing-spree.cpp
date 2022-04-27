// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
#define lli  long long int
    long long int killinSpree(long long int n)
    {
        // Code Here
        //TLE
        // lli i = 1 , cunt = 0  ;
        // while(n > 0 ) {
        //     lli x = i*i ;
        //     if( x <= n ){
        //         cunt++ ;
        //         n -= x ;
        //     }
        //     i++ ;
        // }
        // return cunt ;
        
        lli l = 1 , h = min(1e6,sqrt(n)); ;
        lli mid , ans = 0  ;
        while(l <= h ){
            mid = l + (h-l)/2 ;
              lli sum = (mid*(mid+1)*(2*mid+1)) / 6;
            if(sum <= n ){
                ans = mid ;
                l = mid+1 ;
            }
            else h = mid-1 ; 
        }
        return ans ; 
        
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends