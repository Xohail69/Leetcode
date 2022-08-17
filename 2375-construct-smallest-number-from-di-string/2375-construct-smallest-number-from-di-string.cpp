class Solution {
public:
    bool check(string &p , vector<char> &v ){
        for(int i = 0 ; i < p.size() ; i++ ){
            if(p[i] == 'I' and v[i] < v[i+1] ) 
                continue ; 
            else if(p[i] == 'D' and v[i] > v[i+1] ) 
                continue ; 
            else return 0 ; 
        }
        return 1 ; 
    }
    
    
    string smallestNumber(string p ) {
        int n = p.size() ; 
        vector<char> nums(n+1 ) ; 
        for(int i = 0 ; i < n+1 ; i++ ){
            nums[i] = i+1 + '0' ; 
        }
        
        while(1){
            if(check(p , nums)){
                return string (nums.begin() , nums.end() ) ; 
            }
            next_permutation(nums.begin() , nums.end() ) ; 
            
            
        }
        
        
        
    }
};