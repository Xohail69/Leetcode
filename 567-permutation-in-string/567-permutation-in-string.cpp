class Solution {
public:
    bool checkInclusion(string p, string s) {
             //  Time Complexity = O(n * 26) = O(n), n is the length of string s.
// Space Complexity = O(26) = O(1)
        int n = p.size() , m = s.size() ;
        if(m < n) return {} ;
     
        vector<int> ph(26 , 0 ) , sh(26 , 0 ) ;
        //First window filled in the HT
        for(int i = 0 ; i < n ; i++ ){
            ph[p[i] - 'a']++ ;
            sh[s[i] - 'a']++ ;
        }
        if( ph == sh ) return 1  ;
        //Sliding the windows , moving L to R
        for(int i = n ; i < m ; i++ ){
            sh[s[i] - 'a']++ ; // sliding right side to 1 by Adding the new char in the hash from the right
            sh[s[i - n] - 'a' ]-- ; // sliding left side to 1 by Removing the char
            if( ph == sh ) return 1 ;
        }
        
        
        return 0 ; 
    }
};