class Solution {
public:
    bool isPal(string &s , int i , int j ) {
        for( ; i<j ; i++ , j-- ) {
            if(s[i] != s[j] ) return false ;
        }
        return true ;
    }
    bool check(string &a , string &b )  {
        for(int i = 0 , j = a.size() - 1 ; i<j ; i++ , j-- ) {
            if(a[i] != b[j] ) 
                return isPal(a , i , j ) or isPal(b , i  , j ) ;
        }
        return true ;
        
    }
    bool checkPalindromeFormation(string a, string b) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
        if( isPal(a , 0 , a.size() ) or isPal(b , 0 , b.size()) ) return true ;
        
// Greedily take the a_suffix and b_prefix as long as they are palindrome,
// that is, a_suffix = reversed(b_prefix).

// The the middle part of a is s1,
// The the middle part of b is s2.

// If either s1 or s2 is palindrome, then return true.

// Then we do the same thing for b_suffix and a_prefix
        
        return check(a , b ) or check (b , a ) ;
        //For more Explanation see this https://youtu.be/fSTcNpBjwIM 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};