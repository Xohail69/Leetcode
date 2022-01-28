// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> a , int n) {
	    // code 
	    long long ans  , mini , maxi  ;
	    ans = mini = maxi = a[0] ;
	    for(int i = 1 ; i < n ; i ++ ){ 
	        if(a[i] < 0 ) swap(maxi , mini ) ; //just visualise it for a sec , if it 
	          //happens then our maxi will become mini& vice versa , hence the swap
	        
	        maxi = max((long long)a[i] , maxi*a[i]) ;  //max of contiguos subarr or current et
	        mini = min((long long)a[i] , mini*a[i]) ;
	        ans = max(ans , maxi ) ;
	        
	}
	return  ans ;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends