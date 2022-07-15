// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    using ll = long long int ; 
    long long int minSum(int a[], int n)
    {
        // Your code goes here
        // sort(a , a + n ) ; 
        // int i = n -1 , j = i - 1 ; 
        // ll n1(0), n2(0) ;
        // ll p = 1 ; 
        // for( ; i >= 0 ; i -=2 ){
        //     n1 += p*a[i] ; 
        //     p *= 10 ;
        // }
        // p = 1 ; 
        //  for( ; j >= 0 ; j -=2 ){
        //     n2 += p*a[j] ; 
        //     p *= 10 ;
        // }
        // // cout<<n1<<endl<<n2<<endl ; 
        // return n1 + n2 ; 
        
        //More concise 
        //  sort(a , a +n);
        // long long num1 = 0, num2 = 0;
        
        // for(int i=0; i<n; i++)
        // {
        //     if(i%2)
        //         num1 = num1*10 + a[i];
        //     else
        //         num2 = num2*10 + a[i];
        // }
        
        // return num1+num2;
        
        
        
        
        
        
        
        
        
        // min Heap
        priority_queue <int, vector<int>, greater<int> > pq;
    
        // to store the 2 numbers formed by array elements to
        // minimize the required sum
        long long int a1=0, b=0;
    
        // Adding elements in Priority Queue
        for(int i=0; i<n; i++)
            pq.push(a[i]);
    
        // checking if the priority queue is non empty
        while(!pq.empty())
        {
            a1*=10;
            a1+=pq.top();
            pq.pop();
            if(!pq.empty())
            {
                b*=10;
                b+=pq.top();
                pq.pop();
            }
        }
        return a1+b;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends