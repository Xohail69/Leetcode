class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() > t.length() ) return 0 ; 
        if(s.size() == 0 and t.size() !=0 ) return 1 ;
        int l = 0 , p = 0 ; 
        while(p < t.size() ){
            while(p < t.size() and t[p] != s[l] ) p++ ; 
            if(l < s.size() and t[p] == s[l] ) {
                l++ ;
                p++ ;
            }
        }
      //  cout<<l;
        return l == s.size() ;
        
    }
};