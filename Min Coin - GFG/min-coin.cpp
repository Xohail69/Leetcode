// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
    class Solution{
    	public:
    int dp[10001][100] ;
	int helper(vector<int>&nums , int amount , int size){
	    if(amount == 0 or size == 0 ) {
	        return amount==0 ? 0 : INT_MAX - 1 ; // Subtracting 1 for avoiding overflow
	                                                //later on
	    }
	    if( dp[amount][size] != -1 ) return dp[amount][size] ;
	    if(nums[size-1] > amount ) 
	            return dp[amount][size] = helper(nums , amount , size-1) ;
	   else 
	        return dp[amount][size] = min(helper(nums , amount , size-1 ) , 1+helper(nums , amount-nums[size-1] , size) ) ;
	}
	
	
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    memset(dp , -1 , sizeof(dp)) ;
	    int ans = helper(nums , amount , nums.size() ) ;
	    return ans == INT_MAX-1 ? -1 : ans ; 
	    
	    
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends