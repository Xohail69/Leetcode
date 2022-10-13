class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size() , m = matrix[0].size() ; 
//         BF
//         vector<int> row(n , 0 ) , col(m , 0) ; 
//         for(int i = 0 ; i < n ; i++ ){
//             for(int j = 0  ; j < m ; j ++ ){
//                 if(  !matrix[i][j] ){
//                     row[i] = 1 ;
//                     col[j] = 1 ; 
//                 }
//             }
//         }
//           for(int i = 0 ; i < n ; i++ ){
//             for(int j = 0  ; j < m ; j ++ ){
//                 if( row[i] or col[j]  ){
//                     matrix[i][j] = 0 ; 
//                 }
//             }
//         }
        
        
//         Optimize 
        bool isCol = false ; 
          for(int i = 0 ; i < n ; i++ ){
            if(matrix[i][0] == 0 ) isCol = 1 ;
              for(int j = 1  ; j < m ; j ++ ){
                
                if(  !matrix[i][j] ){
                    matrix[i][0] = 0 ; 
                    matrix[0][j] = 0 ; 
                }
            }
        }
        
        for(int i = n -1 ; i >=0 ; i-- ){
            for(int j = m-1 ; j >=1 ; j-- ){
                if(!matrix[i][0] or !matrix[0][j] ){
                    matrix[i][j] = 0 ; 
                }
               
            }
             if(isCol ){
                    matrix[i][0] = 0 ; 
                }
        }
        
        
    
    }
};