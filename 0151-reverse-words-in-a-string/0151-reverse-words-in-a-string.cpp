class Solution {
public:
    string reverseWords(string s) {
        string word ; 
        stringstream ss(s) ;
        vector<string> v ; 
        while(ss >> word ){
            v.push_back(word) ; 
        }
        int n = v.size() ;
        string ans ; 
        for(int i = n - 1 ; i >= 0 ; i-- ){
            ans += v[i] + " " ; 
        }
        ans.pop_back() ; 
        return ans; 
    }
};