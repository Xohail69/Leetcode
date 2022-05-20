// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string S1, string S2) {
        // code here
        int ans(0) , prev(0) ;
        // for(auto x : S2){
        //     int y = S1.find(x)  ;
        //     ans += abs(prev - y)  ;
        //     prev = y ;
        // }
        
        vector<int> h(26 , 0 ) ;
        for(int i = 0 ; i < S1.size() ; i++  )
            h[S1[i]-'a'] = i ; 
        for(auto x : S2){
            int ix = h[x - 'a'] ;
            ans += abs(prev - ix) ;
            prev = ix ;
        }
        
        return ans ; 
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends