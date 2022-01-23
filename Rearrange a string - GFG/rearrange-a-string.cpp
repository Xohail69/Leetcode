// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        vector<int> v(27 , 0 ) ;
        int s=0  ; 
        for(auto x : str) {
            if( isdigit(x) ) s += x - '0' ;
            else v[x - 'A']++ ;
        }
        //for(auto y : v) cout<<y ;
        string sr ;
        for(int i = 0 ; i < 27 ; i++ ) {
            while(v[i]--) sr += char(i + 'A')  ;
        }
        
        sr += to_string(s)  ;
        return sr ;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends