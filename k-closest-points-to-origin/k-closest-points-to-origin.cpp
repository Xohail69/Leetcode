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
    
    
    int distance(vector<int> &a){
        return a[0]*a[0] + a[1]*a[1] ;
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& p , int k) {
        
        fastio() ;
        //M1
        //TC - O(nlogn) SC- O(logn)
        sort(all(p) , [&](vector<int> &a , vector<int> &b){
            return distance(a) < distance(b) ;
        }) ;
        return vector<vector<int>> (begin(p) , begin(p) + k ) ;
        
        
        //M2
        //Using maxheap
        //TC - O(N⋅logk) 
        //SC - O(k) 
//         priority_queue<pi> pq ;
//         int n = sz(p) ;
//         rep( i , 0 , n ){
//             pi entry = {distance(p[i]) , i } ;
//             if(pq.size() < k ) { 
//                 // Fill the  pq up to k points
//                 pq.push(entry) ;
//             }
//             else if(entry.f < pq.top().f ) {
//                 // If the max PQ is full and a closer point is found,
//                 // discard the farthest point and add this one
//                 pq.pop() ; pq.push(entry) ;
//             }
//         }
        
        
//         vector<vector<int>> ans ;
//         while( !pq.empty() ){
//             int entryIndex = pq.top().s ;
//             pq.pop() ;
//             ans.pb(p[entryIndex]) ;
//         }
//         return ans ;
        
        
        
        //M3 O(nlogK)
//         partial_sort(begin(p) , begin(p) + k , end(p) , [](vector<int> &a , vector<int> & b ) {
//             return distance(a) < distance(b) ;
//         }) ;
//         return vetor<vector<int>> (p.begin() , p.begin() + k ) ;
        
       
        
        //M4
//     nth_element(begin(p) , begin(p) + k -1  , end(p) , [&](vector<int> &a , vector<int> & b ) {
//             return distance(a) < distance(b) ;
//         }) ;
//         return vector<vector<int>> (p.begin() , p.begin() + k ) ;
        
        
        
        
        
        
        
        
        
        
    }
};