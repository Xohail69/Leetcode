class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& a) {
     
        //https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/discuss/296138/Java-solution-from-combination-perspective-with-best-explanation
        
//         TC(Time Complexity): O(n)
// SC(Space Complexity): O(60) = O(1)
//         vector<int>h ( 60 , 0 ) ;
//         for(auto &x : a ) h[ x%60 ]++ ;
//         int ans = 0 ; 
//         for(int i = 1 ; i < 30 ; i++ ) {
//             ans += h[i]*h[60-i] ;
//         }
        
        
//          auto sumN = [&](int n){
//           return n*(n+1)/2 ;
//           };
//         //Special case for 0 & 30 ;
//         ans += sumN( h[0]-1 ) + sumN( h[30]-1 ) ;
//         return ans ;
        
        
        
        
        
        
        
        
        
        //M2
//         Explanation:
// reason for (60 - t % 60) % 60 expression: If the map already has 30, we need to look for the number is having remainder or not, this can be achieved with 60 - t%60. Eg, if the number is 210. 60 - 210 % 60 returns 30. 30 is already in the list this can be paired up to form (30,210).

// Reason for an extra % 60 over (60 - t % 60). if the t = 60, the expression 60 - t % 60 returns 60. this is beyond our remainers range (0,59)for 60. to make it with in the range in the case of 60 and multiples of 60, we are ufing an extra %60 on top of (60 - t % 60). this makes the remainder 0. which is with in the range of remainders for 60(0,59)
        int res = 0 ;
         vector<int> m(60);
  for (auto t : a) {
    res += m[(60 - t % 60) % 60];
    ++m[t % 60];
  }
  return res;
        
        
    }
};