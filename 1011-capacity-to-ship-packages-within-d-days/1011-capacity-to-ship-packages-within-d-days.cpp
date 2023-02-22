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




    bool isPossible(vector<int>& w , int tot_cap , int days) {
        int curr_cap = 0 ; //current capacity 
        //tot_cap = toatal capacity 
        int d =1 ; //days taken 
        for(auto x : w) {
            curr_cap += x ;
            if(curr_cap > tot_cap) { // if our current cap is exceeded than our actual(total) capacity 
              
                curr_cap = x ; d++ ;
             
            }
        }
        return d<=days ;
    }
        
    int shipWithinDays(vector<int>& w, int days) {
        
        //Using BS in O(nlogn) 
        
        if(days == w.size() ) return *max_element(all(w)) ;
        
        // Here search space is the capacity 

// For h :  Think of a maximum weight ship can carry - This is the case if it has to carry all packages in a single day. It comes out to be total sum of all elements

// For l :  Think of a minimum weight ship can carry - This is the case if it has to carry single package everyday. So minimum weight comes out to be maximum of all elements


        
        
        int l = *max_element(all(w)), h = accumulate( all(w) , 0 ) , mid ;
        // mid is our potential capacity
        int ans = 0 ;
        while( l<=h ) {
          
            mid = l + (h-l)/2 ;
          
            if( isPossible(w , mid , days ) ) {
                ans = mid ; h = mid-1 ;
            }
            else l = mid + 1 ;
        }
        return ans ;
    }
};