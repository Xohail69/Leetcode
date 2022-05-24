// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool help(int start , vector<int> &a , int k , int m ){
        int n = a.size() ;
        if(start >= n ) return 1 ;
        for(int i = start + k - 1 ; i < n ; i++  ){
            if( a[i] - a[start]  > m ) return 0 ;
            if(help(i+1 , a , k , m ) ) return 1  ;
        }
        return 0  ;
    }
    bool partitionArray(int N, int K, int M, vector<int> &A){
        // code here
        sort(begin(A) , end(A) ) ;
        return help(0 , A , K , M ) ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, K, M;
        cin >> N >> K >> M;
        vector<int> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        Solution obj;
        bool ans = obj.partitionArray(N, K, M, A);
        if(ans){
            cout << "YES\n";
        }
        else{
            cout<< "NO\n";
        }
    }
}
  // } Driver Code Ends