class Solution {
public:
    bool isSafe(vector<string> & board , int r , int c ){
        int dr = r , dc = c ; 
        while(c >=0 ){
            if(board[r][c] == 'Q' ) 
                return 0 ; 
            c-- ; 
        }
        c = dc ; 
        
        while(r >= 0 and c >= 0 ) {
               if(board[r][c] == 'Q' ) 
                return 0 ; 
            r-- ; 
            c-- ; 
        }
        r = dr ; 
        c = dc ; 
        while(r < board.size()  and c >= 0 ) {
               if(board[r][c] == 'Q' ) 
                return 0 ; 
            r++ ;
            c-- ; 
        }
        return 1 ; 
        
    }
    
    void solve1(int col , vector<string> &board , vector<vector<string>> &ans , int n ){
        if(col == n ){
            ans.push_back(board) ; 
            return ; 
        }
        for(int row = 0 ; row < n ; row++ ){
            if(isSafe(board , row , col ) ) {
                board[row][col] = 'Q' ;
                solve1(col + 1 , board , ans , n ) ;
                board[row][col] = '.' ; 
            }
        }
        
        
        
    }
    
       void solve(int col , vector<string> &board , vector<vector<string>> &ans , int n ,  vector<int> &leftR ,  vector<int> &upperD ,  vector<int> &lowerD ){
           if(col == n ){
            ans.push_back(board) ; 
            return ; 
        }
        for(int row = 0 ; row < n ; row++ ){
            
            int ix = row + col  ; 
            if( leftR[row] or upperD[ix] or lowerD[n - 1 + ix ]  ) 
                continue ;
            
            
                board[row][col] = 'Q' ;
                leftR[row] = 1 ;
                upperD[ix] = 1 ; 
                lowerD[n - 1 + ix] = 1 ;
                solve1(col + 1 , board , ans , n ) ;
                board[row][col] = '.' ; 
                leftR[row] = 0 ;
                upperD[ix] = 0 ; 
                lowerD[n - 1 + ix] = 0 ;
            
        }
           
           
           
       }
    
    
    
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> ans ; 
        vector<string> board (n , string(n , '.' ) ) ; 
       
        
        
        solve1(0 , board , ans , n ) ;
        return ans ; 
        
        
        //Optimized 
        // int m = 2*n - 1 ; 
        // vector<int> leftR(n , 0 ) , upperD(m , 0 ) , lowerD(m , 0 ) ; 
        // solve(0 , board , ans , n  , leftR , upperD , lowerD ) ; 
        // return ans ; 
        
        
        
        
        
        
        
        
        
    }
};