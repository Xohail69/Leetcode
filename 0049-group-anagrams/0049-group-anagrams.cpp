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

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
         
//         //Time Complexity: O(n * (m * log(m)))
// where n is the total number of strings present in the vector and m is the maximum length of a string in the vector. Here, sorting the strings causes (m * log(m)) addition to the complexity.
// Space Complexity: O(n * m)
        
        vector<vector<string>> ans ;
       unordered_map<string , vector<string> > m ;
        int n = sz(strs) ;
        string temp ;
        rep( i , 0 , n ) {
            temp = strs[i] ;
            sort(all(strs[i])) ;
            m[strs[i]].pb(temp) ;
        }
        for(auto x : m ) ans.pb(x.s) ;
        return ans ;
        
        
        
        
   
        
        
// unordered_map<unordered_map<char, int> , vector<string> > bmap ;
//          vector<vector<string>> ans ;
//          int n = sz(strs) ;
//         for(auto &x : strs ) {
//             unordered_map<char , int>fmap ;
//             rep( i , 0 , n ) {
//                 char ch = x.at(i) ;
//                 fmap[ch]++ ;
                
//             }
//             if(bmap.count(fmap) == 0 ) {
//                 vector<string> v ;
//                 v.pb(x) ;
               
//                 bmap[fmap] = v  ;
                 
//             }
//             else {
//                 vector<string> v = bmap[fmap] ;
//                 v.pb(x) ;
//             }
        
//         }
//         for(auto &y : bmap) ans.pb(y.s) ;
//         return ans ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};