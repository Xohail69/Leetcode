class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
         int m = mat.size() , n = mat[0].size() ;
        
        //Using BS
        //n * m matrix convert to an array => matrix[x][y] => a[x * m + y]
        //an array convert to n * m matrix => a[x] =>matrix[x / m][x % m];
//         int h = m*n -1 ;    
//         int l = 0 ;
//         while(l<= h ){
//            int mid = l + (h-l)/2 ;
//             int a = mat[mid/n][mid%n] ;
//             if(a== tar ) return 1 ;
//             else if( a > tar) h = mid - 1 ;
//             else l = mid + 1 ;
//         }
        
//         return 0 ;
        
        
        //Two pointer approach
        int i = 0 , j = mat[0].size() - 1 ;
        while(i < m and j>= 0){
            
            
            if( tar == mat[i][j] ) return 1 ;
            else if(tar > mat[i][j]) i++ ;
            else j-- ;
            
            
        }
        
        return 0 ;
        
        
        
        
    }
};