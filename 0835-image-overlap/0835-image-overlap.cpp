class Solution {
public:
    int shift(int x , int y , vector<vector<int>>& a  , vector<vector<int>>& b ){
        int n = a.size() ; 
        int t = 0 ; 
        for(int i = 0 ; i < n ; i ++ ){
            for(int j = 0 ; j < n ; j++ ){
                if( (x + i < 0 or x + i >= n) or (y + j <0 or y + j >= n ) )
                    continue ; 
                if(a[i][j] + b[i+x][y+j] == 2 ) 
                    t++ ; 
            }
        }
        return t ; 
    }
    
    
    int largestOverlap(vector<vector<int>>& a , vector<vector<int>>& b ) {
        int ans = 0 ; 
        int n = a.size() ; 
        for(int i = -n +1 ; i < n ; i++ ){
            for(int j = -n+1 ; j < n ; j++ ){
                ans = max(ans , shift(i , j , a , b ) ) ;
            }
        }
        return ans ; 
    }
};