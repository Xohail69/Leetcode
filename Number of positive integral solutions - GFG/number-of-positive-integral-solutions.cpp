// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    long nCr(int n , int r ) {
        if(n < r ) return 0 ; 
        if(n-r < r ) r = n - r ; 
        int dp[n+1] = { 0 } ;
        // memset(dp , 0  , sizeof(dp) ) ;
        dp[0] = 1 ; 
        for(int i = 1 ; i <= n ; i++ ){
            for(int j = min(i , r ) ; j > 0 ; j-- ){
                dp[j] = dp[j] + dp[j-1] ; 
                
            }
        }
        return dp[r] ; 
    }
    
    long posIntSol(string s)
    {   long n = 0 , plus = 0  ;
        for(int i = 0 ; i < s.size() ; i++ ){
            if(s[i] == '+' ) 
                plus++ ;
            if(s[i] == '=' ) {
                    n = stoll(s.substr(i+1)) ;
                    break;
                }
        }
        
        return nCr(n-1 , plus ) ;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends