class Solution {
public:
    string addBinary(string a, string b) {
        string s = "" ;
        int i = a.size() - 1 , j = b.size() - 1 , c = 0  ; 
        while( i >= 0 or j >= 0 or c == 1 ){
            c += i>=0 ? a[i--] - '0' : 0 ;
            c += j>=0 ? b[j--] - '0' : 0 ;
            s =  char(c % 2 + '0') + s  ; //c%2 means insert 0 if carry==0  or carry==2 (1+1) because ('1'+'1'=0 in binary) else insert 1 ('0'+'1'=1). Adding '0' to convert in ascii from integer 
            //We can also write above line as 
            //s += char( (c & 1) + '0') ;
            
            
            c /= 2; //if c==2 or 3, there is a carry i.e 1 otherwise no carry (3 in case if prev c=1 and a[i]=1 and b[i]=1)
        
        }
        //reverse(begin(s) , end(s) )  ;
        return s ;
     
        
        
        
       
        
        
        
        
        
        
        
        
        
        
    }
};