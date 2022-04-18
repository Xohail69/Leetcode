// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  #define ll long long 
  const int mod = 1e9 + 7 ;
  ll power_optimised(ll a , ll n) {   // to calculate a^n
      ll ans = 1LL ;
      while(n>0){
          ll last_bit = n&1 ; 
          if(last_bit) ans = (ans*a)%mod ;
          a = (a*a)%mod ; //square up
          n = n>>1 ; // discard last bit of n 
      }
      return ans ;
  }
    long long karyTree(int m, int h) {
    //No. of leaf nodes = m^h  as at each level m*(no. of nodes existing at a level)
    //keep merging up which results in above relation
        
        //   long sol = 1L;
        // while(h>0){
        //     sol = sol*m;
        //     sol = sol%1000000007L;
        //     h--;
        // }
        
        // return sol;
        //
        return power_optimised(m , h ) ;
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,m;
        
        cin>>k>>m;

        Solution ob;
        cout << ob.karyTree(k,m) << endl;
    }
    return 0;
}  // } Driver Code Ends