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
        
        
        char c ; 
        int i = 0 ; 
        for( ; i < s.size() ; i++ ) {
            c += t[i] ;
            c -= s[i] ;
        }
        c += t[i] ;
        return (int)c ;
        
    }
};