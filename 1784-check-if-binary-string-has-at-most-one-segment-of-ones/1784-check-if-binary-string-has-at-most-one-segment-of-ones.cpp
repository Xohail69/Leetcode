class Solution {
public:
    bool checkOnesSegment(string s) {
        
        //we want to have at most one segment of ones but in 10101011100 we have multiple segments that contains 1. For example 1000, 1111, 11110 will return true and 1001, 11101, 101010 will return false.
       //we need to check if "01" is present in s or not. If it is present, we can return False, else True.

// A few testcases to help understand the intuition:

// 1100 - True
// 11001 - False (since 01 is present).
// 111111000000 - True
// 1101010100 - False
// 1 - True
// 1111110000111 - False
        
        
        
        
        //TC - O(n) 
        return string::npos == s.find("01") ;
    }
};