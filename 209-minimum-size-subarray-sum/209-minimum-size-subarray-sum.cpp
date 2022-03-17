class Solution {
public:
    int minSubArrayLen(int s , vector<int>& nums) {
        //BF
        int ans = INT_MAX , n = nums.size() ;
        for(int i = 0 ; i < n ; i++ ){
           int sum = 0 ; 
            for(int j = i ; j < n ; j++ ){
                sum += nums[j] ; 
                if(sum >= s ){
                    ans = min(ans , j - i + 1 ) ;
                    break ; 
                }
            }
        }
       return ans == INT_MAX ? 0 : ans ; 
  
  
        
  //      Using two prs & sliding window in O(n) 
//           int l = 0  , r = 0 ,  n = nums.size() , sum = 0  ;
//         int ans = INT_MAX ; 
//             while(r < n ){
//                 sum += nums[r] ;
//                 while(sum >= s ){
//                     ans = min(ans , r - l + 1 ) ;
//                     sum -= nums[l++]  ;
//                 }
//                 r++ ;
//             }
//         return ans == INT_MAX ? 0 : ans ;
        
        
        
        
        
        
        
    
      
        
        
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
          
        
    }
};