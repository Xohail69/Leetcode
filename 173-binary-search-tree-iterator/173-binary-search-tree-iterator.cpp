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
class BSTIterator {
public:
    stack<TreeNode*> s ;
    //Mine rinorder 
    void rinorder(TreeNode* root){
        if(!root ) return ; 
        rinorder(root->right) ;
        s.push(root) ;
        rinorder(root->left)  ;
    }
    BSTIterator(TreeNode* root) {
        //rinorder(root) ; Mine
        
        partialInorder(root) ;
    }
    void partialInorder(TreeNode* root ){
          while(root != NULL){
            s.push(root);
            root = root->left;
        }
    }
    int next() {
        
        //Mine
//         auto x = s.top()->val ; 
//         s.pop() ; 
//         return x ; 
        
        
        
        
        
         TreeNode* top = s.top();
        s.pop();
        partialInorder(top->right);
        return top->val;
        
    }
    
    bool hasNext() {
        return !s.empty() ;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */