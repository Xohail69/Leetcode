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


       vector<int>v ;
    map<int, int> m ;
  
    void inorder(TreeNode* root ){
        if(!root) return ;
        inorder(root->left) ;
        // v.push_back(root->val) ;
        m[root->val] = 1 ;
        
        
        inorder(root->right) ;
    }
    void in(TreeNode* root ){
        if(!root) return ;
        in(root->left) ;
        root->val = m[root->val] ;
        in(root->right) ;
        
    }
    void map_filler(){
        // auto x = m.end() ;
        // --x ;
        
        
       auto x = m.rbegin() ;
         int simmi = x->f ; 
        x->s = x->f ; 
        --x ;
        for(  ; x != m.rend() ; ++x ){
            simmi += x->first ;
            x->s = simmi ;
        }
   }
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL ; 
        inorder(root) ;
        // dv(v) ;
        // int n = v.size()-1 ;
        // int s(0) ;
        // s += v[n] ;
        // m[v[n]] = v[n] ;
        // for(int i = n-1 ; i >= 0 ; i-- ){
        //     s += v[i] ;
        //     m[v[i]] = s; 
        // }
        map_filler() ;
        // for(auto x : m ){
        //     db2(x.first ,x.second) ;
        // }
       in(root) ;
        return root ;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};