class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        // unordered_map<char,string> cmap ;
        // unordered_map<string,char> wmap ;
        // stringstream s(str) ; 
        // int n = pattern.size() , i = 0 ; 
        // string word ;
        // while(s >> word ) {
        //     if( i == n ) return 0 ;
        //     char c = pattern[i] ;
        //     if( cmap.count(c) != wmap.count(word) ) return 0 ;
        //     if(cmap.count(c) ) {
        //         if(wmap[word] != c or cmap[c] != word ) return 0 ;
        //     }
        //     else {
        //         cmap.insert({c , word }) ;
        //         wmap.insert({word , c }) ;
        //     }
        //     i++ ;
        // }
        // return i == n ;
        
        
        
        map<char,int> cmap ;
        map<string, int> wmap ;
        istringstream s(str) ;
        int n = pattern.size() , i = 0 ;
        for(string word ; s >> word ; i++ ) {
            
            if( i==n or cmap[pattern[i]] != wmap[word]  ) 
                return 0 ;
            cmap[pattern[i]]  = wmap[word] = i + 1 ;
        }

        return i == n ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};