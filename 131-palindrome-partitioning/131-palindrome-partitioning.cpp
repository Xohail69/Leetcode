class Solution {
public:
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans ;
        vector<string> current ;
        dfs(ans , s , 0 , current) ;
        return ans ;;
        
    }
   void dfs(vector<vector<string>> &ans , string &s , int start , vector<string> &current) {
       if(start == s.length() ){ ans.push_back(current) ;  return ;} ;
        for(int end = start ; end < s.length() ; end++ ) {
            if( isPali(s , start , end ) ) {
                current.push_back(s.substr(start , end - start + 1 )) ;
                dfs(ans , s , end + 1 , current) ;
                current.pop_back() ;
            }
        }

    }
    
    bool isPali(string &s , int start , int end ) {
        while(start < end ) 
            if(s[start++] != s[end--] ) return false ;
        return true  ; 
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};