class Solution {
public:
    char findTheDifference(string s, string t) {
//         vector<int> h (26 , 0 ) ;
//         for(auto x : t ) h[x - 'a']++ ;
//         for(auto x : s ) h[x - 'a']-- ;
//         for(int i = 0 ; i < 26 ; i++  ) {
//             if( h[i]  ) return i + 'a' ;
//         }
//         return 'a' ;
        
        
//         int c=0 ; 
//         int i = 0 ; 
//         for( ; i < s.size() ; i++ ) {
//             c += t[i] ;
//             c -= s[i] ;
//         }
//         c += t[i] ;
//         return c ;
        
        
        // Or by using XOR
         char r=0;
        for(char c:s) r ^=c;
        for(char c:t) r ^=c;
        return r;
    }
};                                                                                                                                                                                 