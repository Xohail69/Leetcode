class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> m = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ;
        for(auto &x : words  ){
            string t ; 
            for(auto &z : x){
                t += m[z-'a'] ; 
            }
            x = t ; 
        }
        unordered_set<string> s(words.begin() , words.end() )  ;
        return s.size() ; 
    }
};