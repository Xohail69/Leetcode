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
        ListNode *p  , *q ; 
        p = node  ; 
        q = node->next ; 
        while( q ){
            swap(p->val , q->val ) ; 
            if(!q->next ) p->next = NULL ;
            p = p->next ; 
            q = q->next ; 
        }
        // p->next = NULL ; 
        // delete q ; 
    }
};