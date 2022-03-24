// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMinInsertions(string s){
        // code here 
        //this problem is related to lcs 
        //No. of insertions required is equal to number of deletions 
        //Ex - abcd 
        //either we can insert bcd to the front & the string will become pali
        /// bcdabcd is a pali 
        //insert abc to the back
        //abcdabc is a pali 
        // so no. of insertions = 3 
        // Now lets talk about deletion dude 
        // We can delete any three letters to make it a palindrome 
        // lets delete first three we get d which is a pali 
        //Ex2- naba
        //Insertion ==> 1 letter whiach is n so the string is naban which is pali 
        //Deletion === >> delete n fraom the beginning of the strig we get 
         ///  so we get aba which is pali 
         //So we conclude no. of insertion == no. of deletions to make it pali


/// No. of insertion = size of string - LCS of string & its reverse 
// Just dry run with above examples naba & aban 

         
        
        string t = s ;
        reverse(t.begin() , t.end() );
        int x , y ;
        x = y = s.length() ;
        int dp[x+1][y+1] ; 
        for(int i = 0  ; i <=x ; i++ ){
            for(int j = 0 ; j <=y ; j++ ){
                if(i==0 or j==0 ) dp[i][j] = 0 ;
                else{
                    if(s[i-1] == t[j-1] ) dp[i][j] = 1+dp[i-1][j-1] ;
                    else dp[i][j] = max( dp[i-1][j] , dp[i][j-1] ) ;
                }
            }
        }
        int lcs = dp[x][y] ;
        return x - lcs ;
        
        
        
        
        
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends