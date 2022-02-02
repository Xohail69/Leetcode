// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
    //     int pos(1) ;
    //   if(N == 0 or (N & (N-1) ) ) return -1 ;
    //   else {
    //       while(N > 0 ) {
    //           if(N&1 ) break ;
    //           else pos++ ;
    //           N >>= 1 ;
    //       }
    //   }
    //     return pos ;
        
        //
        if(N == 0 or (N & (N-1) ) ) return -1 ;
        return log2(N) + 1 ;
         
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends