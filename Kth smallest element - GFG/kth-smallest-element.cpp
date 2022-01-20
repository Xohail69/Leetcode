// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int partition(int a[] , int l ,int r) {
        int x = a[r] , i = l ;
        for(int j = l ; j< r ; j++ ) {
            if(a[j] <= x ) {
                swap(a[i] , a[j] ) ; i++ ;
            }
        }
        swap(a[i] , a[r]) ;
        return i ;
    }
    int randomPart(int a[] , int l , int r ) {
        int n = r-l + 1 ;
        int pivot = rand()%n ;
        swap(a[l+pivot] , a[r] ) ;
        return partition(a , l  , r ) ;
    }
    int kthSmallest(int a[], int l, int r, int k) {
        //code here
        
        if(k >0 and k <= (r - l+1) ) {
            int pos = randomPart(a , l , r ) ;
            if(pos - l == k-1 ) return a[pos] ;
            else if( pos-l > k-1 ) return kthSmallest(a , l , pos-1 , k ) ;
            else
            return kthSmallest(a , pos+1 , r  , k -pos +l - 1) ;
            
            
        }
        return INT_MAX ;
        
        
        
        
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends