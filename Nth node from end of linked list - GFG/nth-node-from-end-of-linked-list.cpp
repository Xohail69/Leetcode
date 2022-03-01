// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
 {  
//      Node* h = head ; 
//     int c = 0 ; 
//     while( h->next  ){
//         c++ ; 
//         h = h->next ; 
//     }
//     int x = c - n + 1 ; 
//     if( x < 0 ) return -1 ; 
//     if(x == 0 ) return head->data ;
//     h = head ; 
//     while(x--){
//         h = h->next ; 
//     }
//     return h->data ; 
    
    
    
    
    // //M2
    // Both pointers are initialized to head. Traverse n nodes from head with 
    // first pointer. Then the second pointer and the first pointer start moving
    // simultaneously. This keeps on going till the first pointer becomes null. 
    // At this point the second pointer will be at the desired node i.e. at nth node
    // from end since the first pointer had traversed n elements
    // previously and thus had difference of n nodes with second pointer.
    Node *l , *h ; 
    l = h = head ; 
   for(int i = 0 ; i < n - 1 and l ; i++ ) l = l->next ; 
      if( !l ) return -1 ; 
   while(l->next){
       h = h->next ; 
       l = l->next ; 
   }
   return h->data ;
   
    
    
    
    
    
    
    
    
    
    
    
    
    
       // Your code here
}

