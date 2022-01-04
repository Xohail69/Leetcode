class Solution {
public:
    string mergeAlternately(string w1, string w2) {
       int n = w1.length() , m = w2.length() ;
        string s ;
     
        ///Using Two Prs 
//         int i(0) , j(0)  ;
//         while ( i < n or j < m ) {
//             if(i < n ) s += w1[i++] ;
//             if(j < m ) s += w2[j++] ;
//         }
        
//         return s ;
        
        
        //Using One Pr
       
        for(int i = 0 ; i < max(n , m ) ; i++ ) {
            if(i < n ) s += w1[i] ;
            if(i < m ) s += w2[i] ;
            
        }
        return s ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};