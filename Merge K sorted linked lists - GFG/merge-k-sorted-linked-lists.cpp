// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

 // } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *a[], int K)
    {
           // Your code here
            // if(lists.empty()) return NULL ; 
        auto comp = [&](Node *a , Node *b) {
            return a->data > b->data ;
        };
        // This priority queue is our MIN HEAP
        priority_queue<Node* , vector<Node*> , decltype(comp)> pq(comp) ;
        
        /* We iterate the list of LinkedLists and add the head
        * of every list to the heap (the heap becomes of size k)
        */
        for(int i = 0 ; i < K ; i++ )
        {
            if(a[i]) pq.push(a[i]) ;
        }
        
        Node dummy(-1) , *tail = &dummy ;
         // Simply start popping the nodes from the heap and keep adding them to the list;
        while( !pq.empty() ) {
             // Pop the top element and store it in t
            auto t = pq.top() ; 
            pq.pop() ;
            
             // Add it to the list
            tail->next = t ; 
            
             // Move the tail to the newly added element
            tail = tail->next ; 
            
            
            // if there are more nodes attached to this node in the list
            // Push the next node of the list into the heap
            if(tail->next) pq.push(tail->next) ;
        }
        tail->next = NULL;
        
        
        // We used the dummy to keep track of the start of the list.
        return dummy.next ;
        
        
           
           
    }
};



// { Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends