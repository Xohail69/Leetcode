class Solution {
public:
    string breakPalindrome(string &s ) {
        int n = s.size() ; 
        if(n == 1 ) return "" ; 
//         string ans ; 
//         int i = 0 ; 
//         while(i < n and s[i] == 'a' ){
          
//             ans += s[i++] ; 
            
//         }
//           if(i == n/2 ){
//                 string t = s ; 
//                 t.pop_back() ; 
//                 t += 'b' ; 
//                 return t ; 
//             }
//         if(i >= n ) { ans.pop_back() ; 
//             ans += 'b' ; 
//                      return ans ; 
//         } 
//         ans += 'a' ; 
//         ans += s.substr(i+1) ; 
        
       
//         return ans ; 
        
        
        
        for(int i = 0 ; i < n/2 ; i++ ){
            if(s[i] != 'a' ) {
                s[i] = 'a' ; 
                return s; 
            }
        }
        
        
        s[n-1] = 'b' ; 
        return s ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};