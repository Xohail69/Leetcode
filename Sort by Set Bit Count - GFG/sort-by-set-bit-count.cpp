// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
       int count(int a)
    {
        int x1=0;int x2=0;
        while(a)
        {
            a-=(a&-a);
            x1++;
        }
        return x1;
        
    }
    void sortBySetBitCount(int arr[], int n)
    {
        map<int,vector<int>,greater<int>>mp;
    
       for(int i=0;i<n;i++){
           mp[count(arr[i])].push_back(arr[i]);
       }
       
       int i=0;
       map<int, vector<int>>::iterator it;
       for (it = mp.begin(); it != mp.end(); it++){
          int j=0;
          while(j<it->second.size())
          {
                arr[i++]=it->second[j];
                j++;
          }
       }
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends