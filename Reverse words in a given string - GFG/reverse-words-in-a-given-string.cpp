// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    {
            reverse(s.begin() , s.end()) ;

            auto p = s.begin() ;
            for(auto it = s.begin() ; it != s.end() ; it++ ) {
                if( *it == '.') {
                    reverse(p , it) ;
                    p = it + 1  ;
                }
            }
            reverse(p , s.end()) ;
            return s; 
            
        // code here 
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends