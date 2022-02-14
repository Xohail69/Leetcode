// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a , int n) {
       int *ans = new int[2] ;
      int rep = -1 ; 
       for(int i = 0 ; i < n ; i++ ) {
         int t = abs(a[i]) ;
        
         if(a[t-1] < 0 ) {
             rep = abs(a[i]) ; 
         }
         else a[t-1] *= -1 ;
       }
       int miss ;
       for(int i = 0 ; i < n ; i++ ){
           if(a[i] > 0 ) {
               miss = i + 1; break ;
           }
       }
     
       ans[0] = rep ;
       ans[1] = miss ;
       
       
       return ans ;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends