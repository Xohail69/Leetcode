// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public  :
using lli = long long int ; 
typedef vector<vector<lli>> matrix ; 
const int mod = 1e9 + 7 ;


matrix mulMat(matrix a  , matrix b ){
    //this function multiplies two matrices 
    matrix ans(2 , vector<lli > (2  , 0 ) ) ;
    int size = a.size() ; 
    for(int i = 0 ;i < a.size() ; i++ ){
        for(int j = 0 ; j < b.size() ; j++ ){
            for(int k = 0 ; k < b.size() ; k++ ){
                ans[i][j] = (ans[i][j] + a[i][k] * b[k][j] )%mod ;
            }
        }
    }
    return ans ; 
}


matrix matExp(matrix poweredBase , lli n ){
    //returns a matrix power to n 
    if(n == 1 ) return poweredBase ;
    lli half = n / 2 ; 
    matrix ans(2 , vector<lli>(2, 0 ) ) ; 
    ans = matExp(poweredBase , half ) ; 
    ans =  mulMat(ans , ans ) ; 
    if(n % 2 == 0 ) return ans ; 
    else {
        ans = mulMat(ans , poweredBase ) ;
        return ans ; 
    }
}

    int FindNthTerm(long long int n) {
        // Code here
        if(n == 0 or n == 1 ) return 1 ; 
        matrix base(2 , vector<lli> (2 , 0 ) )  ; 
        base[0][0] = 1 ; 
        base[0][1] = 1 ; 
        base[1][0] = 1 ; 
        base[1][1] = 0 ; 
        matrix initial(2 , vector<lli> (1 , 0 )  ) ; 
        initial[0][0] = initial[1][0] = 1 ; 
        matrix poweredBase = matExp(base , n - 1 ) ; 
        matrix result = mulMat(poweredBase , initial ) ; 
        return result[0][0] ; 
        
        
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int n;
		cin >> n;
		Solution obj;
		int ans = obj.FindNthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends