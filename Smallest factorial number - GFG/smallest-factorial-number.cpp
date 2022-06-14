// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
 int fives(int n ){
         
          int res=0;
        while(n){
            n/=5;
            res+=n;
        }
        return res;
 }
    
    
        int findNum(int n)
        {
        //complete the function here
        int l = 5 , h = 5*n , ans = -1 ; 
        while(l <=h ){
            int mid = l + (h-l)/2 ; 
            int cunt = fives(mid) ; 
            if(cunt >= n ){
                ans = mid ;
                h = mid - 1 ;
            }
            else l = mid + 1  ;
        }
        return ans ; 
        
        
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends