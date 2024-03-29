// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        if(T==0 ) return 0 ;
        vector<pair<int , int > >  maal(N) ;
        for(int i = 0 ;i < N ; i++ ){
            maal[i] = { B[i] , A[i] } ;
        }
        sort(maal.begin() , maal.end() ) ;
        int ans = 0 ;
        int i = N-1 ;
        pair<int,int> x ;
        while(i>=0  and T >=0 ) {
             x = maal[i--] ;
            if(T >= x.second ) {
               T -= x.second ;
            ans += x.first*x.second ;
            }
        else{
        ans += x.first*T ;
        break ;
            
        }
            
        }

        
        return ans ;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends