// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int a[], int n, int sum)
    {
    	//code here.
    	int csum = 0 , c = 0  ; 
    	unordered_map<int,int> m = {{0 , 1}};
    	for(int i = 0 ; i < n ; i++ ) {
    	    csum += a[i] ;
    	    if(m[csum - sum]){
    	        c += m[csum-sum] ;
    	    }
    	    m[csum]++ ;
    	}
    	return c ;
    	
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}  // } Driver Code Ends