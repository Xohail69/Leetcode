class Solution {
public:
    bool isValid(string &s ){
        if(s.size() == 0 ) return 0 ; 
        vector<int> h(26 , 0 ) ; 
        for(auto x : s ){
            h[x-'a']++ ; 
            if(h[x-'a'] > 1 ) return 0 ; 
        }
        return 1 ; 
    }
    int ans = 0 ; 
    void sub(int i , string &s , vector<string>&a ){
        if(i == a.size() ){
            if(isValid(s ) ){
                int n = s.size() ; 
                ans = max(ans , n ) ; 
            }
            return ; 
        }
        // s += a[i] ; 
        string t = s + a[i] ; 
        sub(i +1 , t , a ) ; 
        sub(i +1 , s , a ) ; 
    }
    int maxLength(vector<string>& a ) {
        string t = ""; 
        sub(0 , t , a ) ; 
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};