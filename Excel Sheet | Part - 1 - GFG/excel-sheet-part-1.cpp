// { Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    string ExcelColumn(int N)
    {
        // Your code goes here
        string t ; 
        while(N) {
            int r  = N%26 ;
            if(r == 0 ){
                t += 'Z'  ;
                N = N/26 - 1 ;
            }
            else {
                t += (r - 1 ) + 'A' ;
                N = N/26 ;
            }
        }
        reverse(t.begin() , t.end() ) ;
        return t ; 
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
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends