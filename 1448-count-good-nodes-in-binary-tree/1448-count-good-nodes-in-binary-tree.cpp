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
    void helper(TreeNode *root , int maxi  , int &cunt ){
        if(!root ) return ; 
        if(root->val >= maxi ){
            cunt++ ; 
            maxi = root->val ;
        }
        helper(root->left , maxi , cunt ) ; 
        helper(root->right , maxi , cunt ) ;
    }
    
    
    int goodNodes(TreeNode* root) {
        int maxi = root->val ; 
        int cunt = 0 ; 
         helper(root , maxi  , cunt ) ;
        return cunt  ; 
    }
};