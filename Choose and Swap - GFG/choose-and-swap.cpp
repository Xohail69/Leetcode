// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        vector<int> h(26 , -1 ) ; 
        int n = a.size() ;
       for(int i = 0 ; i < n ; i++ ){
           if(h[a[i] - 'a'] == -1 ) 
                h[a[i] - 'a'] = i ; 
       }
       
       int i , j ;
       for(i = 0 ; i < n ; i++ ){
           bool f = 0 ; 
           for(j = 0 ; j < a[i]-'a' ; j++ ){
               if(h[j] > h[a[i] - 'a'] ){
                   f = 1 ; break ;
               }
           }
           if(f) break ;
       }
       
       if(i < n ){
       
       char c1 = a[i] , c2 = char(j + 'a') ;
     
        
        for(auto &x : a ){
            if(x == c1 ) x = c2 ;
            else if( x == c2 ) x = c1 ; 
        }
       }
         return a ; 
        
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends