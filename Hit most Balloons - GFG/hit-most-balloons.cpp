// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int mostBalloons(int N, pair<int, int> a[]) {
        // Code here
        
        int ans = 0 ; 
        for(int i =  0 ; i < N ; i++ ) {
            int x1 = a[i].first ; 
            int y1 = a[i].second ; 
            int cunt = 0 ; 
            unordered_map<double,int> m  ;
            for(int j = 0 ; j < N ; j++ ){
                int x2 = a[j].first ;
                int y2 = a[j].second ; 
                if(x2 == x1 and y2 == y1 ){
                    cunt++ ; continue ; 
                }
                else {
                    double slope = (double)(y2-y1)/(double)(x2-x1) ; 
                    m[slope]++ ;
                }
            }
            for(auto p : m ){
                ans = max(ans , p.second + cunt ) ;
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
        int N;
        cin >> N;
        pair<int, int> arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < N; i++) {
            cin >> arr[i].second;
        }
        Solution ob;
        cout << ob.mostBalloons(N, arr) << endl;
    }
}  // } Driver Code Ends