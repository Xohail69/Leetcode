class NumMatrix {
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
  
    
    //vector<vector<int>> v ;
    vector<vector<int>> dp ;
    NumMatrix(vector<vector<int>>& mat) {
      // v = matrix ;
        
        
        
        // TC = SC = O(n*m)
//         The sum of the rectangle (0,0)->(i,j) is equal to the cell (i,j), plus the rectangle (0,0)->(i,j-1), plus the rectangle (0,0)->(i-1,j), minus the rectangle (0,0)->(i-1,j-1). We subtract the last rectangle because it represents the overlap of the previous two rectangles that were added.
//         https://leetcode.com/problems/range-sum-query-2d-immutable/discuss/1204168/JS-Python-Java-C%2B%2B-or-Easy-4-Rectangles-DP-Solution-w-Explanation
        
        
        
        int n = mat.size() , m = mat[0].size()  ;
    dp = vector<vector<int>> (n+1 , vector<int>(m+1 , 0 )) ;
        for(int i = 1 ; i <= n ; i++ ){
            for(int j = 1 ; j <= m ; j++ ){
                dp[i][j] = mat[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] ;
            }
        }

    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        
        //TLE 
        int  sum = 0  ;
        // for(int i = r1  ; i <= r2 ; i++  ){
        //     for(int j = c1 ; j <= c2 ; j++ ){
        //         sum += v[i][j] ;
        //      }
        // }
        // return sum ;
        
        r1++ , c1++ , r2++ , c2++ ;
        sum = dp[r2][c2] - dp[r2][c1-1] -dp[r1-1][c2] + dp[r1-1][c1-1] ; 
        return sum ;
        
        
        
        
        
        
        
        
        
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */