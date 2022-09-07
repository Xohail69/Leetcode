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
    void helper(TreeNode *root , string &ans ) {
        if(!root) { 
            return  ;
        }
        ans +='('; 
         ans += to_string(root->val) ; 
        if(!root->left and root->right ) ans += "()" ;
        helper(root->left , ans )    ;
        helper(root->right , ans ) ; 
       
        ans +=')' ;
     
    }
    string tree2str(TreeNode* root) {
        string t ; 
        helper(root , t ) ;
        t = t.substr(1 , t.size() - 2 ) ;
        return t ; 
        
    }
};