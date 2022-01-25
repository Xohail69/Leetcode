// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {//Let the current element traversed in A[] be x, in B[] be y 
        // and in C[] be z
            //code here.
            set<int> ans ;
            int i , j , k  ; 
            i =  j  = k = 0 ;
           while(i < n1 and j < n2 and k <n3 ) {
               //all are equal 
               if(A[i] == B[j] and B[j] == C[k]){
                //  if(find(ans.begin() , ans.end() , A[i]) != ans.end()) 
                //  ans.push_back(A[i]) ;
                ans.insert(A[i])  ;
                   i++ ; j++ ; k++ ;
               }
               //x < y
               else if(A[i] < B[j] ) i++ ;
               // y < z
               else if (B[j] < C[k] ) j++ ;
               //x > y and z < y i.e z is smallest
               else k++ ;
            } 
      //for(auto x :ans) cout<<x<<" " ;
      
            return vector<int>(ans.begin() , ans.end()) ;
            
            
            
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends