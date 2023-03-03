class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size() ; 
        int m = needle.size() ; 
        for(int ws = 0 ; ws <= n-m ; ws++ ){
            for(int i = 0 ; i < m ; i++ ){
                if(needle[i] != haystack[ ws + i ] ) 
                    break ; 
                if(i == m - 1 )
                    return ws ; 
            }
        }
        return -1 ; 
    }
};