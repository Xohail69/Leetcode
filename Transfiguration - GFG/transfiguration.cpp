// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	if(A.length() != B.length() ) return -1 ; 
    	int sum (0) , c(0) ; 
    	for(int i = 0 ; i < A.size() ; i++ ) {
    	    sum += A[i] ;
    	    sum -= B[i] ;
    	}
    	if( sum ) return -1 ; 
    	int i = A.size() , j = B.size() ; 
    	while(i >= 0 and j >=0 ) {
    	    if(A[i] == B[j] ) {
    	        i-- ; 
    	        j-- ; 
    	    }
    	    else {
    	        i-- ; c++ ;
    	    }
    	}
    	return c ; 
    	
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends