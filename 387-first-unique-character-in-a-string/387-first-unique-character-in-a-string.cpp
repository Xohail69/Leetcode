class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>h(26 , 0 ) ; 
        for(auto x : s ) h[x - 'a']++ ; 
        for(int i = 0  ; i <  s.size() ; i++ ){
            if(h[s[i] - 'a'] == 1 ) return i ; 
        }
        return -1 ; 
    }
};