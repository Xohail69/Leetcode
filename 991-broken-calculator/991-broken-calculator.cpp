class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
       int ans = 0 ; 
        while( startValue < target ){
            if(target&1 ){
                target++ ;
            }
            else{
                  target /= 2 ;
            }
            ans++ ;
        }
        return ans + startValue - target ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};