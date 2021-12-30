class Solution {
public:
    bool isValid(string x) {
        stack<char>s;
    	for(auto i : x){
        if(i == '(')
            s.push(')');
        else if(i == '{')
            s.push('}');
        else if(i == '[')
            s.push(']');
        else if( s.empty() || s.top() != i)
            return false;
        else if(s.top() == i)
            s.pop();
    }
    return s.empty();
    }
};