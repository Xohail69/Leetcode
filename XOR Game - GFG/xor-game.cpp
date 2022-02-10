// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int xorCal(int k){
       
        if(k == 1) return 2; // basic case
        if((k&1) == 0) return -1; // even values of k is never possible to have n^(n + 1)
        int a = k/2; // we have to calculate min number possible math :
        // n^(n + 1)=n+(n+1) (only when n + 1 is a power of two) -> k=n+(n+1) -> k=2*n+1 and hence n = (k - 1)/2;
        if((a&(a + 1)) != 0) return -1;
        return a;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        
        Solution ob;
        cout<<ob.xorCal(k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends