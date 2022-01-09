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




    bool isRobotBounded(string instructions) {
        
//         //If robot is facing up --> [dx, dy] = [0,1] --> Turning to the right --> robot is now facing right --> [1,0]
// If robot is facing right--> [dx,dy] = [1,0] --> Turning right --> robot is now facing down --> [dx,dy] = [0,-1]
// If robot is facing down --> [dx,dy] = [0,-1] --> Turning right --> robot is facing left --> [dx,dy] = [-1,0]
// If robot is facing down --> [dx,dy] = [-1,0] --> Turning right --> robot is now facing up --> [dx,dy] = [0,1]
//         If the robot starts with facing
// right, it moves [dy, -dx];
// left, it moves [-dy, dx];
// down, it moves [-dx, -dy]
        
        
        
        
        
        int x(0) , y(0) , dx(0) , dy(1) ;
        for(auto s : instructions ) {
            if(s == 'G') {
                 x += dx ;
                y += dy ;
            }
            else if(s == 'L' ) {
                int t = dx ;
                dx = -dy ;
                dy = t ;
            }
            else if(s == 'R' ) {
                int t = dx ;
                dx = dy , dy = -t ;
            }
        }
      
        return (x == 0 and y == 0) or !(dx == 0 and dy == 1) ;
        
        
        
        //M2
        //Starting at the origin and face north (0,1),
// after one sequence of instructions,

// if robot return to the origin, he is obvious in an circle.
// if robot finishes with face not towards north,
// it will get back to the initial status in another one or three sequences.
//     (x,y) is the location of robot .
// d[i] is the direction he is facing.
// i = (i + 1) % 4 will turn right
// i = (i + 3) % 4 will turn left
// Check the final status after instructions.
        // We first define a 2-dementional array dirs = {{0,1}, {1,0}, {0,-1}, {-1,0}} to represent north, east, south and west in order, and also treat dirs as a cyclic array
        
//         int x , y , i ;
//         x = y = i = 0 ;
//         vector<vector<int>> d = { {0, 1} , { 1 , 0 } , {0 , -1 } , {-1 , 0 } } ;
//          for(auto s : instructions ) {
//              if(s == 'L' ) {
//                 i = (i + 3) % 4 ;
//             }
//             else if(s == 'R' ) {
//                 i = (i + 1 ) %4 ;
//             }
//              else x += d[i][0] , y += d[i][1] ;
//         }
        
//           return x == 0 && y == 0 || i > 0;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};