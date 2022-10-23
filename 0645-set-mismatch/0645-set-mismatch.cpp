class Solution {
public:
    vector<int> findErrorNums(vector<int>& a ) {
//         int xo = 0 ; 
//         for(auto x : a ) xo ^=x ; 
//         int n = a.size() ; 
//         for(int i =  1  ; i <=  n ; i++ ){
//             xo ^= i ; 
//         }
//         int rightmost = xo & ~(xo - 1 ) ; 
//         int x1 = 0 , x2 = 0 ; 
//         for(auto i : a ){
//             if(rightmost & i )
//                 x1 ^= i ; 
//             else x2 ^= i ; 
//         }
//         for(int i = 1 ; i <= n ; i++ ){
            
//             if(rightmost & i )
//                 x1 ^= i ; 
//             else x2 ^=  i ; 
//         }
        
//         for(auto i : a ){
//             if(i == x1 )
//                 return {x1 , x2 } ; 
//         }
        
        // return {x2 , x1  } ; 
        
        
        
        
        
        
        
        
        
        int dup = -1 , miss = -1 ; 
        for(auto i : a ){
            i = abs(i) ; 
            if(a[i-1] < 0 )
                dup = i  ; 
            else a[i-1 ] *= -1  ; 
        }
        for(int  i = 0 ;i < a.size() ; i++  ) 
            if(a[i] > 0 )
                miss = i + 1 ; 
        return {dup , miss } ; 
        
        
        
    }
};