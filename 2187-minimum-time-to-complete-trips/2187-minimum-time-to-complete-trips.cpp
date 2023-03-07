class Solution {
public:
    #define db1(x) 						  cout<<#x<<" = "<<x<<'\n'
#define db2(x,y) 					  cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<'\n'
#define db3(x,y,z) 				  cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<'\n'
#define rep(i, begin, end)  for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define p2darray(a, n, m)   rep(i, 0, n){rep(j, 0, m){cout<<a[i][j]<<" ";}cout<<endl;}
#define dv(v)        {cout<<#v<<" = [" ; for (auto x : v) cout << x << " , "; cout <<" ]"<< nl ; }
#define d2dv(v)       { cout<<#v<<":"<<nl ;  for (auto &x : v) { for (auto y : x) {	cout << y << " "; } cout << nl; }   }

    
    long long minimumTime(vector<int>& time, int totalTrips) {
   

        
        
        long long low = 0, high = 1e16;
        while (low < high) {
            long long mid = (low + high) / 2;
            long long ans = 0;
            for (auto i: time) {
                ans += mid / i;
                if (ans > totalTrips)break;
            }

            if (ans >= totalTrips)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
        
        
        
        
        
    }
};