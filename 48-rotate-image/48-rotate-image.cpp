class Solution {
public:
        
//         M4 https://leetcode.com/problems/rotate-image/discuss/1449737/Rotation-90Code-180-270-360-explanation-Inplace-O(1)-Space
        
    void rotate(vector<vector<int>>& matrix) {
//      M1
            /*
 * clockwise rotate
 * first reverse up to down, then swap the symmetry diagonally
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/
        
// //         Reversing all columns
//         reverse(matrix.begin() , matrix.end()  ) ; 
        
// //         Transposing
//         int n = matrix.size() ; 
//         for(int i = 0  ; i < n ; i++ ){
//             for(int j = i + 1 ; j < n ; j++ ){
//                 swap(matrix[i][j] , matrix[j][i] ) ;
//             }    
//         }
        
        
//         M2
//         First do transpose then reverse row wise 
         int n = matrix.size() ; 
        for(int i = 0  ; i < n ; i++ ){
            for(int j = i + 1 ; j < n ; j++ ){
                swap(matrix[i][j] , matrix[j][i] ) ;
            }    
        }
        for(auto &x : matrix ){
            reverse(begin(x) , end(x) ) ;
        }
        
        
        
        
        
        
        
        
//         M3 This rotates ring by ring
//           int n = matrix.size();
//         int a = 0;
//         int b = n-1;
//         while(a<b){
//             for(int i=0;i<(b-a);++i){
//                 swap(matrix[a][a+i], matrix[a+i][b]);
//                 swap(matrix[a][a+i], matrix[b][b-i]);
//                 swap(matrix[a][a+i], matrix[b-i][a]);
//             }
//             ++a;
//             --b;
//         }
        
        
        

//         M5  Rotate Groups of Four Cells
        //   int n = matrix.size(); 
        // for (int i = 0; i < (n + 1) / 2; i ++) {
        //     for (int j = 0; j < n / 2; j++) {
        //         int k = n - 1 ; 
        //         int temp = matrix[k - j][i];
        //         matrix[k - j][i] = matrix[k - i][n - j - 1];
        //         matrix[k - i][k - j] = matrix[j][k -i];
        //         matrix[j][k - i] = matrix[i][j];
        //         matrix[i][j] = temp;
        //     }
        // }
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    /*
 * anticlockwise rotate
 * first reverse left to right, then swap the symmetry
 * 1 2 3     3 2 1     3 6 9
 * 4 5 6  => 6 5 4  => 2 5 8
 * 7 8 9     9 8 7     1 4 7
*/
void anti_rotate(vector<vector<int> > &matrix) {
    for (auto vi : matrix) reverse(vi.begin(), vi.end());
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);
    }
}
    
    
    
};