class Solution {
public:
    string pushDominoes(string d ) {
        int n = d.size() ; 
        int l[n] , r[n] ;  
        int curr = -1 ; 
        for(int i = n-1 ; i >=0 ;i-- ){
            if(d[i] == 'L' ) curr = i ; 
            else if(d[i] == 'R' ) curr = -1 ; 
            l[i] = curr ; 
        }
        curr = -1 ; 
         for(int i = 0 ; i < n ;i++ ){
            if(d[i] == 'L' ) curr = -1 ; 
            else if(d[i] == 'R' ) curr = i ; 
            r[i] = curr ; 
        }
        string ans(n , '.')  ; 
        for(int i = 0 ; i < n ; i++ ){
                       
            if(d[i] == '.' ){
                int leftdiff = l[i] == -1 ? INT_MAX : abs(l[i] - i ) ; 
                int rightdiff = r[i] == -1 ? INT_MAX : abs(r[i] - i ) ; 
                if(leftdiff == rightdiff ) 
                    ans[i] = '.' ; 
                else if(leftdiff < rightdiff ) 
                    ans[i] = 'L' ; 
                else ans[i] = 'R' ; 
            }
            else ans[i] = d[i] ; 
            
            
            
            
        }
        return ans; 
        
    }
};