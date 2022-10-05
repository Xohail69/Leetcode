class Solution {
public:
    string shortestCommonSupersequence(string x , string y ) {
        int n = x.size() , m = y.size() ; 
        vector<vector<int>> dp( n + 1 , vector<int>(m + 1 , 0 ) ) ; 
        for(int i = 1 ; i < n + 1 ; i++ ){
             for(int j = 1 ; j < m + 1 ; j++ ){
                 if(x[i-1] == y[j-1] ){
                     dp[i][j] = 1 + dp[i-1][j-1] ; 
                 }
                 else dp[i][j] = max(dp[i-1][j] , dp[i][j-1] ) ; 
             }
        }
        
        string ans; 
        int i = n , j = m  ; 
        while(i > 0 and j > 0 ){
            if(x[i-1] == y[j-1] ){
                ans += x[i-1] ; 
                i-- ; j-- ; 
            }
            else{
                
//                 When there is a mismatch , we are ignoring character from either String x or String y.
// dp[i-1][j] --> Ignoring the character from String x
// dp[i][j-1] --> Ignoring the character from String y

// So when dp[i][j-1] > dp[i-1][j] , this means ignoring the character from String x is giving maximum LCS. Since this ignored character will no longer involve in the comparison process, we should include this ignored character in the result.
                 
                
                
                // We have to go in the direction of maximum because this has yielded maximum LCS
			// While moving in that direction we have to include the mismatched character 
			// from the String which we are moving away from 
			// Here we are moving away from String y, hence adding that character to the res
                if(dp[i][j-1] > dp[i-1][j] ){
                    ans += y[j-1] ; 
                    j-- ; 
                }
                else {
                    ans += x[i-1] ; 
                    i-- ; 
                }
            }
        }
        while( i > 0 ){
            ans += x[i-1] ; 
            i-- ; 
        }
        
        while(j > 0 ){
            ans += y[j-1] ; 
            j-- ; 
        }
        reverse(ans.begin() , ans.end() ) ; 
        return ans ; 
        
        
        
        
        
        
        
        
        
        
    }
};