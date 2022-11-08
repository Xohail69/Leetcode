class Solution {
public:
    #define db1(x) 						  cout<<#x<<"= "<<x<<'\n'
#define db2(x,y) 					  cout<<#x<<"= "<<x<<", "<<#y<<"= "<<y<<'\n'
#define db3(x,y,z) 				  cout<<#x<<"= "<<x<<", "<<#y<<"= "<<y<<", "<<#z<<"= "<<z<<'\n'

    string makeGood(string s) {
        stack<char> stk ; 
        int n = s.size() ; 
        for(int i = 0 ; i < s.size() ; i++ ){
        if(!stk.empty() and abs(stk.top() - s[i] ) == 32 ) 
            stk.pop() ; 
        else stk.push(s[i]) ; 
    }
        string ans  ;
        while(stk.size())
        {
            ans += stk.top() ; 
            stk.pop() ; 
        }
        reverse(ans.begin() , ans.end() )  ; 
        return ans ; 
    }
};