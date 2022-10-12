class Node {
    public:
    bool isEnd = false ; 
    Node *links[26] ; 
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
            if( !node->links[s[i] - 'a']  ){
                node->links[s[i] - 'a' ] = new Node() ; 
            }
            node = node->links[s[i] - 'a'] ; 
        }
        node->isEnd = 1 ;
    }
    
    bool search(string s ) {
        Node *node = root  ; 
        for(int i = 0 ; i < s.size() ; i++ ){
            if( !node->links[s[i] - 'a' ])
                return  0 ; 
            node = node->links[s[i] - 'a'] ; 
        }
        return node->isEnd ; 
    }
    
    bool startsWith(string s) {
          Node *node = root  ; 
        for(int i = 0 ; i < s.size() ; i++ ){
            if( !node->links[s[i] - 'a' ])
                return  0 ; 
            node = node->links[s[i] - 'a'] ; 
        }
        return 1 ; 
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */