class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        // int x(0) , y(0) , 
        // for(int i = 0 ; i< n ; i++ ) {
        //     x ^= nums[i] ; // ex - array is 3,0,1 then x will store  3^0^1 
        //     y ^= (i+1) ;    // here y will store 1^2^3
        // }
        // return x^y ;
         // since a^a = 0 , so the number present both in x and xy will cancel out and the element which is not present in x . i.e 2 will be returned .
        
        
        
        //same process as above in more concise way 
        int ans = nums.size();
        for (int i = 0; i < nums.size(); i++)
            ans ^= i ^ nums[i];
        return ans ;
        
        
        
        //Sum upto n method
       // return n*(n+1)/2 - accumulate(nums.begin() , nums.end() , 0) ;
    }
};


