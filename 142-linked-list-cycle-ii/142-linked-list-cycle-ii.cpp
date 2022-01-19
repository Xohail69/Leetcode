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
        if( !head or !head->next ) return NULL ;
        vector<ListNode*>v;
        
        while(head){
            auto it = find(v.begin(), v.end(), head) ;
            if(it != v.end())
                return *it;
            v.push_back(head);
            head = head->next;
        }
        return NULL ;
        
        
        
    
        
        
        
        
        
        
        
        
    }
};