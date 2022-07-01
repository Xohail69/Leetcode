class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt , int ts) {
            sort(bt.begin() , bt.end() , [&](vector<int> &x , vector<int> &y){
                return x[1] > y[1] ;
            }) ; 
        int ans (0 ) ; 
        for(auto &x : bt ){
            if(x[0] < ts ){
                ans += x[1]*x[0] ; 
                ts -= x[0] ; 
            }
            else {
                ans += ts*x[1] ;
                break ;
            }
        }
        return ans ; 
    }
};