class Solution {
public:
    bool iscap(char x ) {
       return x >= 'A' and x <= 'Z' ;
    }
    
    bool detectCapitalUse(string word) {
        int c = 0  ; 
        for (auto x : word ) {
            if( iscap(x) ) c++  ;
        }
        if(c == 1){
            if(iscap(word[0]) ) return 1 ;
            else return 0 ; 
        }
        
        if(c > 1 and c < word.size() ) return 0 ;
        else return 1 ;
       
    }
};