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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //recursive
//         if(!root){
     
//             return new TreeNode(val) ;
//         }
//         if(val < root->val ) root->left = insertIntoBST(root->left , val) ;
//         else   root->right = insertIntoBST(root->right , val) ;
//         return root ;
        
        
        //Iterative
//          if(!root) return new TreeNode(val);
        
//         auto curr = root;
        
//         while(curr){
//             if(curr->val < val){
//                 if(curr->right) curr = curr->right;
//                 else {
//                     curr->right = new TreeNode(val);
//                     break;
//                 }
//             }
//             else{
//                 if(curr->left) curr = curr->left;
//                 else{
//                     curr->left = new TreeNode(val);
//                     break;
//                 }
//             }
//         }
//         return root;
        
        
        
        
        
        
        //same iterative but more compact 
        
		TreeNode **cur = &root;
		while( *cur )
			cur = (val > (*cur)->val) ? &(*cur)->right : &(*cur)->left;
		*cur = new TreeNode(val);
		return root;
        
        
        
    }
};