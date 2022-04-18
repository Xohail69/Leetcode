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
    long long karyTree(int m, int h) {
        // code here
        // ll mh = pow(m , h ) ;
        
        // ll i = ((mh-1)/(m-1))%mod ;
        // ll e = ((m-1)*i)%mod + 1 ;
        // return e%mod ;
        
        // ll ans = 1LL ;
        // while(h > 0 ){
        //     ans *= m ;
        //     ans %= mod ;
        //     h-- ;
        // }
        // return ans ;
        
        
          long sol = 1L;
        while(h>0){
            sol = sol*m;
            sol = sol%1000000007L;
            h--;
        }
        
        return sol;
        
        
        
        
        
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