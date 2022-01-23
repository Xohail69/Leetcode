// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
    int nextGap(int gap) {
        if(gap <=1 ) return 0 ;
        return ceil(1.0*gap/2) ;
    }
    
	void merge(int a[], int b[], int n, int m) {
	    // Gap method is used:
	    //We start comparing elements that are far from each other rather than adjacent. 
//For every pass, we calculate the gap and compare the elements towards the right of the gap. 
//Every pass, the gap reduces to the ceiling value of dividing by 2.
	    int i , j , gap = n + m ;
	    for(gap = nextGap(gap) ; gap > 0 ; gap = nextGap(gap) ){
	        //comparing ets in first arr 
	        for(i = 0 ; i + gap < n ; i++ ) {
	            if( a[i] > a[i+gap] ) swap(a[i] , a[i+gap]) ;
	        }
	        //comparing ets in both arr 
	        for(j = gap > n ? gap-n : 0 ; i<n and j <m ; i++ , j++){
	            if(a[i] > b[j]) swap(a[i] , b[j] );
	        }
	        if(j < m) {
	            //comparing ets in second arr
	            for(j = 0 ; j+gap < m ; j++ ) {
	                if(b[j] > b[j+gap] ) swap(b[j] , b[j+gap]) ;
	            }
	        }
	        
	        
	    }
	    
	    
	    
	    
	    
	    
	       
	    
	    
	    
	    
	    
	    
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends