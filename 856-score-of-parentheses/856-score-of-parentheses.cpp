class Solution {
public:
    int scoreOfParentheses(string st ) {
        int ans = 0 ; 
        stack<int> s ;
        for(auto x : st ){
            int val = 0 ; 
            if(x == '(') s.push(0) ;
            else {
                while(s.top() != 0 ){
                    val += s.top() ; 
                    s.pop() ;
                }
                    val = max(2*val , 1 ) ;
                    s.pop() ;
                s.push(val) ;
                
            }
        }
        while(!s.empty() ){
            ans += s.top() ; 
            s.pop() ; 
        }
        return ans ; 
        
        
        
    }
};