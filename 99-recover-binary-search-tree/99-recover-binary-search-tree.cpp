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
    vector<TreeNode*> v ; 
    void inorder(TreeNode* root){
        if(!root) return ;
        inorder(root->left) ; 
        v.push_back(root);
        inorder(root->right) ;
    }
    
    void recoverTree(TreeNode* root) {
        inorder(root) ;
        auto x = root , y = root ;
        bool xf , yf ;
        xf = true ;  yf = true ;
        for(int i = 0 ; i < v.size()-1 ; i++ ){
            if( v[i]->val > v[i+1]->val and xf) {x = v[i] ; xf = 0 ;}
             if( v[i]->val > v[i+1]->val and yf) {y = v[i+1] ;}
            
        }
       swap(x->val , y->val) ;
        return ;
    }
};