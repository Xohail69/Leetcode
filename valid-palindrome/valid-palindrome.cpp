class Solution {
public:
    bool isPalindrome(string s) {
        
        
//         string t ;
//         int n = s.size() ;
//         for(int i = 0 ; i < n ; i++ ) {
//         if( isalnum(s[i]) ) {
//             t.push_back(  tolower(s[i]) ) ;}
//         }
//        for(int i = 0 ; i < n/2 ; i++){
//            if( t[i] != t[t.size() - 1 - i ] ) return false ;
//        }
   
//         return true ;
     
        
        
        
        
        
        //BEST
        int l = 0 , h  = s.size() ;
        while(l < h ) {
        while( l < h and  !isalnum(s[l]) ) l++ ;
        while( l < h and  !isalnum(s[h]) ) h-- ;
        if(tolower(s[l++]) != tolower(s[h--])) return false ;
            
        }
        return true ;
        
    }
};

      