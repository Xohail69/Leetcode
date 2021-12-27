class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size() ;
        if(n & 1) return 0 ;
        
        int x(0) , y (0) ;
        for(auto &m : moves ) {
            switch(m) {
                case 'U' : y++ ; break ;
                case 'D' : y-- ; break ;
                case 'R' : x++ ; break ;
                case 'L' : x-- ; break ;
            }
        }
        return x == 0 and y == 0 ;
        

        
 
        
    }
};