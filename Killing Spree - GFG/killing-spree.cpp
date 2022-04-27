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
        
        // lli l = 1 , h = min(1e6,sqrt(n)); ;
        // lli mid , ans = 0  ;
        // while(l <= h ){
        //     mid = l + (h-l)/2 ;
        //       lli sum = (mid*(mid+1)*(2*mid+1)) / 6;
        //     if(sum <= n ){
        //         ans = mid ;
        //         l = mid+1 ;
        //     }
        //     else h = mid-1 ; 
        // }
        // return ans ; 
        
        //M2 
        //Note: square series increases in a order
//  1, (1+3)=4, (4+5)=9, (9+7)=16, (16+9)=25, (25+11)=36…….
// here we can observe a series has being 
// added with previous result, i.e series of odd numbers(1,3,7,9,11….)


        lli cunt = 0 ;
        lli x = 1  , strength = 1 ;
        while(n >= strength ){
            cunt++ ;
            n -= strength ; 
            x += 2 ; // generating odd numbers 1 , 3 , 5 , 7 ......
            strength += x ;//generating squares 1 , 1+3 , 4+5 , 9+7 ......... 
        }
        return cunt ; 
        
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