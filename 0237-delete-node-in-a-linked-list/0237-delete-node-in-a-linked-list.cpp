/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // ListNode *p  , *q ; 
        // p = node  ; 
        // q = node->next ; 
//         Swapping till the end O(n)
        // while( q ){
        //     swap(p->val , q->val ) ; 
        //     if(!q->next ) p->next = NULL ;
        //     p = p->next ; 
        //     q = q->next ; 
        // // }
        
//         O(1) 
       // swap(p->val , q->val ) ; 
        // p->next  = q->next ; 
        // delete q ;
        
        // swap(*p , *q ) ; //Swapping the objects 
        // delete q ; 
        
        
        
//         Best 
        auto next = node->next ; 
        *node = *next ; // copying the next object to the node object 
        delete next ; 
        
        
    }
};