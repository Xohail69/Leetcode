// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string a[], int n)
    {
        // code 
        
        sort(a , a+n ) ;
        string x = a[0] , y = a[n-1] , ans  ;
        for(int i = 0 ; i < a[0].size() ; i++ ){
            if(x[i] == y[i] ) ans += x[i] ;
            else break ;
        }
        if(ans.size() > 0 ) return ans ; 
        return "-1" ;
        
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends