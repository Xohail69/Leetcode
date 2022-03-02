// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long countStrings(string s)
    {
       long long m[26] = {0} ; 
       for(int i = 0 ; i < s.size() ; i++ ){
           m[s[i]-'a']++ ; 
           
       }
       long long n = s.length() , ideal = n*(n-1)/2 , useless  = 0  ;
       for(int i = 0 ; i < 26 ; i++ ){
           useless += m[i]*(m[i] - 1)/2  ;
       }
       return useless>0 ? ideal - useless +1 : ideal - useless ;
       
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends