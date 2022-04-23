// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>a, int n, int k)
    {
        // code here
        
       
        // for(int i = 0 ; i < n ; i++ ){
        //     if(a[i] == k ) {
        //         return i ;
        //     }
        //     else if(a[i] > k ) {
        //         return i ;
        //     }
        // }
        
        int l = 0  , h = n - 1 ;
        int mid ; 
        while(l <=h ){
            mid = l + (h-l)/2 ; 
            if(a[mid] == k ) return mid ; 
            else if(a[mid] > k ) h = mid - 1 ;
            else l = mid + 1 ;
        }
        return l ;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends