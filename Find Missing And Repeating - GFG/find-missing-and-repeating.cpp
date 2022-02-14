// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a , int n) {
       int *ans = new int[2] ;
      //TC - O(n) and SC - O(1) best 
    //Traverse the array. While traversing, use the absolute value of every
    //   element as an index and make the value at this index as negative to mark it 
    //   visited. If something is already marked negative then this is the repeating 
    //   element. To find missing, traverse the array again and look for a positive
    //   value.
    //   int rep = -1 ; 
    //   for(int i = 0 ; i < n ; i++ ) {
    //      int t = abs(a[i]) ;
        
    //      if(a[t-1] < 0 ) {
    //          rep = abs(a[i]) ; 
    //      }
    //      else a[t-1] *= -1 ;
    //   }
    //   int miss ;
    //   for(int i = 0 ; i < n ; i++ ){
    //       if(a[i] > 0 ) {
    //           miss = i + 1; break ;
    //       }
    //   }
     
    //   ans[0] = rep ;
    //   ans[1] = miss ;
       
       
    //   return ans ;
       
       
       
       
       
       //Using BM //TC - O(n) and SC - O(1) 
       int xorr = 0 ; 
       for(int i  = 0 ; i < n ; i++ ) {
           xorr ^= a[i] ;
       }
       for(int i = 1 ; i<=n ; i++) {
           xorr ^= i ;
       }
       int mask = xorr & ~(xorr - 1) ;
        int x = 0  , y = 0 ;
       for(int i = 0 ; i<n  ; i++ ){
           if(a[i] & mask) x ^= a[i] ;
           else y ^= a[i] ;
       }
       for(int i = 1 ; i <= n ; i++ ) {
           if(i & mask ) x ^= i ;
           else y ^= i ;
       }
       int cx = 0 , cy = 0 ;
       for(int i = 0 ; i < n ; i++ ){
           if(a[i] == x) cx++ ;
           else if(a[i] == y) cy++ ;
       }
       if(!cx) {
           ans[1] = x ;
           ans[0] = y ;
       }
       else {
            ans[1] = y ;
           ans[0] = x ;
       }
       
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