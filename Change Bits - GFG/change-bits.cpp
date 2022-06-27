// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        int m = N , i = 0 , purana = N  ; 
        while(m){
            if( !(m&1) ){
                N |= (1<<i)  ;
            }
            m >>= 1 ; 
            i++ ;
        }
        return { N - purana  ,  N } ;
        
        
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
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends