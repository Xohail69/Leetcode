// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


 // } Driver Code Ends
class Solution
{
    public:
    int build_bridges(string s1, string s2)
    {
        // code here
        // This problem is based on LCS problem
        int n = s1.size() , m = s2.size() ; 
        vector<vector<int>> dp(n+1 , vector<int>(m + 1 , 0 )) ;
        for(int i = 1 ; i <= n ; i++ ){
            for(int j = 1 ; j <= m ; j++ ){
                if(s1[i-1] == s2[j-1] ) dp[i][j] = 1 + dp[i-1][j-1] ;
                else dp[i][j] = max(dp[i-1][j]  , dp[i][j-1] ) ;
                
            }
        }
        return dp[n][m] ; 
    }
};

// { Driver Code Starts.
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        Solution obj;
        cout<<obj.build_bridges(str1,str2)<<endl;
    } 
    return 0;
} 
  // } Driver Code Ends