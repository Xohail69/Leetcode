//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	const int mod = 1e9 + 7 ; 
    int sumA(int arr[], int n , int s, int i , int sum, vector<vector<int>>&dp){
	    
	        if(i == n){
	        if(s == sum){
	            return 1;
	        }
	        else return 0;
	    }
	    
	    if(dp[i][s]!=-1){
	        return dp[i][s]%mod;
	    }
	   if(s + arr[i] <= sum ) {
	    int l = sumA(arr,  n , s + arr[i] ,  i+1 , sum, dp);
	    int r = sumA(arr,  n , s,  i+1 , sum, dp);
	    
	    return dp[i][s] = (l+r)%mod;
	   }
	   return dp[i][s] = (sumA(arr , n , s , i+1 , sum , dp ) )%mod ;
	}
	int perfectSum(int arr[], int n, int sum)
	{
	    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        int s =0;
       return sumA(arr,  n , s,  0 , sum, dp);
      
        
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends