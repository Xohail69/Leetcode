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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if( !root ) return {} ;
        vector<vector<int>> ans ; 
        queue<TreeNode*> q ;
        q.push(root) ;
        while( !q.empty() ) {
            int n = q.size() ;
            vector<int> curr ;
            while(n--) {
                TreeNode *t = q.front() ;
                q.pop() ;
                curr.push_back(t->val) ;
                if(t->left) q.push(t->left) ;
                if(t->right) q.push(t->right) ;
                
            }
            ans.push_back(curr) ;
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ; 
    }
};