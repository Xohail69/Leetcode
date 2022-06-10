class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256 , -1 ) ; 
        int left , right , ans ; 
        left = right = ans = 0 ; 
        int n = s.size() ; 
        while(right < n ){
            if(m[s[right] ] != -1  ) //if the new char we traversed is already visited(or present in the current substring  )
                left = max( m[s[right]] + 1 , left  )  ;//Move left one step ahead to the already visited char 
            m[s[right]] = right ; //update the new position 
            ans = max(ans , right - left + 1 ) ;
            right++ ;
        }
        return ans ; 
        
        
    } 
};