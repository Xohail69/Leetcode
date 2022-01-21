class Solution {
public:
    int canCompleteCircuit(vector<int>& g, vector<int>& c) {
        
//         why we're not going back to the middle element ( from where we've started our journey) from the end to just check whether it's possible to make circular tour or not? It's because we've already checked previously that it's possible to come from the 0'th index to the middle. So no need to check for the remainig part of the circular tour since it will always be a valid tour.
        
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