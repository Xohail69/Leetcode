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
    TreeNode* helper(TreeNode *root , int min , int max ){
        
        
        //M1 Using LCA of a binary tree 
//         if(!root ) return NULL ; 
//         if(root == p or root == q ) return root ; 
//         auto left = helper(root->left , p , q )  ;
//         auto right = helper(root->right , p , q ) ;
   
//          return left and right ? root : left ? left : right ; 
        
        
        
        // M2 Using the prop of a BST 
        if(!root ) return root ; 
        int node = root->val  ; 
        if( min <= node and node <= max   ) return root ; 
        if( node < min  ) return helper(root->right , min , max ) ; 
        if(node > max ) return helper(root->left , min , max ) ; 
        return NULL ;
         
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int maxi = max(p->val , q->val ) ; 
        int mini = min(p->val , q->val ) ; 
        //M2 using recn & prop of a BST 
        // return helper(root , mini , maxi  ) ; 
        
        //M2 iterative version 
        //Time: O(H), where H is the heigh of Binary Tree.
        //Space: O(1)
         while (root ) {
            if (root->val > maxi ) // p, q belong to the left subtree
                root = root->left;
            else if (root->val < mini ) // p, q belong to the right subtree
                root = root->right;
            else // Now, mini <= root->val <= maxi -> This root is the LCA between p and q
                return root;
        }
        return nullptr;
        
        
        
        
    }
};