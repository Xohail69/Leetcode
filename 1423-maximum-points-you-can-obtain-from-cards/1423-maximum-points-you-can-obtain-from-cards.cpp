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

    
    
    
    
    
    
    
    
    
    
    
    int maxScore(vector<int>& c , int k) {
        
        
//          int total_sum = accumulate(c.begin() , c.end() , 0 ) ; 
//         if(k == c.size() ) return total_sum ;
//         int n = c.size() - k ; // Remove min subarray of this size to get max score
//         int score = 0 ; 
//         int ans = INT_MAX ; 
//         vector<int>pre(c.size() , 0 ) ; 
//         partial_sum(c.begin() , c.end() , pre.begin() ) ; //It'll fill the vec with prefix sum
 
//         //Sliding window
//         for(int i = 0 ; i <= k ; i++ ){
//             int j = i + n - 1 ; //Window length
//             if(i == 0 ) score = pre[j] ; 
//             else score = pre[j] - pre[i-1] ;
//             ans = min(ans , score ) ;
//         }
        
        
        
//         return total_sum-ans ;
        
        
        
        
        //short M2
//         https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/discuss/1202397/JS-Python-Java-C%2B%2B-or-Easy-Sliding-Window-Solution-w-Explanation
//        https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/discuss/2198002/C%2B%2B-Solution-Using-Sliding-Window
        
        int total = 0 ; 
         for (int i = 0; i < k ; i++) total += c[i];
        int best = total ;
        for (int i = k - 1, j = c.size() - 1; ~i; i--, j--)
            total += c[j] - c[i] , best = max(best, total);
        return best;
        
        
        
        
        
        
    
        
        
        
        
        
        
        
    }
};