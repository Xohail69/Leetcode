class Solution {
public:
    int threeSumMulti(vector<int>& a, int target) {
//         int n = a.size() ; 
//         sort(begin(a) , end(a) ) ; 
         int mod = 1e9 + 7  ; 
//         int ans(0) ; 
//         for(int i = 0 ;  i < n - 2 ; i++ ){
//             int t = target - a[i] ; 
//             int j = i + 1 , k = n-1 ;
//             while(j < k  ){
//                 if(a[j] + a[k ] == t ) {
//                     if(a[j] == a[k] ){
//                         ans = (ans + ((k-j)*(k-j+1)/2)%mod)%mod ;
//                         break ;
//                     }
//                     else {
//                         int l (1) , r (1) ;
//                         while(j+1 < k and a[j] == a[j+1] ) j++ , l++ ;
//                         while(k-1 >= j and a[k] == a[k-1] ) k-- , r++ ;
//                         ans += (l*r)%mod ;
//                         j++ , k-- ;
//                     }
//                 }
//                 else if(a[j] + a[k]  < t ) j++ ;
//                 else k-- ; 
//             }  
//         }
//          return ans ;

            
            
            
            //M2 using map
        unordered_map<int, long> c;
        for (int a : a) c[a]++;
        long res = 0;
        for (auto it : c)
            for (auto it2 : c) {
                int i = it.first, j = it2.first, k = target - i - j;
                if (!c.count(k)) continue;
                if (i == j && j == k)
                    res += c[i] * (c[i] - 1) * (c[i] - 2) / 6;
                else if (i == j && j != k)
                    res += c[i] * (c[i] - 1) / 2 * c[k];
                else if (i < j && j < k)
                    res += c[i] * c[j] * c[k];
            }
        return res %mod ;

            
//               long[] c = new long[101];
//         for (int a : A) c[a]++;
//         long res = 0;
//         for (int i = 0; i <= 100; i++)
//             for (int j = i; j <= 100; j++) {
//                 int k = target - i - j;
//                 if (k > 100 || k < 0) continue;
//                 if (i == j && j == k)
//                     res += c[i] * (c[i] - 1) * (c[i] - 2) / 6;
//                 else if (i == j && j != k)
//                     res += c[i] * (c[i] - 1) / 2 * c[k];
//                 else if (j < k)
//                     res += c[i] * c[j] * c[k];
//             }
//         return (int)(res % (1e9 + 7));
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    }
};