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
    int ans =  0 ; 
    void dfs(TreeNode *root , long long int target ) {
        if(!root ) return ; 
        if(root->val == target ) ans++ ;
        dfs(root->left , target - root->val ) ; 
        dfs(root->right , target - root->val ) ; 
    }
    int pathSum(TreeNode* root, int target) {
        if(!root ) return 0 ;
        
        dfs(root , target ) ; 
        pathSum(root->left , target ) ; 
        pathSum(root->right , target ) ; 
        
        
        return ans; 
    }
};