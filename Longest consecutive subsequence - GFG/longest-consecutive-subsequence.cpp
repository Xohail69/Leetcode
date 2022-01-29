// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int a[], int n)
    {
      //Your code here
      int sz = *max_element(a , a+n ) + 1  ;
      vector<bool> h ( sz , 0 ) ;
      for(int i = 0 ; i < n  ; i ++ ) {
          h[a[i]] = 1  ;
      }
      bool f = 1 ; int c = 1  , ans = INT_MIN ; 
      for(int i = 0 ; i < sz ; i ++ ) {
          if(h[i] and h[i+1] ) c++ ;
         else if ( !h[i+1] ) c = 1 ;
         ans = max(ans , c ) ;
      }
      
      return ans ;
    
      
      
      
      
      
      
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends