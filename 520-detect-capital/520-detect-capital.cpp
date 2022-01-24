class Solution {
public:
    bool iscap(char x ) {
       return x >= 'A' and x <= 'Z' ;
    }
    
    bool detectCapitalUse(string word) {
//         int c = 0  ; 
//         for (auto x : word ) {
//             if( iscap(x) ) c++  ;
//         }
//         if(c == 1){
//             if(iscap(word[0]) ) return 1 ;
//             else return 0 ; 
//         }
        
//         if(c > 1 and c < word.size() ) return 0 ;
//         else return 1 ;
        
        
         bool firstCaps = isupper(word[0]), allCaps = true, allSmall = true;
        for(int i=1;i<word.size();i++){
            if(isupper(word[i])){
                allSmall = false;
            }else{
                allCaps = false;
            }
        }
        return ( firstCaps && allCaps) || allSmall ;
        
        
        
        
        
        
        
        //  for(int i = 1; i < word.size(); i++){
        // if(isupper(word[1]) != isupper(word[i]) || 
        //    islower(word[0]) && isupper(word[i])) return false;
        //     }
        // return true ;
//         if(isupper(word[1]) != isupper(word[i])) return false;
// This code checks if all are upper case AND check if all are lower case.
// You can also replace it by if(islower(word[1]) != islower(word[i])) return false;

// if( islower(word[0]) && isupper(word[i])) return false;
// Counter example of "Only the first letter in this word is capital, like "Google""
//     return true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
       
    }
};