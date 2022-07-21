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
    ListNode* ghead = NULL ; 
    void rev(ListNode* q , ListNode *p  ){
        if( p  ) {
            rev( p , p->next  ) ;
            p->next  = q ; 
          
        }
        else ghead = q ; 
    }
    ListNode* reverseList(ListNode* head) {
//         if(!head ) return head ; 
//         ListNode* p , *q , *r ; 
//         p = head ; q = NULL ; r = NULL ; 
//         while(p){
//             r = q ; 
//             q = p ; 
//             p = p->next ; 
//             q->next = r ; 
            
//         }
//         return q ; 
        
        
        //Using recursion 
        rev(NULL , head ) ; 
        return ghead ; 
   
        
    }
};