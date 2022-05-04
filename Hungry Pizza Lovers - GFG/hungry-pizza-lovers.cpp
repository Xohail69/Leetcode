// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends


vector<int> permute(vector<vector<int>> &arr, int n)
{       
    
//     First we make an array of pairs in which we will store the sum of order time and making time in first and index of order +1 in second.

// After that we will sort the array if first value is not equal than we will sort in ascending order of first value , if it is equal than we will sort in descending order of second value which is the index of the order.

// Hence we will store the second value in a separate array and return it as the result.

// Time complexity - O(nlog(n)) (because of sorting).

// space complexity - O(n).
    
    
    vector<pair<int,int>> v  ;
        vector<int> ans ;
    int i = 1 ; 
    for(auto &x : arr ){
        int k = x[0] + x[1] ;
        v.push_back({ k , i }) ;
        i++ ;
    }
    sort(v.begin() , v.end() ) ;

    for(auto &x : v)
        ans.push_back(x.second) ;
    return ans ; 
    
}