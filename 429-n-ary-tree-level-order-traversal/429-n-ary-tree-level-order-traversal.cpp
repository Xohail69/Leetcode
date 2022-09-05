/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {} ;
        vector<vector<int>> ans ; 
        queue<Node*> q ; 
        q.push(root) ; 
        while(q.size() ) {
            int n = q.size() ; 
            ans.emplace_back() ; 
            // vector<int> v ; 
            while(n--){
                auto t = q.front() ; 
                ans.back().push_back(t->val) ; 
                q.pop() ;
               for(auto &child : t->children )
                   q.push(child) ;
                
            }
            // ans.push_back(v) ;
        }
        return ans; 
    }
};