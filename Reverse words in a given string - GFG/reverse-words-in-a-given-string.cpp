// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    {       //M1 using iterators 
            // reverse(s.begin() , s.end()) ;
            // auto p = s.begin() ;
            // for(auto it = s.begin() ; it != s.end() ; it++ ) {
            //     if( *it == '.') {
            //         reverse(p , it) ;
            //         p = it + 1  ;
            //     }
            // }
            // reverse(p , s.end()) ;
            // return s; 
            
            
            //M2 using extra space
            vector<string> t ;
            string str  ;
            for(auto x : s ) {
                if(x == '.') {
                    t.push_back(str) ;
                    str = "" ;
                    
                }
                else str += x ;
            }
            t.push_back(str) ;
            str = "" ;
            for(auto it = t.rbegin()  ; it != t.rend() ;it++ ) {
                str += *it + '.' ;
            }
            str.pop_back() ;
            return str ;
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
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