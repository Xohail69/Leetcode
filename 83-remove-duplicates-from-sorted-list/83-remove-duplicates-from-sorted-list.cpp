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
    ListNode* deleteDuplicates(ListNode* head) {
//         if( !head or !head->next ) return head ; 
        //With two prs 
//         ListNode *p , *q ;
//         p = head ; 
//         q = head->next ; 
//         while(q){
//             if(p->val != q->val ){
//                 p = q ;
//                 q = q->next ; 
//             }
//             else {
//                 p->next = q->next ; 
//                 delete q ; 
//                 q = p->next ; 
//             }
//         }
//         return head ; 
        
        
        //With a single pr
         if( !head or !head->next ) return head ; 
        ListNode *cur = head ;
        while(cur->next){
            if(cur->val == cur->next->val ){
                auto x = cur->next ;
                cur->next = cur->next->next ;
                         delete x ;        
            }
            else cur = cur->next ; 
        }
        return head ; 
        
        

        
        
        
        
        
    }
};