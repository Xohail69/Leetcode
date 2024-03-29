// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    void preorder(vector<int> &ans , int s , int e , vector<int>& nums){
        if(s <= e){
            int mid = (s+e)/2 ;
            ans.push_back(nums[mid]) ;
            preorder(ans , s , mid -1 , nums ) ;
            preorder(ans , mid+1 , e , nums ) ;
        }
    }

    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> ans ; 
        preorder(ans , 0 , nums.size() - 1 , nums ) ;
        return ans ; 
        
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
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends