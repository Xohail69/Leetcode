// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        //Using 2 stacks 
        // stack<Node*>s1 , s2 ; 
        // s1.push(node) ;
        // while( !s1.empty() ) {
        //     Node *top = s1.top() ;
        //     s1.pop() ;
        //     s2.push(top) ;
        //     if(top->left) {
        //         s1.push(top->left) ;
        //     }
        //     if(top->right) {
        //         s1.push(top->right) ;
        //     }
        // }
        
        // vector<int>ans ;
        // while( !s2.empty() ) {
        //     ans.push_back(s2.top()->data) ;
        //     s2.pop() ;
        // }
        // return ans ; 
        
        //Using 1 stack but modifying the tree
        
        // vector<int> ans ; 
        // stack<Node*> s ;
        // s.push(node) ; 
        // while( !s.empty() ) {
        //     Node *top = s.top() ;
        //     if(top->left) {
        //         s.push(top->left) ;
        //         top->left = NULL ;
        //     }
        //     else if(top->right ) {
        //         s.push(top->right) ;
        //         top->right = NULL ; 
        //     }
        //     else {
        //         ans.push_back(top->data ) ;
        //         s.pop() ;
        //     }
        // }
        // return ans ; 
        
        
        //Without modifying the tree 
        Node *curr = node ;
        stack<Node*> s ;
        vector<int> ans ;
        while(curr or !s.empty() ) {
            
            if(curr) {
                s.push(curr) ;
                curr = curr->left ; //go left left left
            }
            else{ // left become null
                Node *t = s.top()->right ; 
                if(t == NULL ){
                    t = s.top() ;
                    s.pop() ;
                    ans.push_back(t->data) ;
                    while( !s.empty() and t == s.top()->right ){
                        t = s.top() ;
                        s.pop() ;
                        ans.push_back(t->data) ;
                    }
                }
                else curr = t ;
            }
        }
        
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        ans = ob.postOrder(root) ;

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;
     
    }
    return 0;
}
  // } Driver Code Ends