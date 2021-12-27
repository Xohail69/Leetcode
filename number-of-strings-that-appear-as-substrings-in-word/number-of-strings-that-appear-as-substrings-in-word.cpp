class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
   
        int c = 0 ; 
        for(auto &t : patterns ) {
               if( ~word.find(t)  ) c++ ;
        }
        return c ;
        
        
        
        
//         count_if(patterns.begin(), patterns.end(), [&](string x){return word.find(x) != word.npos;});
        
           
    }
};