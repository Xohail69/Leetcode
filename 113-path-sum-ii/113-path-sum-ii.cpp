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
 #include <tuple>
    
    
    vector<vector<int>> ans ; 
    void dfs(TreeNode *root , vector<int> &v , int target  ){
        if( !root ) return ; 
        
        
        v.push_back(root->val) ; 
        target -= root->val ; 
        
        if(!root->left and !root->right ){
            if(target == 0 )
            ans.push_back(v) ; 
        
        }
        else{       
         dfs(root->left , v , target ) ;
        dfs(root->right , v , target ) ; 
        }
         v.pop_back() ; 
        
        
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int target  ) {

        // vector<int> v ; 
        // dfs(root , v , target  ) ; 
        // return ans ; 
        
        
//         Using Bfs 
        if( !root ) return {} ;
        queue<tuple<TreeNode*,int,vector<int>>> q ;
        vector<int> v = {root->val }  ;
//       tuple = { node , current sum , current path }
        auto tup = make_tuple(root , root->val , v ) ;
       
        q.push(tup ) ;
        while(q.size() ){
            auto t = q.front() ; 
            q.pop() ;
            auto node = get<0>(t) ; 
            int currSum = get<1>(t) ; 
            auto currPath = get<2>(t) ;
            
            if(!node->left and !node->right and currSum == target ){
                ans.push_back(currPath) ; 
            }
            
            if(node->left){
//                 left path 
                vector<int> lp = currPath ; 
                int vali = node->left->val ; 
                lp.push_back(vali) ; 
                q.push(make_tuple(node->left , currSum + vali , lp )) ; 
            }
              if(node->right){
//                   right path 
                vector<int> rp = currPath ;
                   int vali = node->right->val ; 
                rp.push_back(vali) ; 
                q.push(make_tuple(node->right , currSum + vali , rp )) ; 
            }
            
            
        }
        
        
        
        return ans; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};