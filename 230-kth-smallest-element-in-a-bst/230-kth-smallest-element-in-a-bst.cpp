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
    int ans = 0 ; 
    void inorder(TreeNode* root , int &k ){
        if(!root) return ;
        inorder(root->left  , k ) ;
        if(--k == 0 ) {ans = root->val ; return ;}
        inorder(root->right ,  k) ;
            
    }
    
    int kthSmallest(TreeNode* root, int k) {
        ans = 0 ; 
        inorder(root , k ) ;
        return ans;
        
//         //Using Iterative inorder
//         stack<TreeNode *> stk;
//         while(1)
//         {
//             while(root!=NULL)
//             {
//                 stk.push(root);
//                 root=root->left;
//             }
//             root=stk.top();
//             stk.pop();
//             k--;
//             if(k==0) return root->val;
//             root=root->right;
//         }
        
        
    }
};