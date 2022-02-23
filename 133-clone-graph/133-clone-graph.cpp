/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* cur , unordered_map<Node* , Node* > &map){
        vector<Node*> neighbour ; 
        Node* clone = new Node(cur->val) ;
        map[cur] = clone ;
        for(auto it : cur->neighbors) {
            if(map.find(it) != map.end() ) {
                neighbour.push_back(map[it]) ;
            }
            else{
                neighbour.push_back(dfs(it , map )) ;
            }
        }
        clone->neighbors = neighbour ;
        return clone ; 
    }
    
    Node* cloneGraph(Node* node) {
        if(!node) return NULL ; 
        unordered_map<Node* , Node* > map ; 
        
        return dfs(node , map ) ; 
    }
};