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
    int depth(TreeNode *root){
        if( !root) return 0 ;
        return max(depth(root->left) , depth(root->right)) + 1 ;
    }
    void LevelOrder(vector<vector<int>> &ans , TreeNode *t , int level ) {
        if( !t ) return ;
        ans[level].push_back(t->val) ;
        LevelOrder(ans , t->left , level - 1) ;
        LevelOrder(ans , t->right , level - 1) ;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        //M1 same as level order but just reversing in the end 
//         if( !root ) return {} ;
//         vector<vector<int>> ans ; 
//         queue<TreeNode*> q ;
//         q.push(root) ;
//         while( !q.empty() ) {
//             int n = q.size() ;
//             vector<int> curr ;
//             while(n--) {
//                 TreeNode *t = q.front() ;
//                 q.pop() ;
//                 curr.push_back(t->val) ;
//                 if(t->left) q.push(t->left) ;
//                 if(t->right) q.push(t->right) ;
                
//             }
//             ans.push_back(curr) ;
             
//         }
//         reverse(ans.begin() , ans.end()) ;
//         return ans ; 
        
        
        
        
        
        
        //M2 same as above but
        // Instead of reversing the whole ans vec in the end , we can also insert each level to the beginning of the ans vec
//          if( !root ) return {} ;
//         vector<vector<int>> ans ; 
//         queue<TreeNode*> q ;
//         q.push(root) ;
//         while( !q.empty() ) {
//             int n = q.size() ;
//             vector<int> curr ;
//             while(n--) {
//                 TreeNode *t = q.front() ;
//                 q.pop() ;
//                 curr.push_back(t->val) ;
//                 if(t->left) q.push(t->left) ;
//                 if(t->right) q.push(t->right) ;
                
//             }
//            //this line adds new level to the beginning
//              ans.insert(ans.begin(), curr);
//         }
     
//         return ans ; 
        
        
        
        //M3 dfs kinda approach(preorder type shitt )
         if( !root ) return {} ;
        int d = depth(root) ;
        vector<vector<int>> ans(d ) ; 
        LevelOrder(ans , root , d - 1) ;
        return ans ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};