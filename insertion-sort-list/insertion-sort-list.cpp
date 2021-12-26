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
#define ll      long long
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

    void fastio(){ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);}
    ListNode* insertionSortList(ListNode* head) {
        
        fastio() ;
        
        //M1 TC = O(nlogn) , SC = O(n)
        //Using a vec & sorting it 
        vector<int> v ;
        ListNode *p = head ;
        while(p ) {
            v.pb(p->val) ;
            p = p->next ;
        }
        sort(all(v)) ;
        
        p = head ;
        for(auto &x : v) {
            p->val = x ;
            p = p->next ;
        }
        return head ;
        
        //M2 
//https://leetcode.com/problems/insertion-sort-list/discuss/1629448/C%2B%2B-EASY-TO-SOLVE-oror-Detailed-Explanation-with-dry-run
        
//         ListNode *nh = NULL ; //new head 
//         while(head){
//              // Exluding node from the original linked list we will do this one at a time
//             ListNode *p = head ;
//             head = head->next ;
//             p ->next = NULL ;
//             //setting the first node of our final linked list 
//             if( !nh ) nh = p ;
            
            
            
            
//             // if the position of element is at index 0 i.e. at the start (the temp node is the smallest of all the nodes that are currently present in the sorted linked list)
//             else if(nh->val >= p->val) {
//                 p->next = nh ;
//                 nh = p ;
//             }
            
            
//                // inserting the node anywhere in the middle or in the end depending upon the value of the temp node;
//             else {
//                 ListNode *root = nh ;
//                 while(root->next ){
//                     if(root->val < p->val and p->val <= root->next->val){
//                          p->next = root->next ;
//                         root->next = p ;
//                        break ;
//                     }
//                     root = root->next;
//                 }
                
                
//                  //inserting the temp node at the end
//                 if( !root->next ) root->next = p ;
//             }
            
//         }
//         return nh ;
        
        
        
        //m3 O(n^2)
//         for(auto i = head ; i ; i = i->next ) { //we are doing insertion through i
//             for(auto j = head ; j!= i ; j = j->next ) 
//                 if(j->val > i->val )  swap( j->val , i->val ) ;
//         }
        
//         return head ;
        
        
        
        
        
        
        
        
        
        
        
    }
};