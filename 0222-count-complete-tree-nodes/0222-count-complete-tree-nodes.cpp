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
    int countNodes(TreeNode* root) {
        
        
//         if(!root ) return 0 ; 
//         int l = countNodes(root->left) ; 
//         int r = countNodes(root->right) ;
//         return l + r + 1 ; 
        
        
        if(!root ) return 0; 
        TreeNode *l=root , *r = root  ; 
        int left_l = 0 , right_l = 0 ; 
        while(l){
            left_l++ ; l = l->left ; 
        }
        while(r){
            right_l++ ; r = r->right ; 
            
        }
        if(left_l == right_l ) return pow(2,left_l) - 1  ; 
        return 1 + countNodes(root->left) + countNodes(root->right) ; 
        
    }
};