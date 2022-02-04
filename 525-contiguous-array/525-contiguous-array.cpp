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
//    
        
        
//         We use a variable sum, which is used to store the relative number of ones and zeros encountered so far.
// sum is incremented by one whenever a 1 is encountered and decremented by one whenever a 0 is encountered.
// We traverse the array nums from the beginning.
// If at any index, sum becomes zero, it means that we've encountered equal number of zeros and ones from the beginning till the current index.
// And at any index, we encounter a sum that's already been encountered at some previous index, it means that the number of 0's and 1's are equal between the indices corresponding to the equal sum values.
// We keep track of the indices that correspond to the same sum with maximum difference between the indices to find the maximum length of the subarrays with equal number of 0's & 1's.
        
        unordered_map<int , int> m ;
        //We'll map prefix sum with the index
        int ans =  0 ;
        int sum = 0 ;
      
        for(int i = 0 ; i < nums.size() ; i++ ) {
            
            sum += (nums[i]==0) ? -1 : 1 ;
            
             // If sum becomes 0, it means array from the beginning contains equal number of 0's and 1's.
            if(sum == 0 ) ans = max(ans , i + 1 ) ; 
            
            
            if(m.count(sum) ) ans = max(ans , i - m[sum]) ;
            else m[sum] = i ;
            
        }
        
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
    }
};