class Solution {
public:
     bool isPossible(vector<int> &p , int k , int h ) {
       long long int time = 0 ; 
        for(auto x: p){
            time += ceil(x*1.0/k);
        }
        return time <= h  ;
    }
    int minEatingSpeed(vector<int>& p, int h) {
         if(p.size()==1)
            return ceil(p[0]*1.0/h);
        if(h == p.size() ) return *max_element(p.begin() , p.end() ) ;
        
        //Applying BS on the speed range to find minimum speed
        int l = 0 , hi = *max_element(p.begin() , p.end() )  ;//max speed in which all will be eaten up 
            
        int k = INT_MAX  , mid ; 
        
        while(l <= hi ) {
            mid = l + (hi-l)/2 ;
            if( isPossible(p , mid , h ) ) { //if it is possible to eat all with the speed mid , then decrease the search space to find more minimum speed
                k = mid ;
                hi = mid -1 ;
            }
            else l = mid + 1 ;
        }
        return k ;
    }
};