class Solution {
public:
   static bool comp(vector<int> &a , vector<int> &b){
        return a[1]-a[0] > b[1]-b[0] ;
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size() ;
        sort(costs.begin() , costs.end() , comp ) ;
        int ans(0) ;
        for(int i = 0 ; i < n ; i++ ){
            ans += i >= n/2 ? costs[i][1] : costs[i][0] ;
            
        }
        return ans ; 
        
        
        
// //M2 
//         int n = costs.size() ; 
//             vector<int> costDiff(n) ;
//         int totalcityAcost = 0 ; 
//         int i = 0 ; 
//         for(auto &x : costs){
//             totalcityAcost += x[0] ;
//             costDiff[i++] = x[1] - x[0] ;
//         }
//         sort(costDiff.begin() , costDiff.end() ) ;
//         for(int i = 0 ; i < n/2  ; i++ ) {
//             totalcityAcost += costDiff[i] ;
//         }
//         return totalcityAcost ; 
        
        
        
        
        
        
        
        
        
        
        
    }
};