class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s1 , s2 ;
        for(auto &x : w1 ) s1 += x ;
        for(auto &y : w2 ) s2 += y ;
        return s1 == s2 ;
        
        
//         int i = 0 ,  j = 0  ;
//         int m = 0 , n = 0 ; 
//         while(i < w1.size() and j < w2.size() ) {
//             if(w1[i][m++] != w2[j][n++] ) return false ;
//             if(m >= w1[i].size() ) {
//                 m = 0 ; i++ ;
//             }
//             if(n >= w2[j].size() ) {
//                 n = 0 ; j++ ;
//             }
//         }
        
//         return i==w1.size() and j == w2.size() ;
        
        
    }
};