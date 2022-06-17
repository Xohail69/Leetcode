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
    int cam ;
    unordered_set<TreeNode*> covered ;
    
    int minCameraCover(TreeNode* root) {
        if(!root) return 0 ; 
        cam = 0 ; 
        covered.insert(NULL) ; 
        dfs(root , NULL) ;
        return cam ; 
    }
    void dfs(TreeNode* root , TreeNode* parent ){
        if(!root ) return ;
        dfs(root->left , root ) ; 
        dfs(root->right , root ) ;
        if( (!parent and !covered.count(root) ) or !covered.count(root->left)
         or  !covered.count(root->right )){
            cam++ ; 
            covered.insert(root);
            covered.insert(parent) ; 
            covered.insert(root->left) ;
            covered.insert(root->right) ;
        } 
    }
};