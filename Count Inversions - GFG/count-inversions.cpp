// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  #define ll long long
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long a[], long long N)
    {
        // Your Code Here
        
        ll t[N] ;
        return mergeSort(a , t , 0 , N-1 ) ;
        
    }
    ll mergeSort(ll a[] , ll t[] , ll l , ll r) {
        ll mid , inv = 0 ;
        if(r > l){mid = (r + l)/2 ;
        inv += mergeSort(a , t , l , mid) ;
        inv += mergeSort(a , t , mid+1 , r) ;
        inv += merge(a , t , l , mid + 1 , r) ;}
        return inv ;
    }
    
    ll merge(ll a[] , ll t[] , ll l , int mid , int r ){
        int i , j , k ; 
      ll   inv = 0 ; 
        i = l , j = mid , k = l ;
        while( i < mid and j <= r ) {
            if(a[i] <= a[j] ) t[k++] = a[i++] ;
            else {
                t[k++] = a[j++] ;
                inv = inv + (mid-i) ;
            }
        }
        while( i < mid ) t[k++] = a[i++] ;
        while( j <= r ) t[k++]  = a[j++] ;
        for(i = l ; i <= r ; i++ ) a[i] = t[i] ;
        return inv ;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends