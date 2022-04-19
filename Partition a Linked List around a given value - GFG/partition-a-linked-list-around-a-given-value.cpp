// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code here
    Node* hs , *he , *hl  , *ts , *te , *tl ;
    hs = he = hl = NULL ;
    ts = te = tl = NULL ; 
 
    while(head){
        if(head->data < x ){
            if(hs){
                Node *t = new Node(head->data) ;
                ts->next = t ;
                ts = t ; 
            }
            else {
                hs = new Node(head->data) ;
                ts = hs ;
            }
        }
        else if(head->data == x ){
            if(he){
                Node *t = new Node(head->data) ;
                te->next = t ;
                te = t ; 
            }
            else {
                he = new Node(head->data) ;
                te = he ;
            }
        }
        else{
            if(hl){
                Node *t = new Node(head->data) ;
                tl->next = t ;
                tl = t ; 
            }
            else {
                hl = new Node(head->data) ;
                tl = hl ;
            }
        }
        head = head->next ; 
    }
    if(!hs and !he and hl ) return hl ;
    if(hs and !he and !hl ) return hs ;
    if(!hs and he and !hl ) return he ;

    if(!hs  ){
        te->next = hl ;
        return he ;
    }
    if(!he){
        ts->next = hl ;
        return hs ;
    }
    if(!hl){
        ts->next = he ;
        return hs ; 
    }
    ts->next = he ;
    te->next = hl ;
    return hs ; 
    
    
}