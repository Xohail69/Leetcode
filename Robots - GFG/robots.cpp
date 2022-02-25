// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string moveRobots(string s1, string s2){
        // code here 
        
        
        //M1 in O(n) TC & O(1) SC
    //   int i  = 0  ,  j = 0  , n = s1.size() ; 
    //   while(i < n and j < n ){
    //       while(i < n and s1[i] == '#' ) i++ ; 
    //       while(j < n and s2[j] == '#' ) j++ ; 
    //       if(i < n and j < n ) {
    //           if(s1[i] != s2[j] ) return "No" ; //They can't crossover
    //           else if(s1[i] == 'B' and i > j ) return "No" ; //B can't move left
    //           else if(s1[i] == 'A' and i < j ) return "No" ;//A can't move right
    //           else {
    //               i++ ; j++ ;
    //           }
    //       }
    //       else break ;
    //   }
    //   return (i == n or j == n ) ? "Yes" : "No"  ;
       
       
       
       
       
       //M2 in O(n) TC & O(n) space 
       string a , b ;
       for(auto x : s1) {
           if(x != '#' ) a += x ; 
       }
        for(auto x : s2) {
           if(x != '#' ) b += x ; 
       }
       if(a != b) return "No" ; 
       
    //   . Since A can only move to Left Not to right so we can traverse from end 
    //   and we will check whether Prefix count of A in S1 & S2 . and if count 
    //   of A in S1 is less than count of A in S2 then It is again Not Possible .
    int n = s1.size() ; 
    int c = 0 ; 
    for(int i = n - 1 ; i >= 0 ; i-- ) {// Because A can only Move to left Not Right
        if(s1[i] == 'A') c++ ; 
        if(s2[i] == 'A') c-- ; 
        if(c < 0 ) return "No" ; 
    }
    // Similarly , Since B can only move to Right so we can traverse from start 
    // and we will check whether Prefix count of B in S1 & S2 . and if 
    // count of B in S1 is less than count of B in S2 then It is again Not Possible .
    c = 0 ; 
    for(int i = 0 ; i < n ; i++  ) {
          if(s1[i] == 'B') c++ ; 
        if(s2[i] == 'B') c-- ; 
        if(c < 0 ) return "No" ; 
    }
       return "Yes" ;
       
       
       
       
       
       
       
       
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        Solution ob;
        cout << ob.moveRobots(s1, s2) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends