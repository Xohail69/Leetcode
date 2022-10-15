class Solution {
public:
    int dp[101][101];
    int dfs(string &s, int left, int K) {
        int k = K;
        if(s.size() - left <= k) return 0;
        if(dp[left][k] >= 0) return dp[left][k];
        int res = k ? dfs(s, left + 1, k - 1) : 10000, c = 1;
        for(int i = left + 1; i <= s.size(); ++i) {
            res = min(res, dfs(s, i, k) + 1 + (c >= 100 ? 3 : (c >= 10 ? 2 : (c > 1 ? 1 :0))));
            if(i == s.size()) break;
            if(s[i] == s[left]) ++c;
            else if(--k < 0) break;
        }
        return dp[left][K] = res;
    }
    
    int getLengthOfOptimalCompression(string s, int k) {
        
//         dp[i][k] represent the minimum length of i-th index with k deletion.
// we can consider these situation, let's say the starting index is left, number of deletions is k:

// we delete s[left], which is dfs(left + 1, k - 1): moving to next index and k - 1;
// we use s[left] as an anchor, we iterate fromi whichi = left+1 to s.size(), if s[i] == s[left], then we can plus 1 to the count otherwise we need to delete it( s[i]) and then do --k.
// we can simply do if s.size() - left <= k return 0;.
        
        memset(dp, -1, sizeof(dp));
        return dfs(s, 0, k);
    }
};