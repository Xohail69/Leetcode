// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
 vector<string> result ;
  void findPer(string S,string t,int s,int e){
        if(s == e){
            t += S[s];
            result.push_back(t);
            return;
        }else{
            t += S[s];
            findPer(S,t+' ',s+1,e);
            findPer(S,t,s+1,e);
            return;
        }
    }

    vector<string> permutation(string S){
        // Code Here
       
        findPer(S,"",0,S.length()-1);
        return result;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends