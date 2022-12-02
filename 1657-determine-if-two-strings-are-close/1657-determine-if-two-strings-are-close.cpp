class Solution {
public:
    bool closeStrings(string word1 , string word2) {
        //1.  Frequency of Char need's to be same there both of string as we can do Transform every occurrence of one existing character into another existing character
// 2. All the unique char which there in String1 need's to there as well In string2
        
//        vector<int> f1(26,0 ) , f2(26,0) ; 
//         set<char> s1 , s2 ; 
//         if(w1.size()  !=  w2.size() ) return 0 ; 
//         int n = w1.size() ; 
//         for(int i = 0 ; i < n ; i++  ){
            
//             f1[w1[i] - 'a']++ ; 
//             s1.insert(w1[i] ) ;
//             f2[w2[i] - 'a']++ ; 
//             s2.insert(w2[i] ) ; 
//         }
//         sort(begin(f1) , end(f1) ) ; 
//         sort(begin(f2) , end(f2) ) ; 
//         return f1 == f2 and s1 == s2 ; 
        
        
        //M2
        
        
         vector<int>w1(26,0),w2(26,0),w3(26,0),w4(26,0);
        for(char c:word1)
            w1[c-'a']++,w3[c-'a'] = 1;
    
        for(char c:word2)
            w2[c-'a']++,w4[c-'a'] = 1;
        
        sort(begin(w1),end(w1));
        sort(begin(w2),end(w2));
        return w1==w2&&w3==w4;
        
        
        
    }
        
};