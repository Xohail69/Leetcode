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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cunt = a ; 
            
        
        ListNode* p = list1 ; 
        
        if( a != b ){
            while(cunt != 1  ){
                cunt-- ;
                p = p->next ; 
             }
        
        }
        else{
             
            for(int i = 0 ; i < a-1 ; i++ ){
                p = p->next ; 
            }
            ListNode* last = list2 ; 
             while( last->next ){
                last = last->next ; 
                }
            last->next = p->next->next ; 
            p->next = list2 ; 
            return list1 ; 
             
        }
        
        
        cunt = b - a ; 
        ListNode* q = p  ; 
        while(cunt){
            cunt-- ;
            q = q->next ; 
        }
        ListNode* last = list2 ; 
        while( last->next ){
        last = last->next ; 
        }
        p->next = list2 ; 
        last->next = q->next->next ; 
        return list1 ; 
        
        
    }
};