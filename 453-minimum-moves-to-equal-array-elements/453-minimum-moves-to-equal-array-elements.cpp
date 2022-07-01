class Solution {
public:
    int minMoves(vector<int>& nums) {
        //M1 understand
//         https://leetcode.com/problems/minimum-moves-to-equal-array-elements/discuss/93817/It-is-a-math-question
        
        
        
        
        
        //M2 understand
//     We have to increment n-1 elements by 1 to make them equal. This is equal to decrementing only 1 element by 1. Since we need to make all the elements equal we can consider the given problem to be equal to decrementing the max element by 1 in each move until they are equal to the minimum element in the array.
// For example- [5,6,7,8] can be made equal if we decrement number 8, three times and 7, two times and 6 one times. Decrementing 8 by 1 is equal to adding 1 to all the other elements.
// EX-- [1, 2 , 3 ]
//             Incrementing                Decrementing
// 1st:        2 , 3 , 3                     1 , 2 , 2
// 2nd:        3 , 4 , 3                     1 , 2 , 1
// 3rd:        4 , 4 , 4                     1 , 1 , 1
//         See the ans is same right ?
// Conclusion - We are just reversing the problem to make it simpler :)
//     We can get the decrementing result by :
//         Take the minimum number from the array and then substarct that minimum number from all the elements in the array, the final answer is the sum of the difference between the minimum number and the integer values in the given array.
//             Ex- [1 , 2 , 3 ] -->> ans = 1 - 1 + 2-1 + 3 - 1  = 3 
            
            
            int mini = *min_element(nums.begin() , nums.end() ) ; 
        int ans = 0 ;     
        for(auto x : nums ){
                ans += x - mini ; 
            }
            return ans ; 
            
            
            
        
        return 0 ; 
    }
};