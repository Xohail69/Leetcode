class Solution {
public:
    class Node {
    public:
    bool isEnd = false ; 
    Node *links[26] ; 
    string word  ;
    bool containsKey(char c ){
        return links[c- 'a'] != NULL  ; 
    }
    void put(char c , Node* node ){
        links[c - 'a' ] = node ; 
    }
    Node* get(char c ){
        return links[c - 'a'] ; 
    }
    
};
class Trie {
public:
    Node *root ; 
    Trie() {
        root = new Node() ; 
    }
    
    void insert(string s) {
        Node *node  = root ; 
        for(int i = 0 ; i < s.size() ; i++  ){
            if( !node->containsKey(s[i]) ){
                 node->put(s[i] , new Node() ) ; 
            }
            node = node->get(s[i]); 
        }
        node->isEnd = 1 ;
        node->word = s ; 
    }
    
};
    
    void solve(vector<vector<char>> &grid , int i , int j , vector<string> &ans , Node *node ){
        int ix = grid[i][j] - 'a' ; 
        if( grid[i][j] == '$' or !node->links[ix] )
            return ; 
        node = node->links[ix] ; 
        if( node->isEnd ){
            ans.push_back(node->word) ; 
            node->isEnd = 0 ; 
        }
        int n = grid.size() , m = grid[0].size() ; 
        auto c = grid[i][j] ; 
        grid[i][j] = '$' ; 
        
        if(i > 0 )
            solve(grid , i - 1 , j , ans , node ) ;
        if(i < n - 1 ) 
            solve(grid , i + 1 , j , ans , node ) ; 
        if(j > 0 )
            solve(grid , i , j - 1 , ans , node ) ; 
        if(j < m - 1 )
            solve(grid , i , j + 1 , ans , node ) ; 
        
        
        grid[i][j] = c ; 
        
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
        
        Trie t ; 
        for(auto &x : words  ){
           
                t.insert(x) ; 

        }
        vector<string> ans ; 
        for(int i = 0 ; i < board.size() ; i++ ){
            for(int j = 0 ; j < board[0].size() ; j++ ){
                solve(board , i , j , ans , t.root ) ; 
            }
        }
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};