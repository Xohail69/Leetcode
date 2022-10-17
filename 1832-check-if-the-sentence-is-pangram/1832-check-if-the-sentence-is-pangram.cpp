class Solution {
public:
    bool checkIfPangram(string s) {
        for(char i = 'a' ; i<='z' ; i++){
             size_t found = s.find(i);
        if (found == string::npos)
            return 0 ;
            }
    return 1 ;
    }
};


