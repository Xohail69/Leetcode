class Solution {
public:
    int expand_around_center(string s , int i , int j ){
        while(i >= 0 and j < s.size() and s[i] == s[j] ){
            i-- ; 
            j++ ; 
        }
        return j - i - 1 ; 
    }
    
    string longestPalindrome(string s) {
//          // edge cases
//         if(s.length() == 0 || s.length() == 1) return s;
        
//         // to hold max len and its starting index 
//         int maxLenBeginIndex = 0;
//         int maxLen = 1;
        
//         int mid = 0;
//         while(mid < s.length()){
            
//             // calculating middle window
            
//             int midBegin = mid;
//             int midEnd = mid;
            
//             // handling even length palindromes; the middlemost chars will trivially match in even length case
//             // so expand the middle window as long as possible
//             while( midEnd + 1 < s.length() && s[midEnd] == s[midEnd + 1]){ midEnd++ ; }
            
//             // for next iteration
//             mid = midEnd + 1;
            
//             // starting comparison in left and right windows
            
//             // in case of odd len palindrome; both start from mid;
//             // in case of even; midBegin and midEnd handles it all
//             int leftWindow = midBegin;
//             int rightWindow = midEnd;
            
//             // expand the windows left and right simultaneously
//             while(leftWindow - 1 >= 0 && rightWindow + 1 < s.length() && s[leftWindow - 1] == s[rightWindow + 1]){
//                     leftWindow--;
//                     rightWindow++;
//             }
            
//             // update maxLen is currLen > maxLen
//             int currLen = rightWindow - leftWindow + 1;
//             if( currLen  > maxLen ){
//                 maxLenBeginIndex = leftWindow;
//                 maxLen = currLen;
//             }
//         }
        
//         return s.substr(maxLenBeginIndex, maxLen);
        
        
        //M2 expand around corner 
//         if(s.size() == 1 ) return s ; 
//         if(s.size() == 2 ){
//             if(s[0] == s[1] ) return s ;
            
//         }
//         int start = 0 , end = 0 ; 
//         for(int i = 0 ; i < s.size() ; i++ ){
            
//             //ex - "bab"
//             int l1 = expand_around_center(s , i , i ) ; 
            
            
//             //ex- "baab"
//             int l2 = expand_around_center(s , i , i + 1 ) ; 
//             int len = max(l1 , l2 ) ; 
//             if(len > end - start ) {
//                 start = i - (len - 1 ) / 2 ; 
//                 end = i + len / 2 ; 
//             }
            
//         }
        // string ans ;
        // for(int i = start ; i < end + 1 ; i++ ){
        //     ans += s[i] ;
        // }
        // return ans ;
        // return s.substr(start , end - start + 1 ) ; 
        
        
        //M3 using DP in O(n^2) both 
//         https://leetcode.com/problems/longest-palindromic-substring/discuss/900639/Python-Solution-%3A-with-detailed-explanation-%3A-using-DP
       
        int n  = s.size() ; 
        
         // dp[i][j] will be false if substring
    // s[i..j] is not palindrome.
    // Else dp[i][j] will be true
        bool dp[n][n] ; 
        memset(dp , 0 , sizeof(dp) ) ; 
        int maxl = 1 ; //All subs of length 1 are pali
        for(int i = 0 ; i < n ; i++ )
                dp[i][i] = 1 ; 

     // check for sub-string of length 2.
        int start = 0 ; 
        for(int i = 0  ; i < n - 1 ; i ++ ) {
            if(s[i] == s[i+1] ) {
                dp[i][i+1] = 1 ;
                start = i ; 
                maxl = 2 ;
            }
        }
        
         // Check for lengths greater than 2.
    // k is length of substring
    for(int k = 3 ; k <= n ; k++ ){
        //Fix starting index ; 
        for(int i = 0 ; i < n - k + 1 ; i++ ) {
            // Get the ending index of substring from
            // starting index i and length k
            int j = i + k - 1;
            
            //check for sub from ith index to jth index iff s[i+1] to 
            // s[j-1] is a pali 
            if(dp[i+1][j-1] and s[i] == s[j] ){
                dp[i][j] = 1 ; 
                if(k > maxl ){
                    start = i ; 
                    maxl = k ;
                }
            }
        }
    }
   
    return s.substr(start , maxl ) ; 
    
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};