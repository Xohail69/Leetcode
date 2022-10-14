/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middle(ListNode *head ){
        ListNode *p , *q ; 
        p = q = head ; 
        while(p and p->next ){
            q =  q->next ; 
            p = p->next->next ; 
        }
        return q ; 
    }
    ListNode* deleteMiddle(ListNode* head) {
        if( !head->next ){
            return NULL ;
        }
        ListNode* mid = middle(head ) ; 
        if( !mid->next ){
            delete mid ; 
            head->next = NULL ; 
            return head ; 
        }
        ListNode* next = mid->next ; 
        *mid = *next ; 
        delete next ; 
        return head ; 
    }
};