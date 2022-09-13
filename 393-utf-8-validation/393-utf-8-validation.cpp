class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int bytes = 0 ; 
        int mask1 = 1<<7 ; 
        int mask2 = 1<<6 ; 
        for(int i = 0 ; i < data.size() ; i++ ){
            if(bytes == 0 ){
                int mask = 1<<7 ; 
                while( (mask&data[i]) != 0 ){
                    bytes++ ; 
                    mask = mask>>1 ; 
                }
                if(bytes == 0 ) 
                    continue ; 
                if(bytes > 4 or bytes == 1)
                    return false ; 
                               
            }   
            else{
                  if (!((data[i] & mask1) != 0 && (mask2 & data[i]) == 0)) {
                    return 0 ; 
                }
            }
            bytes-- ; 
        }
        return bytes == 0 ; 
    }
};