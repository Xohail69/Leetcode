class Solution {
public:
    bool closeStrings(string w1 , string w2) {
       vector<int> f1(26,0 ) , f2(26,0) ; 
        set<char> s1 , s2 ; 
        if(w1.size()  !=  w2.size() ) return 0 ; 
        int n = w1.size() ; 
        for(int i = 0 ; i < n ; i++  ){
            
            f1[w1[i] - 'a']++ ; 
            s1.insert(w1[i] ) ;
            f2[w2[i] - 'a']++ ; 
            s2.insert(w2[i] ) ; 
        }
        sort(begin(f1) , end(f1) ) ; 
        sort(begin(f2) , end(f2) ) ; 
        return f1 == f2 and s1 == s2 ; 
    }
        
};