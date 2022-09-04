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
#define dv(v)        {cout<<#v<<" = [" ;  int n = v.size() , i = 1 ;  for (auto x : v) {cout << x ; if(n != i++ ) cout<<" , "; } cout <<" ]"<< nl ; }
#define d2dv(v)       { cout<<#v<<":"<<nl ;  for (auto &x : v) { for (auto y : x) {	cout << y << " "; } cout << nl; }   }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    map<int,map<int,multiset<int>>> m ;  
    void dfs(TreeNode *root , int x , int y ){
        if(!root) return ; 
        m[y][x].insert(root->val) ; 
         dfs(root->right , x + 1, y + 1 ) ;
        dfs(root->left , x+ 1 ,  y -1 ) ; 
       
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return {} ; 
        vector<vector<int>> ans ; 
        dfs(root , 0 , 0 ) ;
        for(auto &[f , s ] : m ) {
          vector<int> col ; 
            for(auto &[f1 , s1 ] : s ){
                col.insert(col.end() , s1.begin() , s1.end() ) ; 
            }
            ans.push_back(col) ; 
            
            
            
            
        }
        return ans ; 
    }
};