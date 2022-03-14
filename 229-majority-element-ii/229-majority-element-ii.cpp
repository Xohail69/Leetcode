class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
//         unordered_map<int, int> m ;
//         for(auto x: a ) m[x]++ ;
//         int n = floor(1.0*a.size()/3) ;
//         vector<int> ans ;
//         for(auto y : m ) {
//             if(y.second > n ) ans.push_back(y.first) ;
//         }
//         return ans ; 
        
        
      //  https://leetcode.com/problems/majority-element-ii/discuss/613810/C%2B%2B-Solution-with-easy-to-understand-explaination
        
        int n = a.size() ;
        int x = -1 , y = -1 , cx = 0 , cy = 0 ; 
        for(auto a : a ){
            if(a == x ) cx++ ;
            else if( a== y ) cy++ ;
            else if(cx == 0 ){
                x = a ;
                cx = 1 ;
            }
            else if(cy == 0 ){
                y = a ;
                 cy = 1 ;
            }
            else {
                cx-- ; cy-- ;
            }
        }
         cx = 0 ;
        cy = 0 ;
        for(auto z : a ){
            if(z == x ) cx++ ;
            else if(z == y) cy++ ;
        }
         vector<int> ans ;
        if(cx > n/3 ) ans.push_back(x) ;
        if(cy > n/3 ) ans.push_back(y) ;
        
        
        
        
        return ans ; 
    }
};