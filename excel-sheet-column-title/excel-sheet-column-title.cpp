class Solution {
public:
    string convertToTitle(int n) {
        
        //https://leetcode.com/problems/excel-sheet-column-title/discuss/441430/Detailed-Explanation-Here's-why-we-need-n-at-first-of-every-loop-(JavaPythonC%2B%2B)
        string ans ;
        while(n) {
            n -=1 ;
            int curr = n%26 ;
            n /=26 ;
            ans.push_back(curr + 'A') ; 
        }
        reverse(begin(ans) , end(ans) ) ;
        return ans ;
        
        
        
        
        
        //return n == 0 ? "" : convertToTitle((n - 1) / 26) + (char) ((n - 1) % 26 + 'A');
        
        
    }
};