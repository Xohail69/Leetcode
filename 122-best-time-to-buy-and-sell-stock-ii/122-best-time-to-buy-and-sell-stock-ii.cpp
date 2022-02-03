class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        ios_base::sync_with_stdio(0) ;
        cin.tie(NULL) ;
        //Make the graph of array 
//         The general idea is to buy stock at valleys (lowest price) and then sell stock at its next peak (highest price). In the below graph, there are two valleys and two peaks. Since (1) we have to buy stock before selling it and (2) we can not have back-to-back buy or sell trades, thus there are two options of trading stocks.

// Option 1: Buy stock at valley[i] then sell at peak[i] makes profit A (peak[i] - valley[i]). Then buy stock at valley [j] and sell at peak[j] makes proft B (peak[j] - valley[j]). So the total profit of this trade option is A + B.

// Option 2: Skip the intermediate trades, i.e,, we buy stock at valley[i] then sell at peak[j]. In this case, the total profit will be C (peak[j]-valley[i]).

// Based on the graph made , A + B > C (if not, peak[i] and valley[j] won't exist). So in order to maximize the profit, we can buy stock at valleys and then sell stock at peaks.
        int n = p.size() ;
        int diff = 0 ; 
        int res = INT_MIN ;
        for(int i = 1 ; i < n ; i++ ) {
            if(p[i] > p[i-1] )
                diff += p[i] - p[i-1] ;
            //or we can do this also
            //  res += max(prices[p] - prices[p - 1], 0);    
        }
        return diff ; 
        
        
        
//         The main idea is that we want to buy when the price is the lowest, and sell when it's the highest.
// So we loop while the next stock price is lower - prices[i] >= prices[i+1]. When we reach a valley - a local minimum - we buy.
// Now, we loop while the next stock price is higher, to get to the peak - a local maximum - and then we want to buy.

// Time Complexity: O(n)
// Space Complexity: O(1)
        
        
        
    }
};