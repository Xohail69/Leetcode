class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // // Narayana Pandita's Algorithm
           // 1. Find the largest index k such that nums[k] < nums[k + 1]. If no such index , just reverse and done
    // 2. Find the largest index l > k such that nums[k] < nums[l]
    // 3. Swap nums[k] and nums[l]
    // 4. Reverse the sub-array nums[k + 1:]
    
//     how to understand it:
//     step-1: easy, find the first digit that can be swapped to make permutation bigger
//     step-2: easy, find the digit bigger but closest to nums[k]
//     step-3: swap(nums[k], nums[l])
//     step-4: sort the subarray nums[k+1:end], why we can just reverse instead of sort?
//             because we know nums[k+1:end] must be non-increasing, reason:
//             1. at step 1, we know nums[k+1:end] is non-decreasing
//             2. before swap in step 3, we know nums[l-1] >= nums[l] > nums[k] >= nums[l+1]
//             3. so after swap, we still have nums[l-1] > nums[k] >= nums[l+1], so we can reverse it
        
   
        
        
        
//         int n = nums.size() , k  , l ;
        
//         for(k = n - 2 ; k >= 0 ; k--) { 
//             if(nums[k] < nums[k+1] ) break ; //Finding the index needed to be swapped.
//         }
        
//         if(k < 0) reverse(nums.begin() , nums.end()) ; // Permutation is in descending order. Sort it to ascending order.
//         else {
            
//             for(l = n - 1 ; l > k ; l-- ) {
//                 if(nums[l] > nums[k] ) break ;//Finding the number just greater than at index needed to be swapped.
//             }
//             swap(nums[k] , nums[l]) ;
//             reverse(nums.begin() + k + 1 , nums.end()) ;            
            
//         }
        
        
        
       //One liner using STL
       // next_permutation(begin(nums) , end(nums)) ;
        
//         //M3 using STL 
        auto i = is_sorted_until(nums.rbegin(), nums.rend());
    if (i != nums.rend())
        swap(*i, *upper_bound(nums.rbegin(), i, *i));
    reverse(nums.rbegin(), i);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};