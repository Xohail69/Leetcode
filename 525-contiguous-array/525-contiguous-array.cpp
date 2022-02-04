class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //Bf create all possible subarrays 
        //O(n^2)
//         int ans = 0  ;       
//         for(int i = 0 ; i < nums.size() ; i++ ) {
//             int z = 0 , o = 0 ;
//             for(int j = i ; j < nums.size() ; j++ ) {
//                 if( nums[j] ) o++ ;
//                 else z++ ;
//                 if(z == o ) ans = max(ans , j - i + 1 ) ;
//             }
//         }

//         return ans ;
        
        
        
        
        
        
        
        //M2 
        unordered_map<int , int> m ;
        int ans =  0 ;
        int sum = 0 ;
      
        for(int i = 0 ; i < nums.size() ; i++ ) {
            
            sum += (nums[i]==0) ? -1 : 1 ;
            
            if(sum == 0 ) ans = max(ans , i + 1 ) ;
            
            if(m.count(sum) ) ans = max(ans , i - m[sum]) ;
            else m[sum] = i ;
            
        }
        
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
    }
};