class Solution {
public:
    int maxOperations(vector<int>& nums, int sum ) {
        
        
//    int n = nums.size()  , ans = 0 ;
//         unordered_map<int , int> m ;
//       for(auto x : nums ) m[x]++ ; 
//         for(auto& [k,v ] : m ) {
//               if(2*k == sum) ans += v / 2, v -= v/2*2; 
//             else if(v > 0 && m.count(sum-k) and  m[sum-k] > 0) {                
//                 int pair_cnt = min(v, m[sum-k]);
//                 ans += pair_cnt;
//                 v -= pair_cnt;
//                 m[sum-k] -= pair_cnt;   
//         }
//         }
       
// return ans ; 
        
        
        //Single traversal
        unordered_map<int, int> freq;
        int ans = 0;
        for(auto cur: nums){
            int complement = sum - cur;
            if(freq[complement] > 0){ans++; freq[complement]--;}
            else freq[cur]++;
        }
        return ans; 
        
        
        
        // M3 Sorting + Two pointer
//           sort(nums.begin(), nums.end());
//         int count = 0;
//         int left = 0;
//         int right = nums.size() - 1;
//         while (left < right && nums[left] < sum) {  // pruning:  nums[left] < k
//             if (nums[left] + nums[right] < sum) {
//                 left++;
//             } else if (nums[left] + nums[right] > sum ) {
//                 right--;
//             } else {
//                 left++;
//                 right--;
//                 count++;
//             }
//         }
//         return count;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};