// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends


int* greaterElement(int a[], int n)
{   //M1 best TC - O(nlogn ) & SC - O(n) ;
//   set<int> s(a , a+n ) ;
//   int kabada = -10000000 ;
//   for(int i = 0  ; i < n ; i++ ){
//       auto it = s.find(a[i]) ;
//       it++ ;
//       if(it != s.end() ){
//           a[i] = *it ;
//       }
//       else a[i] =kabada ;
//   }
   
   
//   return a ;
        //
        //M2 using unordered map 
        vector<int>v(a , a+n ) ;
        sort(v.begin() , v.end() ) ;
        unordered_map<int,int> m ;
        for(int i = 0 ; i < n -1 ; i++ )
        m[v[i]] = v[i+1] ;
        m[v[n-1]] = -10000000 ;
        
        for(int i = 0 ; i < n ; i++ ){
            a[i] = m[a[i]] ;
        }
        
        
        return a ;
        
        
        
        
        
        
    
    
    
}
