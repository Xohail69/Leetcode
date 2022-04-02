class Solution {
public:
      bool isPal(string &s , int l , int h ) {
        for(int i = l , j = h ; i < j ; i++ , j-- ) {
            if( s[i] != s[j] ) return false ;
        }     
      return true ; }
    
    bool validPalindrome(string s) {
        //M1
//            for (int i = 0, j = s.size() - 1; i < j; i++, j--)
//             if (s[i] != s[j]) {
//                 int i1 = i, j1 = j - 1, i2 = i + 1, j2 = j;
//                 //imagine deleting the jth char & checking that string is  Palin from i to j-1
//                 while (i1 < j1 && s[i1] == s[j1]) {i1++; j1--;};
                
                
//                  //imagine deleting the ith char & checking that string is  Palin from i+1 to j
//                 while (i2 < j2 && s[i2] == s[j2]) {i2++; j2--;};
//                 return i1 >= j1 || i2 >= j2;
//             }
//         return true;
        
        
        
        
        //M2  , difference is just , we are using a helper funciton here 
        for(int i = 0 , j = s.size()-1 ;  i< j ; i++ , j--){
            if(s[i] != s[j]) return isPal(s , i+1 , j) or isPal(s , i , j-1) ;
        }
        return true ;
        

  }      
        
 






};