class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int n = nums.size() ;
//         unordered_map<int, int> m; 
     
//         for(auto x : nums ) m[x]++ ;
//         for(auto y : m ){
//             if(y.second > n/2) return y.first ;
            
//         }
//         return 0 ;
        
        //Sorting
        // It means that MORE THAN HALF of the array is occupied by MAJORITY ELEMENT. It means that index n/2 (of sorted array) definitely contains the majority element. So will just return that.
//         sort(nums.begin() , nums.end() ) ;
//         return nums[n/2] ; //Basic intuition , dry run examples
        
        // Boyer-Moore Voting algo  //best
        //Idea: We elect a candidate for being the majority element and then if the element occurs, increase the possibility (count) of it being the real majority else decrease the possibility strength (count).
        int count = 0  , candidate = 0 ;
        for(auto x: nums) {
            if(count == 0 ) candidate = x ;
            if(x == candidate ) count++ ;
            else count-- ;
        }
        return candidate ;
        
        
        
    }
};