//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int n, int m, vector<vector<int>>&a)  {
        // code here
        int top =0 ,  left =0 ; 
        int down = n - 1 , right = m -1 ; 
        int d= 0 ; 
        // 0 -->> move right 
        // 1 -->> move down
        // 2 -->> move left
        // 3 -->> move up
        vector<int> ans ; 
        while(top <= down and left <= right ) {
            
            if(d == 0 ){
                for(int i = left ; i <= right ; i++ )
                    ans.push_back(a[top][i])  ; 
                top++ ; 
                
            }
            else if(d == 1 ){
                for(int i = top ; i <= down ; i++ ){
                    ans.push_back(a[i][right]) ; 
                }
                right-- ; 
            }
            else if(d == 2 ){
                for(int i = right ; i >= left ; i-- ){
                    ans.push_back(a[down][i] ) ;
                }
                down-- ; 
            }
            else if(d == 3 ) {
                for(int i = down ; i >= top ; i--)
                ans.push_back(a[i][left]) ;
                left++ ; 
            }
            d = (d+1)%4 ; 
         }
          
         
         
         
        reverse(ans.begin() , ans.end() ) ; 
        return ans; 
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends