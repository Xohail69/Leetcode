class Solution {
public:
    #define d2dv(v)       { cout<<#v<<":"<<nl ;  for (auto &x : v) { for (auto y : x) {	cout << y << " "; } cout << nl; }   }
const char nl = '\n';

    int uniquePathsWithObstacles(vector<vector<int>>& o ) {
        int n = o.size() , m = o[0].size() ;
        
        if(o[0][0] or o[n-1][m-1] ) return 0 ;//checking for corner cases
        
        
          o[0][0] = 1 ;
        //filling first column
        for(int i = 1 ; i < n ; i++ )
            if( o[i][0] or o[i-1][0] == 0 ) //if there is obstacle at current cell or obstacle at cell above then current cell can't be reached so mark it as 0  
                o[i][0] = 0 ;
            else o[i][0] = 1 ; 
        //filling first row
        for(int j = 1 ; j < m ; j++ )
            if( o[0][j] or o[0][j-1] == 0 ) //if there is obstacle at current cell or obstacle at cell previous then current cell can't be reached so mark it as 0  
                o[0][j] = 0 ;
            else o[0][j] = 1 ;
      
        // d2dv(o) ;
        
        for(int i = 1 ; i < n ; i ++){
            for(int j = 1 ; j<m ; j ++ ){
                if(o[i][j] ) o[i][j] = 0 ; //if there is obstacle then no contribution
                else
                o[i][j] = o[i-1][j] + o[i][j-1] ;
            }
        }
     //  d2dv(o) ;
        
        return o[n-1][m-1] ;
}
};