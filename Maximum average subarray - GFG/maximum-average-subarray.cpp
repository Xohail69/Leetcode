// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int a[], int n, int k) {
        // code here
    int sum (0 ) ;
    for(int i = 0 ; i < k ; i++ ) sum += a[i] ;
    int idx = 0 ;
    int ans = sum ; 
        int start = 0  , end =  k ;
        for(int i = k ; i < n ; i++ ){
            sum += a[i] ;
            sum -= a[start++] ;
            if(ans < sum ) {
                ans = sum ;
                idx = start ;
            }
        }
        return idx ;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends