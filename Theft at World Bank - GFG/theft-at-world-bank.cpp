// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
bool IsSquare(int n) {
     
    // If ceil and floor are equal
    // the number is a perfect
    // square
    double t = sqrt(n) ;
    if (ceil(t) == floor(t) ) {
        return 1 ; 
    }
    else {
        return 0 ; 
    }
}
 
	#define l long 
	#define d double 
	long double maximumProfit(int n, long long C, vector<long long> w, vector<long long> p){
	    // Code here.
	
	vector<pair<l d , l l >> maal(n) ;
	for(int i = 0 ; i < n ; i++ ){
	    maal[i] = {p[i] , w[i] } ;
	}
	sort(maal.begin() , maal.end() , [&](pair<l d , l l> &p1 , pair<l d , l l > &p2){
	    return (p1.first/p1.second) > (p2.first/p2.second) ;
	}  ) ;
	
	l d ans = 0 ; 
	for(int i = 0 ; i < n and C > 0 ; i++ ){
	    if(IsSquare(maal[i].second)) continue  ;
	    if(C >= maal[i].second){
	        ans += maal[i].first ;
	        C -= maal[i].second ;
	    }
	    else{
	        ans += (maal[i].first/maal[i].second)*C ;
	        C = 0 ;
	    }
	}
	return ans ; 
	
	
	
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends