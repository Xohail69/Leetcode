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
        if(s.size() == 1 ) return s ; 
        if(s.size() == 2 ){
            if(s[0] == s[1] ) return s ;
            
        }
        int start = 0 , end = 0 ; 
        for(int i = 0 ; i < s.size() ; i++ ){
            int l1 = expand_around_center(s , i , i ) ; 
            int l2 = expand_around_center(s , i , i + 1 ) ; 
            int len = max(l1 , l2 ) ; 
            if(len > end - start ) {
                start = i - (len - 1 ) / 2 ; 
                end = i + len / 2 ; 
            }
            
        }
        // string ans ;
        // for(int i = start ; i < end + 1 ; i++ ){
        //     ans += s[i] ;
        // }
        // return ans ;
        return s.substr(start , end - start + 1 ) ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};