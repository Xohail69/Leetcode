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
    ListNode* mergeTwo(ListNode* l1 , ListNode* l2){
        ListNode dummy(0) , *tail = &dummy ; 
        while(l1 and l2 ) {
            if(l1->val < l2->val ) {
                tail->next = l1 ;
                l1 = l1->next ;
            }
            else {
                tail->next = l2 ;
                l2 = l2->next ; 
            }
            tail = tail->next ; 
        }
        tail->next = l1 ? l1 : l2 ;
        return dummy.next ;
        
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //The basic idea is really simple. We can merge first two lists and then push it back. Keep doing this until there is only one list left in vector. Actually, we can regard this as an iterative divide-and-conquer solution.
//         if(lists.empty()) return NULL ; 
        
//         while(lists.size() > 1 ) {
//             lists.push_back(mergeTwo(lists[0] , lists[1])) ;
//             lists.erase(lists.begin()) ;
//             lists.erase(lists.begin()) ;
//         }
//         return lists[0] ;
        
        
        
        
        
//         //M2 using PQ 
//         if(lists.empty()) return NULL ; 
//         auto comp = [&](ListNode *a , ListNode *b) {
//             return a->val > b->val ;
//         };
//         // This priority queue is our MIN HEAP
//         priority_queue<ListNode* , vector<ListNode*> , decltype(comp)> pq(comp) ;
        
//         /* We iterate the list of LinkedLists and add the head
//         * of every list to the heap (the heap becomes of size k)
//         */
//         for(auto &l : lists)
//         {
//             if(l) pq.push(l) ;
//         }
        
//         ListNode dummy(-1) , *tail = &dummy ;
//          // Simply start popping the nodes from the heap and keep adding them to the list;
//         while( !pq.empty() ) {
//              // Pop the top element and store it in t
//             auto t = pq.top() ; 
//             pq.pop() ;
            
//              // Add it to the list
//             tail->next = t ; 
            
//              // Move the tail to the newly added element
//             tail = tail->next ; 
            
            
//             // if there are more nodes attached to this node in the list
//             // Push the next node of the list into the heap
//             if(tail->next) pq.push(tail->next) ;
//         }
//         tail->next = NULL;
        
        
//         // We used the dummy to keep track of the start of the list.
//         return dummy.next ;
        
        
        
        
        
        //M3 using map
             map<int, int> nodes;
        
        // Add all nodes of all the LinkedLists to the map with
        // with the ListNode->val as the key & that value's frequency as the mapped value
        for(int i = 0; i < lists.size(); ++i){
            auto node = lists[i];
            while(node){
                int temp = node->val;
                nodes[temp]++;
                node = node->next;
            }
        }
        
        ListNode dummyHead(0);
        ListNode* tail = &dummyHead;
        
        for(auto it: nodes){
            while(it.second != 0){
                ListNode* newNode= new ListNode(it.first);
                tail->next = newNode;
                tail = tail->next;
                it.second--;
            }
        }
        return dummyHead.next;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};