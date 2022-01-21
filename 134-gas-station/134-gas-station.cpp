class Solution {
public:
    int canCompleteCircuit(vector<int>& g, vector<int>& c) {
        
        int start(0) , current(0) ;
        if( accumulate(begin(g) , end(g) , 0) < accumulate(begin(c) , end(c) , 0) ) 
            return -1 ;
        for(int i = 0 ; i < g.size() ; i++ ) {
             current += g[i] - c[i] ;
            if(current < 0 ) {
                start = i+1 ;
                current = 0 ;
            }
            
        }
        return current < 0 ? -1 : start  ;
        
        
    }
};