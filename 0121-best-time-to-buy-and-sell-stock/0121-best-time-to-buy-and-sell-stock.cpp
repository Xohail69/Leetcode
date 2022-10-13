class Solution {
public:
    int maxProfit(vector<int>& p ) {
        int ans = INT_MIN ; 
        int buy = p[0] ;
        for(auto sell : p ){
            int profit = sell - buy ; 
            if(buy > sell ){
                buy = sell ;
            }
           ans = max(ans , profit) ; 
        }
        return ans; 
    }
};