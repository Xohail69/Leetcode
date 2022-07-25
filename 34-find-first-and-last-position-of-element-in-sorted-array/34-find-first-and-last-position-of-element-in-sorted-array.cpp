class Solution {
public:
    int first_pos(vector<int>& a , int x ){
        int n = a.size() ;
        int first = n  , l = 0 , h = n-1 ;
        while(l<=h) {
            int mid = l + (h -l)/2 ;
            if(a[mid] >= x) {
                first = mid ; h = mid-1 ;
            }
            else l = mid+ 1 ;
        }
        return first ;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        //M1
//         int first = -1 , last = -1 ; 
//       int l = 0 , n = nums.size() , h = n - 1 , mid ; 
//         //finding first occurence 
//         while(l <= h ){
//             mid = l+ (h-l)/2 ; 
//             if(nums[mid] == target ) {
//                 first = mid ; 
//                 h = mid -1 ;
                
//             }
//             else if( nums[mid] < target ) l = mid + 1 ; 
//             else h = mid -1 ; 
//         }
        
//         //finding second occurence 
//         l = 0 , h = n - 1 ;
//           while(l <= h ){
//             mid = l+ (h-l)/2 ; 
//             if(nums[mid] == target ) {
//                 last = mid ; 
//                 l  = mid + 1  ;
                
//             }
//             else if( nums[mid] < target ) l = mid + 1 ; 
//             else h = mid -1 ; 
//         }
//         return {first , last } ; 
        
        
        
        
         //M3 
        //Last occurrence is found by Using first occurrence function & finding the first occurrence of target + 1 & subtracting 1 from it 
        
        int first = first_pos(nums , target ) ;
        int last = first_pos(nums , target + 1 ) - 1 ; 
         if(first <= last) {
            return {first, last};
        }
        return {-1, -1};
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};