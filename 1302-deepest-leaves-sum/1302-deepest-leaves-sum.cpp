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
   int deepest = 0 , sum = 0 ;
    int Deep_Baby(TreeNode* root , int depth = 0 ){
      
        
        if(!root ) return 0 ;
        if(!root->left and !root->right ) 
           { if(depth == deepest ) sum += root->val ;
            else if(depth > deepest ){ sum = root->val ; deepest = depth ;}
        }
        Deep_Baby(root->left , depth+1) ;
        Deep_Baby(root->right , depth+1 ) ;
        return sum ; 
        
    }
    
    
    int deepestLeavesSum(TreeNode* root) {
        
//           if( !root ) return 0 ;
//         queue<TreeNode*> q ;
//         int ans = 0 , d = 0 ;
//          q.push(root) ;
//         while( !q.empty() ){
//             int n = q.size() ;
//             ans = 0 ;
//             while(n--){
//                 TreeNode *t = q.front() ;
//                  ans += t->val ;
//                 q.pop() ;
//                 if(t->left) q.push(t->left) ;
//                 if(t->right) q.push(t->right) ;
//             }
//         }
//         return ans ;
        
        return Deep_Baby(root ) ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};