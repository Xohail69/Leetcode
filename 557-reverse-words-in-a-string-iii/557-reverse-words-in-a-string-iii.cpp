class Solution {
public:
    string reverseWords(string s) {
        auto x = s.begin() ; 
        for(auto it = s.begin() ; it != s.end() ; it++ ){
            if(*it == ' '){
                reverse(x , it ) ;
                x = it + 1 ; 
            }
        }
         reverse(x , s.end() ) ;
        return s ; 
    }
};