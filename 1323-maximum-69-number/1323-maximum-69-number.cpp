class Solution {
public:
    int maximum69Number (int num) {
        // string t = to_string(num) ; 
        // for(int i= 0 ; i < t.size() ; i++ ){
        //     if(t[i] == '6') {
        //         t[i] = '9' ; 
        //         break ; 
        //     }
        // }
        // int m = stoi(t) ; 
        // return m ; 
        
        
//         M2 without conversion to string 
//         first we'll start iterating from the zeroth position of num 
//         & find the position of last six then add 3*position to it 
            
        int n = num ; 
        int p = 1 ; //position 
        int maxp = 0 ; //last position of six from RHS i.e ones tens thousands
        while( n ){
            int digit = n%10 ; 
            if(digit == 6 )
                maxp = p ; 
            p *= 10 ; 
            n /= 10 ; 
        }
        num += 3*maxp ; 
        return num ; 
        
        
        
        
        
        
        
        
        
        
    }
};