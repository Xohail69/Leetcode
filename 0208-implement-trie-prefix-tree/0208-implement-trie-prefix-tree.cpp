class Node {
    public:
    bool isEnd = false ; 
    Node *links[26] ; 
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
    }
    
    bool search(string s ) {
        Node *node = root  ; 
        for(int i = 0 ; i < s.size() ; i++ ){
            if( !node->containsKey(s[i]) )
                return  0 ; 
            node = node->get(s[i]) ; 
        }
        return node->isEnd ; 
    }
    
    bool startsWith(string s) {
          Node *node = root  ; 
        for(int i = 0 ; i < s.size() ; i++ ){
            if( !node->containsKey(s[i]) )
                return  0 ; 
            node = node->get(s[i]) ; 
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