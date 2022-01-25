class Solution {
public:
    bool validMountainArray(vector<int>& a) {
    
        int n = a.size()  , i = 0 ; 
        //walk up 
        while(i+1 < n and a[i] < a[i+1] ) i++ ;
        
        //peak can't be first or last 
        if(i == 0 or i == n-1) return 0 ;
        
        //walk down 
        while(i + 1 < n and a[i] > a[i+1] ) i++ ;
        return i == n-1 ;
        
        
    }
};