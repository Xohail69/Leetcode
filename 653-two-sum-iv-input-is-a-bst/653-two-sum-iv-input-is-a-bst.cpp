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
    bool f = 0 ;
    unordered_map<int,int> m ; 
    void inorder(TreeNode* root , int k ){
        if(!root ) return ; 
        
        inorder(root->left , k ) ;
        if(m.count(k - root->val) ) {
            f = 1 ; 
            return ; 
        }
        m[root->val]++ ; 
        
        inorder(root->right , k ) ; 
    }
    
    bool findTarget(TreeNode* root, int k) {
        inorder(root , k ) ; 
        return f ; 
    }
};