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
    int longestValidParentheses(string s) {
        ///BF
        //TC -->> O(n^3) and 
        //SC -->> O(n) 

        if(s.size() == 0 or s.size() == 1 ) return 0 ; 
        // int maxi = 0 ; 
        // for(int i = 0 ; i < s.size() ; i++ ){
        //     for(int j = i + 2 ; j <= s.size() ; j += 2 ){
        //         if(isValid(s.substr( i , j - i  ) )  ) {
        //             maxi = max(maxi , j - i  ) ;
        //         }
        //     }
        // }
        // return maxi ; 
        
        
        //
        
        
//         //M2 using stack in TC - O(n) and SC - O(n)
        stack<int> stk ; 
        stk.push(-1) ;
        int maxi = 0 ; 
        for(int i = 0 ; i < s.length() ; i ++ ){
            if(s[i] == '(' ) 
                stk.push(i) ;
            else {
                stk.pop() ;
                if(stk.empty() ) 
                    stk.push(i) ;
                else 
                    maxi = max (maxi , i - stk.top() ) ;
            }
        } 
        
        return maxi ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};