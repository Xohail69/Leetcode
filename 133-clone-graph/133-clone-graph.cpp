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
//         if(!node) return NULL ; 
//         unordered_map<Node* , Node* > map ; 
        
//         return dfs(node , map ) ; 
        
        
        
        
        //M2 BFS
        //https://leetcode.com/problems/clone-graph/discuss/1792834/C%2B%2B-oror-EASY-EXPLANATION-oror-DFS-oror
        
    unordered_map<Node*, Node*> copies;
        
          if (!node) {
            return NULL;
        }
        Node* copy = new Node(node -> val, {});
        copies[node] = copy;
        queue<Node*> todo;
        todo.push(node);
        while (!todo.empty()) {
            Node* cur = todo.front();
            todo.pop();
            for (Node* neighbor : cur -> neighbors) {
                if (copies.find(neighbor) == copies.end()) {
                    copies[neighbor] = new Node(neighbor -> val, {});
                    todo.push(neighbor);
                }
                copies[cur] -> neighbors.push_back(copies[neighbor]);
            }
        }
        return copy;
    

        
        
        
        
        
    }
};