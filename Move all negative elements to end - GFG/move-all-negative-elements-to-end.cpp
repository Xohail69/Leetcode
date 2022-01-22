// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int a[],int n)
    {  
       
       vector<int>p , ne ;
       for(int i = 0 ; i< n ; i++ ) {
           if(a[i] < 0 ) ne.push_back(a[i]) ;
           else p.push_back(a[i]) ;
       }
        for(int i = 0 , j(0); i< n ; i++ ) {
            if(i < p.size() ){
                a[i] = p[i] ;
            }
            else a[i] = ne[j++] ;
            
            
            
        }
        // Your code goes here
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends