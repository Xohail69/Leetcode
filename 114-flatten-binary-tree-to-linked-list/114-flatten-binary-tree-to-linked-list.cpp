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
    TreeNode *head = NULL ; 
    void rev_pre(TreeNode *root){
        if(root->right ) rev_pre(root->right) ; 
        if(root->left ) rev_pre(root->left ) ; 
        root->left = NULL ;
        root->right = head ; 
        head = root ; 
    }
    void flatten(TreeNode* root) {
        //https://leetcode.com/problems/flatten-binary-tree-to-linked-list/discuss/1207642/JS-Python-Java-C%2B%2B-or-Simple-O(1)-Space-and-Recursive-Solutions-w-Explanation
        //M1  using Morris Traversal 
        //TC - O(n) & SC - O(1) 
        // auto curr = root ; 
        // while( curr ){
        //     if(curr->left){
        //     auto runner =  curr->left  ; 
        //     while(runner->right) runner = runner->right ; 
        //     runner->right = curr->right ; 
        //     curr->right = curr->left ; 
        //     curr->left = NULL ; 
        //     }
        //        curr = curr->right ; 
        // }
        
        //M2 using reverse preorder traversal 
        
        //TC - O(n) & SC - O(n) recursion stack  
       // if(root ) rev_pre(root) ; 
        
        //M3 using recursion 
//         if(root ){
            
//             /*Move the left node to the right node*/
//           auto t = root->right ;
//             root->right = root->left ; 
//             root->left = NULL ; 
            
//             auto node = root ; 
//              /*Move to the end of the prev left node which is the new right node*/
//             while(node->right ) node = node->right  ;
            
            
//               /*Append the right node to its end*/
//             node->right = t ; 
            
//             flatten(root->right) ; 
//         }
            
            
            
            //M4
            //Above recursion can be converted into iteration as 
            while(root) {
                auto t = root->right ;
            root->right = root->left ; 
            root->left = NULL ; 
            
            auto node = root ; 
             /*Move to the end of the prev left node which is the new right node*/
            while(node->right ) node = node->right  ;
            
            
              /*Append the right node to its end*/
            node->right = t ; 
                
                
                root = root->right ; 
                
            }
            
            
            
            
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};