class Solution {
public:
    int numRescueBoats(vector<int>& p , int limit) {
        sort(p.begin() , p.end() ) ;
        int ans (0 ) ; 
        int l = 0  , h = p.size() - 1 ; 
        int s ; 
        while(l <=  h ) {
            s = p[l] + p[h] ; 
            if(s <= limit ) {
                l++ ; 
                h-- ; 
                //heavy or lite dono ko le liya , to badhao age dono ko  
            }
            else h-- ; //heavy ko le liya ab aage badho
            ans++ ; 
            
            
        }
        
           return ans ; 
    }
};