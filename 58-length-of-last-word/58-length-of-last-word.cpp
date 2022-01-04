class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length() ; 
        int i = n - 1 ;
        while(s[i] == ' ' ) i-- ;
        int c = 0 ;
        for(  ; i >= 0 ; i-- ) {
            if(s[i] != ' ') c++ ;
            else break ;
        }
        return c ;
        
    }
};