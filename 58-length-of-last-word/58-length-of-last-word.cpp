class Solution {
public:
    #define db1(x) 						  cout<<#x<<"= "<<x<<'\n'
#define db2(x,y) 					  cout<<#x<<"= "<<x<<", "<<#y<<"= "<<y<<'\n'
#define db3(x,y,z) 				  cout<<#x<<"= "<<x<<", "<<#y<<"= "<<y<<", "<<#z<<"= "<<z<<'\n'
    
    
    
    
    int lengthOfLastWord(string s) {
        // int n = s.length() ; 
        // int i = n - 1 ;
        // while(s[i] == ' ' ) i-- ;
        // int c = 0 ;
        // for(  ; i >= 0 ; i-- ) {
        //     if(s[i] != ' ') c++ ;
        //     else break ;
        // }
        // return c ;
        
        
        
        
        
//         int len = 0, tail = s.length() - 1;
//         while (tail >= 0 && s[tail] == ' ') tail--;
//         while (tail >= 0 && s[tail] != ' ') {
//             len++;
//             tail--;
//         }
//         return len;
        
        
        
        
         stringstream ss;
        ss<<s;
       
        string temp;
        while(ss>>temp){ }
        return temp.size();
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};