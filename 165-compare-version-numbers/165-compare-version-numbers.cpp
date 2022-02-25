class Solution {
public:
    int compareVersion(string version1, string version2) {
//         int a = 0 , b = 0  ; \
//             int  i = 0  , j = 0 ; 
//         int n = v1.size() , m = v2.size() ; 
//         while(i < m or j < m ) {
//             if( i < n  and v1[i] != '.' )  a += v1[i++] - '0'  ;
//             if( j < m  and v2[j] != '.' )  b += v2[j++] - '0'  ;
//             if(i < n and j < m and v1[i] =='.' and v2[i] == '.'){
//                 if( a==b ) return 0 ; 
//                 return a < b ? -1 : 1 ; 
//             }
//         }
//          if( a==b ) return 0 ; 
//                 return a < b ? -1 : 1 ; 
     
    int i = 0; 
    int j = 0;
    int n1 = version1.size(); 
    int n2 = version2.size();
    
    int num1 = 0;
    int num2 = 0;
    while(i<n1 || j<n2)
    {
        while(i<n1 && version1[i]!='.'){
            num1 = num1*10+(version1[i]-'0');
            i++;
        }
        
        while(j<n2 && version2[j]!='.'){
            num2 = num2*10+(version2[j]-'0');;
            j++;
        }
        
        if(num1>num2) return 1;
        else if(num1 < num2) return -1;
        
        num1 = 0;
        num2 = 0;
        i++;
        j++;
    }
    
    return 0;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};