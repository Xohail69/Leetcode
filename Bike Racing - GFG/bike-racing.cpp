// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    using l = long ; 
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
        
        long low , h , mid ; 
        low = 1 , h = 1e10 ; 
        while(low <= h  ){
            l mid = low + (h-low)/2 ; 
            l total_speed = 0 ; 
            for(l i = 0 ; i < N ; i++ ){
                l speed = H[i]+A[i]*mid ;
                if(speed >= L ) total_speed += speed ; 
            }
            if(total_speed >= M ) h = mid - 1 ;
            else low = mid + 1 ; 
        }
        return low ;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends