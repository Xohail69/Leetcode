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
    void perm2(int ix , vector<int> &a , vector<vector<int>> &ans){
        if(ix == a.size() ) {
            ans.push_back(a) ; 
            return ; 
        }
        for(int i = ix ; i < a.size() ; i++ ){
            swap(a[ix] , a[i] ) ; 
            perm2(ix + 1 , a , ans  )  ; 
            swap(a[ix] , a[i] ) ; 
        }
        
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        vector<int> v ; 
        int n = nums.size() ; 
        // vector<int> freq( n , 0 ) ; 
        vector<vector<int>> ans ; 
        // perm(nums , v ,  freq , ans ) ;
        
        //M2 without extra space 
        perm2(0 , nums , ans ) ; 
        return ans ; 
        
        
        
    }
};