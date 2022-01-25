class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy = INT_MAX  , profit = INT_MIN ;
        for(auto x : p) {
            buy = min(buy , x ) ;
            profit = max(profit , x - buy) ;
        }
        return profit ;
        
        
    }
};