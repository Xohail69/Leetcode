class Solution {
public:
    
    int longestIdealString(string s, int k) {
        
        
        
        
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
                
                
                
                //right
                for(int j = et+1 ; j < 26 and j <= et + k ; j++ ){
                    dp[et] = max(dp[et] , dp[j] + 1 );
                }
                ans = max(ans , dp[et] ) ; 
                
            }
        return ans ; 
    
   
        
        
        
        
        
        
        
        
        
        
        
    }
};