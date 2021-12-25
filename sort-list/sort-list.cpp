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

    void fastio(){
        	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    }
    
     ListNode* middleNode(ListNode* head) {
        ListNode *p , *q ;
        q =  head , p = head->next ;
        while(p and p->next){
            q = q->next ;
            p = p->next->next ;
        }
         ListNode *mid = q->next ;
         q->next = NULL ;
        return mid ;
    }
      ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  ListNode dummy(0)  , *tail = &dummy ; 
        while(l1 and l2 ) {
            if(l1->val < l2->val ) {
                tail->next = l1 ;
                l1 = l1->next ;
            }
            else {
                tail->next = l2 ;
                l2 = l2 ->next ;
            }
            tail = tail->next ;
        }
        tail->next = l1 ? l1 : l2 ;
        return dummy.next ;
    
      }
    
    ListNode* sortList(ListNode* head) {
        fastio() ;
        
        if( !head or !head->next ) return head ;
        ListNode * mid = middleNode(head ) ;
        ListNode *left , *right ;
        left = sortList(head) ;
        right = sortList(mid) ;
        return mergeTwoLists(left , right ) ;
         
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};