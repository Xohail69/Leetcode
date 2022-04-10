// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends


class Solution{
public:
    int minOperations(int *a,int n)
    {   
        int ans(0) ;
        priority_queue<int, vector<int> , greater<int> > p ; 
        for(int i = 0 ; i < n ; i++ ){
            if(!p.empty() and p.top() < a[i] ){
                ans += a[i] - p.top() ;
                p.push(a[i]) ;
                p.pop() ;
            }
            p.push(a[i]) ;
        }
        return ans ; 
            
        
         
    }
};

// { Driver Code Starts.

int main() {
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        cout<<ob.minOperations(a,n)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends