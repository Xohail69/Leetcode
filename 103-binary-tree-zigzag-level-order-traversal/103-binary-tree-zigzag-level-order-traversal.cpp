/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if( !root ) return {} ; 
        queue<TreeNode*> q ; 
        vector<vector<int>> ans ; 
        q.push(root) ; 
        bool LtR = 1 ; 
        while(q.size() ) {
            int n = q.size() ; 
            vector<int> curr(n) ; 
            for(int i = 0 ; i < n ; i++ ) {
                auto t = q.front() ; 
                q.pop() ;
                int ix = LtR ? i : n - i - 1 ;
                curr[ix] = t->val ; 
                if(t->left) {
                    q.push(t->left) ; 
                }
                if(t->right) 
                    q.push(t->right) ;
            }
            LtR =  !LtR  ;
            ans.push_back(curr) ;
        }
        return ans; 
    }
};