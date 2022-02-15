// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int a[], int n, int k) {
        // Complet the function 
        
      int cunt = 0  ;
      for(int i = 0  ; i < n ; i++ ) {
          if(a[i] <= k ) cunt++ ;
      }
      int  ans = INT_MAX ;
      int bad = 0 ; 
      for(int i = 0 ; i < cunt ; i++ ) 
     { if(a[i] > k ) bad++ ;}
     
     int j = cunt  , i = 0 ;
      ans = bad ; 
      while(j < n){
       
        if(a[j] > k ) bad++ ; 
        if(a[i] > k ) bad-- ; 
        i++ ;  j++  ;
        ans = min(ans , bad ) ;
      }
      return ans ; 
    }
    
    
    
    
    
    
    
    
    
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends