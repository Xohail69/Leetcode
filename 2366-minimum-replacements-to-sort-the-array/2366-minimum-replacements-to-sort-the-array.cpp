class Solution {
public:
    typedef long long int ll ;
    long long minimumReplacement(vector<int>& nums) {
//         int ans(0)  ;
//         int n=a.size() , next = 1e9 + 7 ; 
//         for(int j = n - 1 ; j >= 0 ; j-- ) {
//             if(a[j] <= next ){
//                 next = a[j] ; 
//                 continue ; 
//             }
//             ll parts = ceil(a[j]/(double)next ) ; 
//             ans += parts - 1 ; 
//             next = parts ? a[j]/parts : 0  ; 
//         }
//         return ans ; 
        
        
        
         ll ans = 0;
        int n = nums.size(), nxt = 1e9+7;
        for (int j = n-1; j >= 0; j --) {
            if (nums[j] <= nxt) {
                nxt = nums[j];
                continue;
            }
            ll parts = ceil(nums[j]/(double)nxt);
            
            ans += parts-1;            
            nxt = nums[j] / parts;;
        }
        return ans;
        
        
        
        
        
        
        
        
        
//        
        
        
        
    }
};