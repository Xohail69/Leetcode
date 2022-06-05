class Solution {
public:
         
    void solve(int col , vector<string> &board , vector<vector<string>> &ans , int n ,
              vector<int> &leftRow , vector<int> &upperDia , vector<int> &lowerDia) {
        if(col == n ){
            ans.push_back(board) ;
            return ;
        }
        for(int row = 0 ; row < n ; row++ ){
            //M1
            // if(isValid(row , col , board , n ) ) {
            //     board[row][col] = 'Q' ;
            //     solve(col+1 , board , ans , n ) ;
            //     board[row][col] = '.' ;
            // }
            
            
            
            //M2
            if(leftRow[row]==0 and lowerDia[row + col ]  == 0 and
              upperDia[n - 1 + col - row ] == 0 ){
                 
                board[row][col] = 'Q' ;
                //Marking them as visited
                leftRow[row] = 1 ;
                lowerDia[row + col] =  1 ;
                upperDia[n - 1 + col - row ] = 1 ;
                solve(col+1 , board , ans , n , leftRow , upperDia , lowerDia  ) ;
                
                //Backtrack
                board[row][col] = '.' ;
                leftRow[row] = 0 ;
                lowerDia[row + col] =  0 ;
                upperDia[n - 1 + col - row ] = 0 ;
            }
            
        }
        
        
    }
    
    bool isValid(int row , int col , vector<string>&board , int n ){
        int r = row , c = col ;
        while(c >= 0 ) {
            if(board[r][c--] == 'Q' ) return false ;
        }
        c = col  ;
        while(r >= 0 and c >= 0 ){
            if(board[r--][c--] == 'Q') return 0 ;
        }
        r = row  , c = col ;
        while(r < n and c >= 0 ){
             if(board[r++][c--] == 'Q') return 0 ;
        }
        return 1 ;
        
        
    }
    
    
    int totalNQueens(int n ) {
        
        vector<vector<string>> ans ;
        vector<string> board(n , string(n , '.')) ;
        vector<int>leftRow(n , 0 ) , upperDia(2*n - 1 , 0 ) , lowerDia(2*n - 1 , 0 ) ;
        solve(0 , board , ans , n , leftRow , upperDia , lowerDia  ) ;
        return ans.size() ; 
        
        
        
        
        
        
        
        
        
        
        
    }
};