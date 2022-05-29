class Solution {
public:
    bool checkCommon(bitset<26> &a , bitset<26> &b ){
        for(int i = 0 ; i < 26 ; i ++ ){
            if(a[i] & b[i] ) return 1 ;
        }
        return 0 ; 
    }
    int maxProduct(vector<string>& words) {
        
        //M1 if two words have a letter in common is to just create an hashmap of size 26 and map each 26 letter of both the words as true/false depending upon whether it occurs in the word or not. Finally, we can iterate over this map and check if there's any letter that occurs in both the words and if it does, we know that the word have atleast 1 letter in common.
        int n = words.size()  ;
         int ans = 0 ; 
        
        
//         vector<bitset<26>> chars(n ) ;
//         for(int i = 0 ; i < n ; i ++ ){
//             for(auto x : words[i] )
//                 chars[i][x-'a'] = 1 ;
//             for(int j = 0 ; j < i ; j++ ){
//                 if(!checkCommon(chars[i] , chars[j] ) )
//                     ans = max(ans , (int)(words[i].size() * words[j].size()) ) ;
//             }
//         }
//         return ans ; 
        
        
        
        //M2 using bit mani instead of bitset 
        vector<int> mask(n) ;
        for(int i = 0 ; i < n ; i++ ){
            for(auto x : words[i]) 
                mask[i] |= 1 << ( x - 'a') ;
            for(int j = 0 ; j < i ; j++ ){
                if( (mask[i] & mask[j]) == 0 )
                   ans = max(ans , (int)(words[i].size() * words[j].size()) ) ;
            }
        }
        
        return ans ; 
        
        
        
        
        
     
        
        
        
        
        
        
        
    }
};