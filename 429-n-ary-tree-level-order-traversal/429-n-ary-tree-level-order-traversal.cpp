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
    private :  vector<vector<int>> ans ; 
public:
    void dfs(Node* root , int level ){
        if( level == ans.size() ) ans.emplace_back() ; 
        ans[level].push_back( root->val ) ; 
        for(auto &child : root->children )
            dfs(child , level + 1 ) ; 
    }
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {} ;
        
//         BFS
//         vector<vector<int>> ans ; 
//         queue<Node*> q ; 
//         q.push(root) ; 
//         while(q.size() ) {
//             int n = q.size() ; 
//             ans.emplace_back() ; 
//             // vector<int> v ; 
//             while(n--){
//                 auto t = q.front() ; 
//                 ans.back().push_back(t->val) ; 
//                 q.pop() ;
//                for(auto &child : t->children )
//                    q.push(child) ;
                
//             }
//             // ans.push_back(v) ;
//         }
//         return ans; 
        dfs(root , 0 ) ; 
        return ans; 
    }
};