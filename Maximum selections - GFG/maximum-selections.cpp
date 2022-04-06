// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        sort(begin(ranges) , end(ranges)  , 
        [&](vector<int> &x , vector<int> &y){
          return x[1] < y[1] ;   
        }
        ) ;
        int cunt = 1 ; 
        auto y = ranges[0] ;
        for(int i = 1 ; i < ranges.size() ; i++  ){
            auto x = ranges[i] ;
            if(y[1] <= x[0] ){
                cunt++ ;
                y = x ;
            }
        }
        return cunt ;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends