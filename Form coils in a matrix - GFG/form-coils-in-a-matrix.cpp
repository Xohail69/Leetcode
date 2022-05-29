// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> formCoils(int n) {
        
        // APPROACH:

// the first element will be the middle element → 8*n*n + 2*n
// once we find the middle element, we have to go up, on top we can see that element is decreasing in a pattern → 4*n. So, we use that logic
// next to the right, the element is increasing by 1
// next to the down, the element is increasing in the same pattern as step2 → 4*n (but increasing so change the signFlag)
// next to the right, the element is decreasing by 1 like step 3 so change the sign flag
// after these steps we get the coil1
// once we find coil1, we can subtract total element + 1 - coil1 which gives the coil2 element
// return the 2d array which contains the coil1 and coil2 arrays.
// Time Complexity = O(N^2)

// Space Complexity = O(1)
        int m = 8*n*n ; 
        vector<int> c1(m) , c2(m) ;
        vector<vector<int>> ans ;
        int dir = 1 , steps = 2 ;
        c1[0] = 8*n*n + 2*n ;
        int curr =  c1[0] ;
        int index = 1 ;
        while(index < m ){
            for(int i = 0 ; i < steps ; i++ ){
                curr = curr - 4*n*dir ;
                c1[index] = curr ;
                index++ ;
                if(index >= m) break ;
            }   
            if(index >= m) break ;
            for(int i = 0 ; i < steps ; i++ ){
                curr = curr + dir ;
                c1[index] = curr ;
                index++ ;
                if(index >= m) break ;
            }
            dir = dir*(-1) ;
            steps += 2 ;
        }
        for(int i = 0 ; i < m ; i++ ){
            c2[i] = 16*n*n + 1 - c1[i] ;
        }
        ans.push_back(c1) ;
        ans.push_back(c2) ;
        
        
        
        
        
        
        
        return ans ;
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        vector<vector<int>> ptr = ob.formCoils(n);
        
        for(auto it: ptr)
        {
            for(int i: it)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends