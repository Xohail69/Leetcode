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
    ListNode* l3 = NULL ;
    ListNode *last ;
    void InsertLast(int x) {
       
        ListNode *t = new ListNode(x) ;
        if(l3 == NULL ) l3 = last = t ;
        else {
          if(last != NULL){  last->next = t ;
            last = t ;}
        }
    }   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0 ;
        while(l1 || l2) {
             int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
            
            int sum = x + y + carry ;
            carry = sum/10 ;
            InsertLast(sum%10) ;
            if(l1) l1 = l1->next ; 
            if(l2) l2 = l2->next ;
        }
        if(carry) InsertLast(carry) ;
        
        
        return l3 ;
        
        
        
        
        
    }
};