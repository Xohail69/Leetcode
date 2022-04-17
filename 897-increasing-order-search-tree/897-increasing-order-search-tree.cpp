/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    #define ll                  long long
#define loop(i,s,n) for(int i=s;i<n;++i)
#define rloop(i,n,s) for(int i=n;i>=s;--i)
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define itoc(c) ((char)(((int)'0') + c))
#define max(x, y) ((x > y) ? x : y)
#define min(x, y) ((x < y) ? x : y)
#define mid(s, e) (s + (e - s) / 2)
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001;
typedef pair<int, int> pi;
template <class T> T mceil(T a, T b) {if (a % b == 0) return a / b; else return a / b + 1;}
template <class T> T mfloor(T a, T b) {if (a % b == 0) return a / b; else return a / b - 1;}
#define db1(x) 						  cout<<#x<<"= "<<x<<'\n'
#define db2(x,y) 					  cout<<#x<<"= "<<x<<", "<<#y<<"= "<<y<<'\n'
#define db3(x,y,z) 				  cout<<#x<<"= "<<x<<", "<<#y<<"= "<<y<<", "<<#z<<"= "<<z<<'\n'

#define rep(i, begin, end)  for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define p2darray(a, n, m)   rep(i, 0, n){rep(j, 0, m){cout<<a[i][j]<<" ";}cout<<endl;}
#define dv(v)        {cout<<#v<<" = [" ; for (auto x : v) cout << x << " , "; cout <<" ]"<< nl ; }
#define d2dv(v)       { cout<<#v<<":"<<nl ;  for (auto &x : v) { for (auto y : x) {	cout << y << " "; } cout << nl; }   }

    
    vector<TreeNode*> v ; 
    void inorder(TreeNode* root){
        if(!root) return ;
        inorder(root->left) ;
        v.push_back(root) ;
        inorder(root->right) ;
    }
    TreeNode *curr ; // this will be our tree till now 
    void inorder_link_change(TreeNode* root ){
        if(!root ) return ;
        inorder(root->left ) ;
        root->left = NULL ;  //cut the left node of present node(root)
        curr->right = root ;  //connect right of current node of our tree made till now  to the present node(root) ;
        curr = root ; // move current node to present node(root) ;
        inorder(root->right ) ;
    }
    TreeNode* increasingBST(TreeNode* root) {
        //M1 SC - {O(H) + O(N)}
         //    TC - O(N)
        //My way to store nodes in a vector then changing its links 
        //
//         inorder(root) ;
//          int i = 0 ;
//         for(  ; i < v.size()-1 ; i++ ){
//              v[i]->right = v[i+1] ;
//             v[i]->left = NULL ;
//         }
//         v[i]->left = NULL ;
//         return v[0] ;
    
        
        
        
        
        
        
        //M2 TC - O(N) & SC - O(H) 
        //Changing links while doing inorder 
//         TreeNode ans(-1) ;
//         curr = &ans ; 
//         inorder_link_change(root) ;
//         return ans.right ;
        
        
        
        //M3 inorder using stack 
        TreeNode ans(-1) ;
        TreeNode *pre  = &ans ; 
        
        stack<TreeNode*> s ;
        while(!s.empty() or root ){
            while(root){ //continuosly move left 
                s.push(root) ; 
                root = root->left ;
            }
            root = s.top() ;
            s.pop() ; 
            pre->right = root ;   
            pre = pre->right ;
            root->left = NULL ;
         
            
            root = root->right ;
        }
        
        
      return ans.right ; 
        
        
        
        
    }
};