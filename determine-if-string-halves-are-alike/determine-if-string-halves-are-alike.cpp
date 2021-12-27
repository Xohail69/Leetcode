class Solution {
public:
    
    int vow(string s) {
        int c(0) ;
        for(auto &x : s) {
            x = tolower(x)  ;
            if(x == 'a' || x == 'e' || x== 'i' || x=='o' || x == 'u' ) c++ ;
        }
        return c ;
    }
    
    bool halvesAreAlike(string s) {
        int mid = s.size() / 2 ;
        //M1 naive
        return vow(s.substr(0 , mid)) == vow(s.substr(mid)) ;
        
        
        //M2 more nice
        string vowels = "aeiouAEIOU" ;
        int ans = 0 ;
        for(int i = 0 , j = mid ; i<mid ; i++ , j++) {
            if( ~ vowels.find(s[i]) ) ans++ ;
            if( ~ vowels.find(s[j]) ) ans-- ;
            //In this context, ~x becomes 0 when x = -1. The string.find() method returns an index in [0,n] if it finds what you're looking for, but returns -1 if it doesn't find it. The bitwise NOT will adjust those numbers so that it yields 0 when a vowel is not found, and a non-zero integer when a vowel is found So basically, if (~vowels.find(S[i])) will be true if a vowel is found, and false if it's not. It's the shorter, faster equivalent of writing if (vowels.find(S[i]) >= 0).
         
        }
        return ans==0 ;
        
        
        
        
        
        //M3 using STL
        auto vowel = [](const char c){
            set<char> st {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            return st.find(c) != st.end() ;
        } ;
        auto begin2 = s.begin() + mid ;
return count_if(s.begin() , begin2 , vowel ) == count_if(begin2 , s.end() , vowel ) ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};