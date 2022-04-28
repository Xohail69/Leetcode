// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies , candies + N ) ;
        int min (0)  , max(0) ;
        int i (0) , j (N-1) ;
        int l (N-1) , m (0) ;
        while(i <= j ){
            min += candies[i] ;
            j -= K ;
            i++ ;
            max += candies[l] ;
            l-- ;
            m += K ;
        }
        
        return {min,max} ;
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends