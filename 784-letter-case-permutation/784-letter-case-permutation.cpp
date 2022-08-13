class Solution {
public:
    
    void solve(string ip , string op , vector<string> &ans ){
        if( !ip.size() ) {
            ans.push_back(op) ; 
            return ; 
        }
        if(isdigit(ip[0]) ){
            string op1 = op ; 
            op1 += ip[0] ; 
            ip.erase(begin(ip) ) ; 
            solve(ip , op1 ,ans );
        }
        else {
            string op1(op) , op2(op) ; 
            op1 += tolower(ip[0]) ; 
            op2 += toupper(ip[0]) ; 
            ip.erase(begin(ip) ) ; 
            solve(ip , op1 , ans ) ; 
            solve(ip , op2 , ans ) ; 
        }
        
    }
    
    
    vector<string> letterCasePermutation(string s) {
        
        
        vector<string> ans ; 
        string op ;
        solve(s , op , ans ) ; 
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};