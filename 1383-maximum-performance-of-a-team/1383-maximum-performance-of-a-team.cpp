class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& eff , int k) {
        vector<pair<int,int>> eng(n) ; 
        for(int i = 0 ; i < n ; i++ ){
            eng[i] = {eff[i] , speed[i] } ; 
        }
        sort(rbegin(eng) , rend(eng) );
        long speed_sum =  0 , ans = 0 ; 
        priority_queue<int,vector<int>,greater<int>> pq ; 
        for(auto &[e,s] : eng ){
            speed_sum += s ; 
             // put the speed to priority queue
            pq.push(s) ;
            // we only need to choose at most k engineers
            // hence if the queue size is greater than k
            // we need to remove a candidate
            if(pq.size() >  k ){
                
                  // who to remove? of course the one with smallest speed
                speed_sum -= pq.top() ; 
                pq.pop() ;
            }
            ans = max(ans , speed_sum*e ) ; 
        }
        return ans % (int) (1e9 + 7);
    }
};