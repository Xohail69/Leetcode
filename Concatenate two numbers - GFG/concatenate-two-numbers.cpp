// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> nums ){
        // code here
        unordered_map<string,int> m ; 
        for(auto x: nums  ){
            m[to_string(x)]++ ;
        }
        long long ans (0) ; 
        string x = to_string(X) ; 
        int n = x.size() ; 
        for(int i = 0 ; i < n ; i++  ){
            string x1 = x.substr(0 , i ) ; 
            string x2 = x.substr(i) ; 
            if(m[x1] > 0 and m[x2] > 0 ){
  //if x1 and x2 are different and there are present in our map then multiply it by
                 //their count value and add them in our ans 
                if( x1 != x2 ) 
                    ans += m[x1]*m[x2] ; 
                    
                     //Else if they are same (like 1212 have 12 12),
                    //then only add in count if x1 has come more than once
                else  // IF X IS 22
                    ans += m[x1] * ( m[x1] - 1 ) ; 
            }
            
            
            
        }
  
    
    return ans;
  
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends