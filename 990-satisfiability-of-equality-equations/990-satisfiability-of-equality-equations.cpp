class Solution {
public:
    int uf[26] ; 
    int find(int x ){
        return uf[x] == x ? x : (uf[x] = find(uf[x]) ) ;
    }
    bool equationsPossible(vector<string>& equations) {
        // https://leetcode.com/problems/satisfiability-of-equality-equations/discuss/2624959/C%2B%2B-or-Union-Find-or-Related-Problems
                for(int i = 0 ; i < 26 ; i++ ){
                    uf[i] = i ; 
                }
        for(auto str : equations ){
            if( str[1]  == '=' ) {
                uf[ find(str[0] - 'a' ) ] = find(str[3] - 'a' ) ; 
            }
        }
        for(auto str: equations ){
            if(str[1] == '!' and find(str[0]-'a') == find(str[3] - 'a' ) )
                return 0 ; 
        }
        return 1 ; 
        
        
        
    }
};