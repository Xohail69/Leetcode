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
    ListNode *detectCycle(ListNode *head) {
//         if( !head or !head->next ) return NULL ;
//         vector<ListNode*>v;
        
//         while(head){
//             auto it = find(v.begin(), v.end(), head) ;
//             if(it != v.end())
//                 return *it;
//             v.push_back(head);
//             head = head->next;
//         }
//         return NULL ;
        
        //Using floyd cycle detection 
         ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
        
    
        
        
        
        
        
        
        
        
    }
};