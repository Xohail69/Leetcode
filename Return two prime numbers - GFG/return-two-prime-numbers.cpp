// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void SoE(vector<bool> &isP , int n ) {
        isP[0] = isP[1] = 0 ; 
        for(int p = 2 ; p*p <= n ; p++ ) {
            if(isP[p]){
                for(int i = p*p ; i <= n ; i += p )
                    isP[i] = 0 ; 
            }
        }
        
        
        
        
    }
    vector<int> primeDivision(int n){
        // code here
        vector<bool> isP(n+1 , true ) ;
        SoE(isP , n ) ;
        for(int i = 0  ; i < n ; i++ ){
            
            if(isP[i] and isP[n-i] ) return {i,n-i} ; 
            
            
        }
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends