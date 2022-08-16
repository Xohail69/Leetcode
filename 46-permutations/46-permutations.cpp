class Solution {
public:
    
    void perm(vector<int> &a , vector<int> &ds , vector<int> &freq , vector<vector<int>> &ans){
        if(ds.size() == a.size() ) {
            ans.push_back(ds) ; 
            return ; 
        }
        for(int i = 0 ; i < a.size() ; i++ ){
            if( !freq[i] ){
                ds.push_back(a[i]) ; 
                freq[i] = 1 ;
                perm(a , ds , freq , ans ) ; 
                freq[i] = 0 ; 
                ds.pop_back() ; 
            }
        }
        
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        vector<int> v ; 
        int n = nums.size() ; 
        vector<int> freq( n , 0 ) ; 
        vector<vector<int>> ans ; 
        perm(nums , v ,  freq , ans ) ;
        return ans ; 
        
        
        
    }
};