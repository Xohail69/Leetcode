class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
//         "abc" with shifts=[3+5+9 , 5+9 , 9 ] == [17 , 14 , 9]
//         We observe that we have to maintain a reverse prefix sum of the shifts array and this will be equal to the number of shifts for each character.
        //O(n) 
        int psum = 0  , n = s.length() ;  //psum i.e prefix sum from the back will be the amount of shift 
        for(int i = n - 1 ; i >= 0 ; i-- ) {
            psum = (psum + shifts[i])%26 ;
            s[i] = ( s[i] - 'a' + psum )%26 + 'a' ; //Last 'a' is added to covert it back to alphabet
            
        }
        return s ;
        
        
    }
};