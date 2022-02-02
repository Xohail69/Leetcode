// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
//Instead of using this fuction we can directly use upperbound 
    int countSmallerEqual(vector<int> &a , int target ) {
        //We are finding a number which is just greater than the target becuz 
        //its index can give us the count of numbers which are smaller or equal to 
        // target .
        
        int l(0) , h(a.size() - 1) , mid ;
        while(l <= h ) {
            mid = l + (h-l)/2 ; 
            if(a[mid] <= target ) l = mid + 1 ;
            else h = mid - 1 ;
        }
        return l ;
    }
    int median(vector<vector<int>> &A , int r, int c){
        //If n is total number of elements & is odd then 
        // The idea is that for a number to be median there should be exactly (n/2) numbers 
        //which are less than this number. So, we try to find the count of numbers less than
        //all the numbers.   
        // here our n is r*c ;
        int l = 1  , h = 2001 , mid ;
        while(l <= h ){
            mid = l + (h-l)/2 ; //Choosing a potential candidate for median 
            int cunt = 0 ;
            for(int i = 0 ; i < r ; i ++ ) {
                //counting row wise how many elements are smaller or equal to mid in 
                // and adding them 
                //cunt += countSmallerEqual(A[i] , mid) ;
                cunt += upper_bound(A[i].begin() ,A[i].end() , mid) - A[i].begin() ;
            }
            if(cunt <= (r*c)/2 ) l = mid + 1 ; //if count is less than n/2 then increase l
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