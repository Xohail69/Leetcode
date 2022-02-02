// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countSmallerEqual(vector<int> &a , int target ) {
        int l(0) , h(a.size() - 1) , mid ;
        while(l <= h ) {
            mid = l + (h-l)/2 ; 
            if(a[mid] <= target ) l = mid + 1 ;
            else h = mid - 1 ;
        }
        return l ;
    }
    int median(vector<vector<int>> &A , int r, int c){
        // code here    
        
        int l = 1  , h = 2001 , mid ;
        while(l <= h ){
            mid = l + (h-l)/2 ;
            int cunt = 0 ;
            for(int i = 0 ; i < r ; i ++ ) {
                cunt += countSmallerEqual(A[i] , mid) ;
            }
            if(cunt <= (r*c)/2 ) l = mid + 1 ;
            else h = mid - 1 ; 
        }
        return l ;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends