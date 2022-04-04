// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string previousNumber(string s){
      int largest = s.size() - 2 ; 
      while(largest >= 0  and s[largest] <= s[largest+1] )
        largest-- ;
        if(largest < 0 ) return "-1" ;
        int smallest = s.size() - 1; 
        while(smallest > largest and s[largest] <= s[smallest] )
            smallest-- ;
        while(smallest >0 and s[smallest-1] == s[smallest] )
            smallest-- ; 
        swap(s[largest] , s[smallest] ) ;
        if(s[0] == '0') return "-1" ;
        return s ; 
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.previousNumber(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends