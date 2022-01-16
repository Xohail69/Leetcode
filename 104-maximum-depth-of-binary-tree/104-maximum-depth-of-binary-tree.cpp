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
    
    int maxDepth(TreeNode* root) {
        //Using Recursion
      // if ( !root ) return 0 ;
      //   int left_depth = maxDepth(root->left) ;
      //   int right_depth = maxDepth(root->right) ;
      //    return (left_depth > right_depth) ? left_depth +1 :  right_depth +1;
        
    //above code can also be written in one line as 
 //return !root ? 0 : max(maxDepth(root->left) , maxDepth(root->right) ) + 1 ;
        
        
        
        
        
        //Using Level order traversal 
        if(!root) return 0 ;
        int ans = 0 ; 
        queue<TreeNode*> q ;
        q.push(root) ;
        while( !q.empty() ){
            ans++ ;
            for(int i =0 , n = q.size() ; i <  n  ; i++ )  {
                TreeNode *p = q.front() ;
                q.pop() ;
                if(p->left) q.push(p->left) ;
                if(p->right) q.push(p->right) ;
            }
        }
        return ans ;
        
   
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};