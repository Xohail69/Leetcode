class Solution {
public:
    string reverseWords(string s) {
        // auto x = s.begin() ; 
        // for(auto it = s.begin() ; it != s.end() ; it++ ){
        //     if(*it == ' '){
        //         reverse(x , it ) ;
        //         x = it + 1 ; 
        //     }
        // }
        //  reverse(x , s.end() ) ;
        // return s ; 
        
        
        
        
        
        
            int front = 0;
        for(int i=0; i<=s.size(); i++)
        {
            if(i == s.size() || s[i] == ' ')
            {
                reverse(&s[front], &s[i]);
                front = i+1;
            }
        }
        return s;
        
        
        
        
        
    }
};