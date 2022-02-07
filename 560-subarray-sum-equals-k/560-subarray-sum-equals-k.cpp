class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //M1 BF
//         int c(0) ;
//         for(int i = 0 ; i< nums.size() ; i++) {
//             int sum = 0  ; 
//             for(int j = i ; j < nums.size() ; j++ ) {
//                 sum += nums[j] ;
//                 if(sum == k ) c++ ;
//             }
//         }
         
//         return c ; 
        
        
        
        unordered_map<int,int>  m = {{0, 1 } } ;
//         Why do we need to insert 0 in map first?
// -> We inserted 0 first because if the sum starting group of elements in the array is k then sum-k will be 0, so we need a 0 in map to make m.count[sum-k] true.
        
        int sum = 0 ; 
        int c = 0 ; 
        for(auto x  : nums ) {
            sum += x ;
            if( m.count(sum - k ) ) {
                c += m[sum-k]  ; 
                
            }
            m[sum]++ ;
        }
        
        return c ; 
        
        
        
        
        
        
        
        
    }
};