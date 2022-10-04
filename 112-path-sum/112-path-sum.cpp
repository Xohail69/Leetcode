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
    bool hasPathSum(TreeNode* root, int target ) {
      if(!root ) return 0 ; 
        if(!root->left and !root->right  and target == root->val )
            return 1 ; 
        return hasPathSum(root->left , target - root->val ) or hasPathSum(root->right , target - root->val ) ;
    }
};