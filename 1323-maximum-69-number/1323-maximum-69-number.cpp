class Solution {
public:
    int maximum69Number (int num) {
        string t = to_string(num) ; 
        string ans ; 
        for(int i= 0 ; i < t.size() ; i++ ){
            if(t[i] == '6') {
                ans += '9' ; 
                ans += t.substr(i+1)  ; 
                break ; 
            }
            ans += t[i] ; 
        }
        if(ans.size() == 0 ) return num ; 
        int m = stoi(ans) ; 
        return m ; 
    }
};