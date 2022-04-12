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
#define db1(x) 						  cout<<#x<<" = "<<x<<'\n'
#define db2(x,y) 					  cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<'\n'
#define db3(x,y,z) 				  cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<'\n'
#define rep(i, begin, end)  for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define p2darray(a, n, m)   rep(i, 0, n){rep(j, 0, m){cout<<a[i][j]<<" ";}cout<<endl;}
#define dv(v)        {cout<<#v<<" = [" ; for (auto x : v) cout << x << " , "; cout <<" ]"<< nl ; }
#define d2dv(v)       { cout<<#v<<":"<<nl ;  for (auto &x : v) { for (auto y : x) {	cout << y << " "; } cout << nl; }   }


    
    int Count_Ones(int i , int j , vector<vector<int>>& a ){
         int n = a.size() , m = a[0].size() ;
        int ans(0) ;
         
        if(j+1 < m and  a[i][j+1] ) ans++ ; //r
      
        if(j-1 >=0 and a[i][j-1] ) ans++ ; //l
        
        if(i+1 < n and a[i+1][j] ) ans++ ; //d
      
        if(i-1 >=0 and a[i-1][j] ) ans++ ; //u
      
        if(i-1 >=0 and j-1 >=0 and a[i-1][j-1] ) ans++ ;// ul
      
        if(i+1 < n and  j+1 < m and a[i+1][j+1] ) ans++ ; //dr
      
        if(i+1 < n and  j-1 >=0 and a[i+1][j-1] ) ans++ ; //dl
      
        if(i-1 >=0 and  j+1 < m and a[i-1][j+1] ) ans++ ; //ur
      
        return ans ;
    }
     int Count_Ones_New(int i , int j , vector<vector<int>>& a ){
         int n = a.size() , m = a[0].size() ;
        int ans(0) ;
         
        if(j+1 < m and  (a[i][j+1] == 1 or a[i][j+1] == 2) ) ans++ ; //r
      
        if(j-1 >=0 and( a[i][j-1] == 1 or a[i][j-1] == 2) ) ans++ ; //l
        
        if(i+1 < n and (a[i+1][j] == 1 or a[i+1][j] == 2) ) ans++ ; //d
      
        if(i-1 >=0 and (a[i-1][j] ==1 or a[i-1][j] == 2)) ans++ ; //u
      
        if(i-1 >=0 and j-1 >=0 and (a[i-1][j-1] ==1 or a[i-1][j-1]==2)  ) ans++ ;// ul
      
        if(i+1 < n and  j+1 < m and (a[i+1][j+1] ==1 or a[i+1][j+1] == 2)) ans++ ; //dr
      
        if(i+1 < n and  j-1 >=0 and (a[i+1][j-1] ==1 or a[i+1][j-1] ==2) ) ans++ ; //dl
      
        if(i-1 >=0 and  j+1 < m and (a[i-1][j+1] == 1 or a[i-1][j+1] == 2 )) ans++ ; //ur
      
        return ans ;
    }
    void gameOfLife(vector<vector<int>>& a ) {
        //TC - O(nm) SC - O(nm)
//     vector<vector<int>> b = a ; 
//         int n = a.size() , m = a[0].size() ;
//         for(int i = 0 ; i < n ; i++ ){
//             for(int j = 0 ; j < m ; j++ ) {
//                 int cnt = Count_Ones(i , j , b) ;
                
//                 if(a[i][j] ) {
//                     if(cnt <2 or cnt >3 ) a[i][j] = 0 ;
//                 }
//                 else if(cnt == 3 ) a[i][j] = 1 ;
//             }
//         }
        
        //M2 inplace in SC ->> O(1)
        
        
         int n = a.size() , m = a[0].size() ;
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ) {
                int cnt = Count_Ones_New(i , j , a) ;
                
                if(a[i][j] == 1 ) {
                    if(cnt <2 or cnt >3 ) a[i][j] = 2 ; //Marking newly dead as 2
                }
                else if(a[i][j] == 0 and cnt == 3 ) a[i][j] = 3 ; //Marking newly alive as 3
            }
        }
        //final modifications 2->0, 3->1
         for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ) {
                    a[i][j] %= 2 ;
            }
         }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};