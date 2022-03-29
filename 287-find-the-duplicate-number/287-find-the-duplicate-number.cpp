class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //M1 using hashmap TC = SC = O(n)   
//      unordered_map<int, int> m;
//         for(auto x: nums ) {
//             m[x]++ ;
            
//         }
//         for(auto y : m ) {
//             if(y.second >= 2) return y.first ;
//         }
        
//          return -1 ;
        
        
        
        
        //M2 using BS  , Better than M1 ; TC - O(nlogn) , SC - O(1) 
        //Logic - If we pick any one of numbers and count how many numbers are less than or equal to it, the answer will be equal to that number. So in [1,2,3,4,5][1,2,3,4,5], if you pick the number 4, there's exactly 4 numbers that are less than or equal to 4.  However, when you have duplicates in the array, this count will exceed the number at some point.For example: in [4,3,4,5,2,4,1] , 4 which is the duplicate, has 6 numbers that are less than or equal to it). Hence, the smallest number that satisfies this property is the duplicate number. 
        
//         int l = 0  , h = nums.size()-1 , mid ;
//         while(l <= h ) {
//             mid = l + (h-l)/2 ;
//             int count = 0 ; 
//             for(auto x : nums) if(x <= mid) count++ ;//count numbers less then equal to mid
//             if(count <= mid ) l = mid + 1 ; //if count is less than number itself than duplicate must lie to the right side 
//             else h = mid-1 ;
//         }
//         return l ;
  
        
        
        
        
        
        //M3 using Negative Marking Technique (this is allowed only if the vector is immutable )
        //Traverse array ets one by one then for each nums[i] flip the number at index i with a negative sign .
        //For example, if the input array is [1, 3, 3, 2][1,3,3,2], then for 11, flip the number at index 11, making the array [1,-3,3,2][1,−3,3,2]. Next, for -3−3 flip the number at index 33, making the array [1,-3,3,-2][1,−3,3,−2]. Finally, when we reach the second 33, we'll notice that nums[3]nums[3] is already negative, indicating that 33 has been seen before and hence is the duplicate number.
//         for(int i = 0 ; i < nums.size() ; i++ ) {
            
//             int index = abs(nums[i]) ;
            
//             nums[index] *= -1 ; //mark as visited 
//             if(nums[index] > 0 )  // incase of duplicate, this will become +ve 
//                 return abs(nums[i]) ;
            
//         }
//         //Restoring original nums 
//         for(auto &x : nums ) x = abs(x) ;
//         return -1 ;
        
        //BEST of all 
        //M4 using Floyd's Tortoise and Hare (Cycle Detection)
        //TC - O(n)  , Sc - O(1) ;
        //Use two pointers the fast and the slow. The fast one goes forward two steps each time, while the slow one goes only step each time. They must meet the same item when slow==fast. In fact, they meet in a circle, the duplicate number must be the entry point of the circle when visiting the array from nums[0]. Next we just need to find the entry point. We use a point(we can use the fast one before) to visit form begining with one step each time, do the same job to slow. When fast==slow, they meet at the entry point of the circle. 
        // slow = tortoise , fast = hare 
        
        int slow , fast ; 
        slow = fast = nums[0] ;
        do {
            slow = nums[slow] ;
            fast = nums[nums[fast]] ; 
        } while( slow != fast ) ;
        slow = nums[0] ;
        while(  slow != fast ) {
            slow = nums[slow] ;
            fast = nums[fast] ;
        }
        return slow ;
        
        
        // for more info -   https://leetcode.com/problems/find-the-duplicate-number/discuss/72846/My-easy-understood-solution-with-O(n)-time-and-O(1)-space-without-modifying-the-array.-With-clear-explanation.
        
        
        
        
        
        
        
        
        
    }
};