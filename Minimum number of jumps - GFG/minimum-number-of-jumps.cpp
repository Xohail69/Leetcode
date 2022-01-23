// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int a[], int n){
        // Your code here
       //DP O(n^2) 
    //   vector<int>dp(n , INT_MAX) ;
    //   dp[0] = 0 ;
    //   for(int i = 1 ; i < n ; i++ ) {
    //       for(int j = 0 ; j < i ; j++ ) {
    //           if(dp[j] != INT_MAX and a[j] + j >= i )
    //             dp[i] = min(dp[i] , dp[j] + 1 ) ;
                
    //       }
    //   }
    //   return dp[n-1] ;
       
       
       
       //In O(n) 
       
       if(n == 1) return 0 ;
       else if( !a[0] ) return -1 ;
        int steps = a[0] , MaxR = a[0] , jumps = 1 ;
        for(int i = 1 ; i < n ; i++ ) {
            if( i== n-1 ) return jumps ;
            MaxR = max(MaxR , i + a[i] ) ;
            steps-- ;
            if(steps == 0 ) {
                jumps++ ;
                if( i>= MaxR ) return -1 ;
                steps = MaxR - i ;
            }
            
            
        }
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       

    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends