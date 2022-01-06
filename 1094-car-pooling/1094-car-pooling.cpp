class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        //TC - O(n) & SC - O(1) 
        //Process all trips, adding passenger count to the start location, and removing it from the end location. After processing all trips, a positive value for the specific location tells that we are getting more passengers; negative - more empty seats.
//Finally, scan all stops and check if we ever exceed our vehicle capacity.
        int cap[1001] = {} ;
        for(auto x : trips) {
            cap[x[1]] += x[0] ;
            cap[x[2]] -= x[0] ;
        }
        int c = 0 ;
        for(int i =0 ; i < 1001 ; i++  ) {
            c += cap[i] ;
            if(c > capacity) return false ;
        }
        return true ;
        
        
        
        
        
        
        //M2 We simply add the pairs of {start,passengers} and {end, -passengers} to our vector(These are the possible trigger points for car occupancy change).

// We sort all these triggers and check if occupancy is greater than capacity after each trigger.
        
//         vector<pair<int, int>> v;
        
//         for(int i = 0; i < trips.size(); i++){
//             v.push_back({trips[i][1], trips[i][0]});
//             v.push_back({trips[i][2], -trips[i][0]});
//         }
        
//         sort(v.begin(), v.end());
        
//         int filled = 0;
        
//         for(int i = 0; i < v.size(); i++){
//             filled += v[i].second;
//             if(filled > capacity) return false;
//         }
//         return true;
        
        
    }
};