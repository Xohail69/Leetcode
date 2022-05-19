// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{   
    public:
    
    
    
    
    int transform (string A, string B)
    {
        //code here.
        
        
        
        if(A.length() != B.length() ) return -1 ;
        unordered_map<int,int> m ; 
        for(int i = 0 ; i < A.size() ; i++ ){
            m[A[i] ]++ ;
            m[B[i] ]-- ;
        }
        for(auto &s : m ) {
            if(s.second != 0  ) return -1 ; 
        }
        
        int n = A.size() , i = n -1 , j = n -1  , cunt = 0 ; 
        while(i >= 0 ){
            if(A[i] == B[j] ) i-- , j-- ;
            else cunt++ , i-- ;
        }
       
        return cunt ;
        
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends