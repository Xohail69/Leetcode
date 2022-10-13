class Solution {
public:
    vector<int> getRow(int n ){
        n++ ;
  vector<vector<int>> ans (n  ) ; 
        ans.clear() ;
        for(int i = 0 ; i < n ; i++ ){
            vector<int> t(i+1 , 0) ; 
            t[0] = t[i] = 1 ;
            for(int j = 1 ; j < i ; j++ ){
                t[j] = ans[i-1][j] + ans[i-1][j-1] ;
              
            }
             ans.push_back(t) ;
        
        }
        return ans[n-1] ;

    }
};