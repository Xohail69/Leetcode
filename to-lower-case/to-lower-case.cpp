class Solution {
public:
    string toLowerCase(string s) {
      
        for(auto &c : s) {
             if (c >= 'A' && c <= 'Z') {
                      c += 32;
                 
                 
    // or use Bit manipulation 
    //     Logic ==  difference between ASCII vale of lower and upper case is 32 ex:(a= 97,A=65 ==> (97-65) = 32) 32 = 2^5(0b00100000) so you can append the bit with OR condition 
      // c|=0b00100000;
                     }
        }
        
        
        
        
         //transform(s.begin(),s.end(),s.begin(),::tolower);
        return s; 
    }
};