class Solution {
public:
    int count(string &s , char c ){
        int cunt =0  ; 
        for(auto x : s )
            if(x == c ) cunt++ ; 
        return cunt ; 
    }
    bool is_subset(string &s  , vector<int> &f ){
        for(char i = 'a' ; i < 'z' ; i++ ){
            if(count(s , i ) < f[i - 'a'] )
                return 0 ;
        }
        return 1 ; 
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        int teri_maaki_choot = 0 ; 
        vector<string> ans ; 
        vector<int> f(26 , 0  ) ; 
        
        for(auto &s : words2 ){
            for(char i = 'a' ; i < 'z' ; i++ ){
                f[i - 'a' ] = max(f[i - 'a' ] , count(s , i ) ) ; 
            }
        }
        
        for(auto &x : words1 ){
            if(is_subset(x , f ) )
                ans.push_back(x ) ; 
        }
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};