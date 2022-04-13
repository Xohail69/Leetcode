class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n , vector<int>(n , 0 )) ;
        
        
         int top(0) , down (n-1) , left(0) , right(n-1)  ;
        int d= 0 ; 
       
        //Direction taken as 
        // d= 0 move right 
        // d= 1 move down 
        // d= 2 move left 
        // d= 3 move up 
        int m = 1 ;
        while(top<=down and left<=right ) {
            if(d==0){
                for(int i = left ; i<= right ; i++)
                            mat[top][i] = m++ ;
                top+=1 ;
            }
            else if( d==1) {
                for(int i = top ; i<=down ; i++ ) 
                             mat[i][right] = m++ ;
                right -=1 ;
            }
            else if(d==2) {
                for(int i = right ; i>=left ; i--)
                           mat[down][i] = m++ ;
                    down -=1 ;
                
            }
            else if(d==3){
                for(int i = down ; i>=top ; i--)
                            mat[i][left] = m++ ;
                left +=1 ;
                
            }
            d = (d+1)%4 ;
           
        }
        return mat ;
        
        
        
    }
};