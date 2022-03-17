// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{   
    const int mod = 1e9+7 ;
    using lli = long long int ;
  public:
  lli dp[1001][1001] ;
  lli helper(int N , int K , int remV ){
      if(N==0) return 1 ; 
      if(dp[N][remV] != -1 ) return dp[N][remV] ;
      lli choice1 = 0 , choice2 = 0 ;
      if(remV >0 ) {
          choice1 = (5*helper(N-1 , K , remV-1))%mod ; // Use vowel 
          choice2 = (21*helper(N-1 , K , K ))%mod ; 
      }
      else choice2 = (21*helper(N-1 , K , K ))%mod ;
      return dp[N][remV] = (choice1 + choice2)%mod ; 
  }
  
  
    int kvowelwords(int N, int K) {
        // Write Your Code her
        dp[N+1][K+1] ;
        memset(dp , -1 , sizeof(dp) )  ;
        return (int)helper(N, K  , K ) ; 
        
        
        
        
        
        
        
        
        
        
        
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;int K;
        cin >>N>>K;
        
        Solution ob;
        int ans = ob.kvowelwords(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends