class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        //counting each letter & using extra space
//         unordered_map<char,int> m ;
//             for(auto &x: name) {
//                 m[x]++ ;
//             }
//             for(auto &y: typed) {
//                 if(m.count(y) ) m[y]-- ;
//                 else return false ;
//                 if(m[y] > 0 ) return false ;
//             }      
//         return true ;
        
        
        //M2
        int n = typed.size() , m = name.size() ;
        int i = 0 ; 
        for(int j = 0 ; j<n ; j++  ){
            if(i < m and name[i] == typed[j] ) i++ ;
            else if( !j or typed[j] != typed[j-1] ) return false ;
        }
        return i == m ;
        
        
        
        
        //M3
//         int n = typed.size() , m = name.size() ;
//         int i = 0  , j = 0 ; 
//         while(i < m or j < n ) {
//             char curr = name[i] ;
//             if(name[i] != typed[j] ) return false ;
//             i++ ; j++ ;
//             if(name[i] != typed[j]) {
//                 while(curr == typed[j] ) j++ ;
//             }
//         }
//         return true ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};