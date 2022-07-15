// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    using ll = long long int ; 
    long long int minSum(int a[], int n)
    {
        // Your code goes here
        sort(a , a + n ) ; 
        int i = n -1 , j = i - 1 ; 
        ll n1(0), n2(0) ;
        ll p = 1 ; 
        for( ; i >= 0 ; i -=2 ){
            n1 += p*a[i] ; 
            p *= 10 ;
        }
        p = 1 ; 
         for( ; j >= 0 ; j -=2 ){
            n2 += p*a[j] ; 
            p *= 10 ;
        }
        // cout<<n1<<endl<<n2<<endl ; 
        return n1 + n2 ; 
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends