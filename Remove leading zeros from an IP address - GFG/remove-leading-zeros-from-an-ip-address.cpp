// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        //code here.
        // string t ;
        // int i = 0 ;
        // while( i < s.size()) {
        //   if(s[i] == '.' ) { i++ ;
        //     t += '.' ;
        //   while(s[i] == '0') i++ ;
        //   while(s[i] != '.' ) t += s[i++] ;
        //  //  t += '.' ;
               
        //   }
        //   else if(i <s.size() and s[i] != '.') t += s[i++] ;
        // }
        // return t ; 
        
        string ans ;
        for(int i = 0 ; i< s.size() ; i++ ){
            string t ;
            while(i < s.size() and s[i] == '0' ) i++ ;
            while(i < s.size() and s[i] != '.' ) t += s[i++] ;
            if(t.size() == 0 ) t = '0' ;
            if(i < s.size() ) ans += t + '.' ;
            else ans += t ;
        }
        return ans ;
        
        
        
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends