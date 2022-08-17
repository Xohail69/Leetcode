class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1 ; 
        vector<int> a ; 
        for(int i = 1 ; i < n ; i++ ){
            fact *= i ; 
            a.push_back(i) ; 
        }
        a.push_back(n) ; 
        string ans  ; 
        k-- ; 
        while(1) {
            ans += to_string(a[k/fact]) ; 
            a.erase(a.begin() + k/fact ) ; 
            if(a.size()  == 0  )
                break ; 
            k = k%fact ; 
            fact = fact/a.size() ; 
            
        }
    return ans ;
         
        
        
        
    }
};