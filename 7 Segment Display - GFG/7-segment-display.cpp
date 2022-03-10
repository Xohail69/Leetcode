// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string sevenSegments(string S, int N) {
        if(N == 1 and S[0] == '8') return "8" ;
        int seg[] = {6 , 2 , 5 , 5  , 4 , 5 , 6 , 3 , 7 , 5 } ;
        int sum = 0 ; 
        for(auto x : S)
            sum += seg[x-'0'] ; 
        vector<int> ans(N , 2 ) ; //Inserting 1 i.e 2 segs to every position
        sum -= 2*N ;  // total segs remaining
        int i = 0 ; 
        while(sum >= 4 and i < N ){
            ans[i] += 4 ; // adding 4 cuz 2+4 = 6 segs which is min number 0 
            sum -=4 ; //remaining segs after each addition 
            i++ ;
        }
        ans[N-1] += sum ; 
        string res ; 
        for(int i = 0 ; i < N ; i++ ){
            if(ans[i] == 6 ) res += '0' ;
            else if(ans[i] == 2 ) res += '1' ;
            else if(ans[i] == 3 ) res += '7' ;
            else if(ans[i] == 4 ) res += '4' ;
            else res += '2' ;
        }
        return res ; 
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        string S;
        cin>>S;

        Solution ob;
        cout << ob.sevenSegments(S,N) << endl;
    }
    return 0;
}  // } Driver Code Ends