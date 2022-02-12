class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin() , events.end() ) ;
        int day = 0  , ans = 0  , i = 0 , n = events.size() ;
        
        // min heap.. stores the active events
        priority_queue<int , vector<int> , greater<int>> q ;
        while( !q.empty() or i< n  ) {
             // empty means that no active events is present .
            if(q.empty() ) day = events[i][0] ;
            
             // add all the active events
            while( i < n and events[i][0] <= day ) 
                q.push(events[i++][1] ) ;
            
            // remove the active event having earliest ending day..
            q.pop() ;
            ans++ ; 
            day++ ;
            
            
            // remove rest of the inactive eventss
            while(!q.empty() and q.top() < day ) 
                q.pop() ;
        }
        
        
        return ans ; 
    }
};