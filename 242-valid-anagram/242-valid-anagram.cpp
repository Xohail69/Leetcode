class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size() ) return 0 ; 
        vector<int>h(26 , 0 ) ; 
        for(int i = 0 ; i < s.size()  ; i++ ){
            h[s[i] - 'a']++ ; 
            h[t[i] - 'a']-- ;
        }
        for(auto x : h )
            if(x != 0 ) return 0 ; 
        return 1 ; 
    }
};