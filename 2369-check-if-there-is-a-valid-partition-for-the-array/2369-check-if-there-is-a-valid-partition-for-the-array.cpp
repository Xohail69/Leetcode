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
    
    
    
    
    
  bool solve(vector<int>&a , int i , vector<int> &dp  ){
      
      
      
      int n = a.size() ; 
      //case 1 
      
      
      if(n == i ) return 1 ;
      if(dp[i] != -1 ) return dp[i] ; 
      if(i+1 < n and  a[i] == a[i+1]){
         if( solve(a , i +2 , dp ) ){
             return dp[i] =  1 ; 
         }
          
          //case 2
          if(i+2 < n and a[i+1] == a[i+2] ){
              if(solve(a , i + 3 , dp ) ) 
                 return dp[i] = 1 ; 
          }
          
      }
      
      if(i+2 < n and ( a[i+1] == 1 + a[i] ) and a[i+2] == (a[i] + 2) ){
          if(solve(a , i +3 , dp ) ) 
            return dp[i] =  1 ;
      }
      
      
      return dp[i] = 0 ; 
        
      
  } 
      
      
      
    bool validPartition(vector<int>& a ) {
       vector<int> dp (a.size() , -1 ) ; 
        return solve(a , 0  , dp ) ; 
        
        
        
    }


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};