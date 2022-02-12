// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxEvents(int start[], int end[], int N) {
        // code here
        vector<pair<int,int>> v ;
        for(int i = 0 ; i < N ; i++   ) {
            v.push_back({start[i] , end[i] }) ;
        }
        sort(v.begin() , v.end() ) ;
        int ans(0) , day(0) , i (0) ;
         // min heap.. stores the active events
        priority_queue<int,vector<int> , greater<int>> q ;
        while( !q.empty() or i < N ) {
             // empty means that no active events is present .
            if(q.empty() ) day = v[i].first ;
            
             // add all the active events
            while(i < N and v[i].first <= day ) 
                q.push(v[i++].second)  ;
            ans++ ;
            day++ ; 
            q.pop() ; // remove the active event having earliest ending day..
            
            
                // remove rest of the inactive eventss
            while( !q.empty() and q.top() < day ) 
                q.pop() ;
        }
        return ans ; 
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];

        Solution ob;
        cout << ob.maxEvents(start,end,N) << endl;
    }
    return 0;
}  // } Driver Code Ends