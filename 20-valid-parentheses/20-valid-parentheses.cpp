class Solution {
public:
    bool isValid(string st) {
        stack<char> s ; 
        for(auto x : st){
            if(x == '(')
                s.push(')') ; 
            else if(x == '{')
                s.push('}') ; 
            else if(x == '[')
                s.push(']') ; 
            else if(s.empty() or s.top() != x ) 
                return 0 ;
            else if(s.top() == x ) 
                s.pop() ; 
        }
        return s.empty() ; 
    }
};