class Solution {
public:
    string freqAlphabets(string s) {
        
       string ans ;
        int n = s.size() ;
        for(int i = 0 ; i<n ; i++) {
            if(i < n-2 and s[i+2] == '#' ) {
                ans += 'j' + (s[i] - '1')*10 + (s[i+1] - '0') ;
  /*Both are same */// ans += 'a'-1 + (s[i]-'0')*10 + (s[i+1]-'0');
                i += 2 ;
                
            }
            else ans += 'a' + (s[i] - '1') ;
        }
        return ans ;
    }
};