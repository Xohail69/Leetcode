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
            if(l[i] != -1 and r[i] != -1 ){
                int diff1 = abs(i-l[i]) ;
                int diff2 = abs(i-r[i]) ;
                if(diff1 == diff2 ) ans[i] = '.' ;
                else 
                ans[i] = abs(i-l[i]) < abs(i-r[i]) ? 'L' : 'R' ;
            }
            else if(l[i] == -1 and r[i] == -1 ){
                ans[i] = '.' ;
            }
            else if(l[i] == -1 ) ans[i] = 'R' ;
            else if(r[i] == -1 ) ans[i] = 'L' ;
        }
        return ans; 
        
    }
};