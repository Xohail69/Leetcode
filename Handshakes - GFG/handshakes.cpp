// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int count(int n){
        // code here
       
        vector<int> dp (n + 1 , 0 ) ;
         dp[0] = 1 ;
        for(int i = 2 ; i <= n ; i += 2){
            for(int j = 0 ; j <= i - 2 ; j +=2){
                dp[i] += dp[j]*dp[i-2-j] ;
            }
        }
        return dp[n] ;
        
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
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends