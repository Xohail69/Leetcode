// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 



 // } Driver Code Ends


class Solution{
  public:
    vector<int> maxProductSubsequence(int *a , int n) 
    { 
        // Complete the function
        vector<int> result (3 , -1 ) ;
        int smaller[n] ;
        set<int> s ;
        for(int i = 0 ; i < n ; i++ ){
            auto obj = s.insert(a[i]) ;
            auto add = obj.first ;
            add-- ;
            if(add == s.end() ) smaller[i] = -1 ;
            else smaller[i] = *add ;
        }
        long long int prod = INT_MIN ;
        int max_in_right = a[n-1] ;
        for(int i = n-2 ; i >=1 ; i-- ){
            if(a[i] >= max_in_right ){
                max_in_right = a[i] ;
            }
            else if(smaller[i] != -1 ){
                long long int p =(long long int ) smaller[i]*a[i]*max_in_right ;
                if(prod < p ){
                    prod = p ;
                    result[0] = smaller[i] ;
                    result[1] = a[i] ;
                    result[2] = max_in_right ; 
                }
            }
        }
        return result ; 
        
        
        
    } 

};

// { Driver Code Starts.
// Driver Program 
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
} 
  // } Driver Code Ends