class Solution {
public:
    int solve(int i , int j , int m , int n , vector<vector<int>> &dp){
        if(i == m - 1 and j == n - 1 ) 
            return dp[i][j] = 1 ;
        
        
        
        if(i < m and j < n ){
            if(dp[i][j] != 0  ) return dp[i][j] ;
            return dp[i][j] = solve(i+1 , j , m , n ,dp ) + solve(i , j+1 , m , n , dp ) ;
        }
        return  0 ; 
        
        
        
        
        
    }
    
    int uniquePaths(int m, int n) {
        //Memoization
      //  vector<vector<int>> dp(m , vector<int> (n , 0 )) ;
         //solve(0 , 0 , m , n , dp ) ; 
        
        
        //Tabulation
//          vector<vector<int>> dp(m , vector<int> (n , 1 )) ;
//         for(int i = m - 2 ; i >= 0 ; i-- ){
//             for(int j = n -2 ; j>=0 ; j-- ){
//             dp[i][j] = dp[i+1][j] + dp[i][j+1] ;
//             }
//         }
        
//         return dp[0][0] ;
        
        
        
        
        //M3 using combinatorics
//         We start at (0, 0) cell and move to (m-1, n-1) cell.
// We need to make m-1 down-moves and n-1 right-moves to reach the destination cell.
// Thus, we need to perform a total number of m+n-2 moves.
// At each cell along the path, we can choose either the right-move or down-move and we need to find the number of unique combinations of these choices (which eventually leads to unique paths).
// This is nothing but calculating the number of different ways to choose m-1 down-moves and n-1 right-moves from a total of m+n-2 moves. Mathematically, this can be represented as -
        // (m+n-2)C(n-1) = (m+n-2)C(m-1)
        
        int N = n + m - 2 ;
        int r = m - 1 ;
        double ans = 1 ;
        for(int i = 1 ; i <=r ; i++ ){
            ans = ans*(N - r + i )/i ;
        }
        return (int)ans ;
        
        
        
        
        
        
        
        
        
    }
};