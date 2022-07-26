/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    
    TreeNode* helper( TreeNode* root , TreeNode *p , TreeNode *q ){
        if(!root or p == root or q == root )
            return root ; 
        auto left = helper(root->left  , p , q ) ; 
        auto right = helper(root->right , p , q ) ;
        
        // if(!left ) return right  ;
        // else if(!right) return left ;
        // else return root ; 
         return left and right ? root : left ? left : right ; 
     
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return helper(root , p , q ) ; 
        
    }
};