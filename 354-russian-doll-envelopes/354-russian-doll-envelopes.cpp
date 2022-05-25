class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
//         int n = envelopes.size() ; 
//         if( !n ) return 0 ; 
//         int maxi  = 1 ;
//         sort(envelopes.begin() , envelopes.end() ) ;
//         vector<int>dp(n+1 , 1 ) ; 
//         for(int i = 1 ; i< n ; ++i ){
//             for(int j = 0 ; j < i ; j++ ){
//                 if( envelopes[i][0] > envelopes[j][0] 
//                   and envelopes[i][1] > envelopes[j][1] 
//                   and (1 + dp[j]) > dp[i] )
//                     dp[i] = 1 + dp[j] ;
//                 maxi = max(maxi , dp[i] ) ; 
//             }
//         }
        
//         return maxi ; 
        
   sort(envelopes.begin(), envelopes.end(), [](vector<int>& a, vector<int>& b) 
             -> bool {return a[0] == b[0] ? b[1] < a[1] : a[0] < b[0];});
        vector<int> dp;
        for (auto& env : envelopes) {
            int height = env[1];
            int left = lower_bound(dp.begin(), dp.end(), height) - dp.begin();
            
            if (left == dp.size()) dp.push_back(height);
            dp[left] = height;
        }
        return dp.size();
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};



