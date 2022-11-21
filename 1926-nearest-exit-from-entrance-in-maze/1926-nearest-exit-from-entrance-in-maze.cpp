class Solution {
public:
    int nearestExit(vector<vector<char>>& g , vector<int>& e ) {
        g[e[0]][e[1]] = '+' ;
        int n = g.size() , m = g[0].size() ;
        int dirs[5] = {0 , -1 , 0 , 1 , 0 } ; 
        auto is_exit = [&](int i , int j ){
            if ( (i != e[0] or j != e[1]) and (i*j == 0 or i == n -1 or j == m -1 ) )
                return 1 ; 
            return 0 ; 
        };
        queue<array<int,3>> q ;
        q.push({e[0] , e[1] , 0} ) ; 
        while( q.size() ){
            auto [i , j , d ] = q.front() ;
            q.pop() ; 
            for(int k = 0 ; k < 4 ; k++){
                auto x = i + dirs[k] ;
                auto y = j + dirs[k+1] ; 
                if( x < 0 or x >= n or y < 0 or y >= m or g[x][y] == '+' )
                    continue ; 
                g[x][y] = '+' ;
                if(is_exit(x,y) ) return d+1 ; 
                q.push({x , y , d+1 } ) ; 
            }
        }
        return -1 ; 
    }
};