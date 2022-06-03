// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    using ll = long long  ;
    int isPossible(long long S, long long N, long long X, long long A[])
    {
        // code here
        vector<ll>v ;
        v.push_back(S) ;
        ll ts = S ;
        for(int i = 0 ; i < N ; i++ ){
            ll num = ts + A[i] ;
            if(num >= X ) break ;
            v.push_back(num) ; 
            ts += num ; 
        }
        // for(auto x : v ) cout<<x ;
        while(X){
            if(v.empty() ) break ;
            if(v.back() <= X ) X -= v.back() ;
            v.pop_back() ;
        }
        
        return !X ;
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends