// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<int> v = nums ;
	    sort(v.begin() , v.end()) ;
	    map<int,int> m ;
	    for(int i = 0  ; i < nums.size() ; i++ ) {
	        m[v[i]] = i ;
	    }
	   // for(auto x : m ) {
	   //     cout<<x.first<<" -> "<<x.second<<endl ;
	   // }
	    int c (0) ;
	    for(int i = 0 ; i < nums.size() ; i++ ) {
	        int idx = m[nums[i]] ;
	        while(i != m[nums[i]] ){
	            swap(nums[i] , nums[m[nums[i]]] ) ;
	            c++ ;
	        }
	        
	    }
        return c ;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends