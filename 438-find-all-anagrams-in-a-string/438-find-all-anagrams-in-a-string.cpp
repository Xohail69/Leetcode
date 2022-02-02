class Solution {
public:    
    vector<int> findAnagrams(string s, string p) {
        int n = p.size() , m = s.size() ;
        if(m < n) return {} ;
        vector<int>ans ; 
        vector<int> ph(26 , 0 ) , sh(26 , 0 ) ;
        for(int i = 0 ; i < n ; i++ ){
            ph[p[i] - 'a']++ ;
            sh[s[i] - 'a']++ ;
        }
        if( ph == sh ) ans.push_back(0 ) ;
        for(int i = n ; i < m ; i++ ){
            sh[s[i] - 'a']++ ;
            sh[s[i - n] - 'a' ]-- ;
            if( ph == sh ) ans.push_back(i - n + 1 ) ;
        }
        
        
        return ans ; 
    }
};