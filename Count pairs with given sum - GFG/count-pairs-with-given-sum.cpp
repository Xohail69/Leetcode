// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
       unordered_map<int , int > m ;
       int c (0) ;
       for(int i = 0 ; i < n ; i++ ){
           if( m.find(k - a[i]) != m.end() ) c += m[k - a[i]] ;
           m[a[i]]++ ;
       }
       return c ;
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends