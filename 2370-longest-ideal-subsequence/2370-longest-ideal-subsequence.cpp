class Solution {
public:
    
    int longestIdealString(string s, int k) {
//         Similar to longest increasing subsequence with slight modification, consider a DP array of size 26 where each index coresponds to the size of maximum subsequence which ends with the character i (here characters are mapped from 0 - 25, i.e. a -> 0, b -> 1, .... z -> 25).

// Now consider iterating from every character in the string from left to right name this iterator x
// Now for every x there is some index (int)x - 'a' in the DP array say it et
// Now for every j from max(0, et - k) to min(25, et + k) DP[et] = max(DP[et], DP[j] + 1)
// This is, every character that ends with character j that can be used to append this character et , with maximum 1 + DP[j] length.

// Here the case where j = et should be taken separately because it might happen that it apear earlier and you might modify it several times.
        
        
        
        vector<int>dp (26 , 0 ) ; 
        int ans(0) ;
            for(auto x : s ){
                
                int et = x - 'a' ;
                
                //left limit 
                for(int j = et ; j >=0 and j >= et - k ; j-- ){
                    dp[et] = max(dp[et] , dp[j] + 1 ) ; 
                    
                    if(j == et and dp[j] == 0) {
                     dp[j] = 1 ;
                      ans = max(ans , dp[et]); continue;
                    }
                }
                
                
                //right limit 
                for(int j = et+1 ; j < 26 and j <= et + k ; j++ ){
                    dp[et] = max(dp[et] , dp[j] + 1 );
                }
                ans = max(ans , dp[et] ) ; 
                
            }
        return ans ; 
    
   
        
        
        
        
        
        
        
        
        
        
        
    }
};