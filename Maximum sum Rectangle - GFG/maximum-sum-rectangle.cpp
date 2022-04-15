// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int kadane(vector<int> &v , int n){
      int ans = INT_MIN ; 
      int until = 0 ; 
      for(int i = 0 ; i< n ; i++ ){
          until += v[i] ;
          if(until > ans ) ans = until ;
          if(until < 0 ) until = 0 ;
      }
      return ans ;
  }
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        int ans = INT_MIN ; 
        for(int i = 0 ; i < R ; i++ ){
            vector<int> v(C) ;
            for(int j = i ; j < R ; j++ ){
                for(int col = 0 ; col < C ; col++ ){
                    v[col] += M[j][col] ; 
                }
                ans = max(ans , kadane(v , C )) ;
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
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends