// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
       //long long ans = 0 ;
    //   for(int i = 1 ; i<n-1 ; i++ ) {
    //       int left = a[i] ;
    //       for(int j = 0 ; j< i ; j++)
    //       left = max(left , a[j]) ;
    //       int right = a[i] ;
    //       for(int j = i + 1 ; j < n ; j++ ){
    //           right = max(right , a[j]) ;
    //       }
    //       ans = ans + ( min(left , right) - a[i] ) ;
    //   }
    //   return ans ;
        
        int left[n] , right[n] ;
          long long ans = 0 ;
          left[0] = a[0] ;
          for(int i = 1 ; i < n ; i++ ) {
              left[i] = max(left[i-1] , a[i]) ;
          }
          right[n-1] = a[n-1] ;
          for(int i = n-2 ; i >=0 ; i--){
              right[i] = max(right[i+1] , a[i]) ;
          }
        for(int i =1 ; i< n-1 ; i++ ){
            int water = min(left[i-1] , right[i+1]) ;
            if(water > a[i]) 
            ans += water - a[i] ;
        }
        return ans ;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends