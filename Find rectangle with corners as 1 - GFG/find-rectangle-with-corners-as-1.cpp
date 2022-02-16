// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map>
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
        // Your code goes here
        unordered_map<int,unordered_set<int>> dp ; 
        for(int i = 0 ; i < matrix.size() ; i++ ){
            for(int j = 0 ; j < matrix[0].size() ; j++ ){
                if(matrix[i][j] == 1 ){
                    for(int k = j+1 ; k < matrix[0].size() ; k++ ){
                        if(matrix[i][k] == 1){
                            if(dp.find(j) != dp.end() and dp[j].find(k) != dp[j].end())
                            return 1 ;
                            dp[j].insert(k) ;
                        }
                    }
                }
            }
        }
        return 0 ;
        
        
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int row, col;
        cin>> row>> col;

        vector<vector<int> > matrix(row);
            
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        if (ob.ValidCorner(matrix)) 
            cout << "Yes\n"; 
        else
            cout << "No\n"; 
    }

    return 0;
} 


  // } Driver Code Ends