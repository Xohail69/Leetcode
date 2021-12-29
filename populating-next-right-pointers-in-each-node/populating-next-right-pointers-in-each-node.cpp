/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        //Using BFS (level order ) Very intuitive & TC O(n)
//         if( !root or !root->left ) return NULL ;
//         root->left->next = root->right  ;
//         if(root->next ) root->right->next = root->next->left ;
//         connect(root->left) ;
//         connect(root->right ) ;
//         return root ;
        
        
        //Iterative approach BFS using Queue 
        //TC - O(n) & SC - O(n)
//         if( !root ) return NULL ;
//         queue<Node*> q ;
//         q.push(root) ;
//         Node *curr ;
//         while( !q.empty() ) {
//             curr = q.front() ;
//             q.pop() ;
//             if(!curr) continue ;
//             if( curr->left) {
//                 curr->left->next = curr->right ;
//                 if(curr->next) 
//                     curr->right->next = curr->next->left ; 
//             }
//             q.push(curr->left) ;
//             q.push(curr->right) ;
//         }
//         return root ;
        
        
        
        
        //BEST TC - O(n) & SC - O(1)
        //Using two pointers & iterative
        Node *prev = root ;
        if( !prev ) return NULL ;
        while(prev->left ) {
            Node *curr = prev ;
            while(curr) {
                  curr->left->next = curr->right ;
                if(curr->next) 
                   curr->right->next = curr->next->left ; 
                curr = curr->next ;
            }
            prev = prev->left ;
        }
        return root ;
        
        

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};