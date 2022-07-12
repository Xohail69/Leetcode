class Solution {
public:
    bool helper(vector<int> &m , int i , vector<int> &sides ){
        if(i == m.size() ) 
            return (sides[0] == 0 and sides[1] == 0  and sides[2] == 0 and sides[3] ==0 ) ;
            for(int j = 0 ; j < 4 ; j++ ){
                if(m[i] > sides[j] ) continue ; 
                sides[j] -= m[i] ; 
                if (helper(m , i + 1 , sides ) ) return 1  ;
                sides[j] += m[i] ; 
            }
        return 0 ; 
    }
    bool makesquare(vector<int>& m ) {
         if(m.size() < 4 ) return 0 ;
        int peri = accumulate(m.begin() , m.end() , 0 ) ; 
        if(peri % 4 != 0 ) return 0 ; 
        int side = peri/4 ; 
        vector<int> sides(4 , side ) ; 
        sort(m.begin(), m.end(), [](const int &l, const int &r){return l > r;});
        return helper(m , 0 , sides ) ; 
        
    
        
        
        
        
        
        
        
        
    }
};