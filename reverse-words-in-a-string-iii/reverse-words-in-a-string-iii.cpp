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


    
    
    
    string reverseWords(string s) {
      int n = s.size() ;
//         vector<string> v ;
//        
//         string t ;
//         for(int i = n-1 ; i>= 0 ; i-- ) {
//             if(s[i] != ' ') t += s[i] ;
//             else {
//                 v.push_back(t) ;
//                 t = "" ;
//             }
//         }
//         v.pb(t) ;
        
        
//         string m ;
//         for(int i = sz(v)-1 ; i>= 0 ; i-- ) {
//             m += v[i] + " " ;
//         }
//         m.pop_back() ;
//         return m ;
        
        
        
        
        
        
        int temp = 0 ;
        rep(i , 0 , n ){
            if(s[i] == ' '){
                reverse(s.begin()+temp , s.begin() + i ) ;
                temp = i + 1 ;
            }
        }
        reverse(s.begin() + temp , s.end() ) ; // For last remaining word
        
        return s ;
        
        
        
        
        
//             int front = 0;
//         for(int i=0; i<=s.size(); i++)
//         {
//             if(i == s.size() || s[i] == ' ')
//             {
//                 reverse(&s[front], &s[i]);
//                 front = i+1;
//             }
//         }
//         return s;
        
        
        
   
        
        
        
        
        
        
    }
};