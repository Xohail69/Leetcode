class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> m = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ;
                unordered_set<string> s  ;
        for(auto &x : words  ){
            string t ; 
            for(auto &z : x){
                t += m[z-'a'] ; 
                
            }
            s.insert(t) ; 
           
        }

        return s.size() ; 
    }
};