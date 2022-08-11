class Solution {
public:
    int arithmeticTriplets(vector<int>& a, int diff) {
        
        //M1 BF
//         int ans = 0 ; 
//         for(int i = 0 ; i < a.size()  ; i++ ){
//             for(int j = i + 1 ; j < a.size()  ; j++ ){
//                  if(a[j] - a[i] == diff ){
//                 for(int k  = j + 1 ; k < a.size() ; k++ ){
//                     if(a[k] - a[j] == diff )
//                         ans++ ; 
//                 }
//                  }
//             }
//         }
//         return ans ;
        
        
        
        
        
        
        
        //M2
//         O(N) space and O(N) Time :

// Simply first store all the elements of array in a map or a set.
// Now again traverse the array and see for every element say 'x', if there are two more elements present in map i.e x+diff and x-diff.
// If present then increment the count by 1.
// Return the count variable.
        
        
        
        unordered_set<int> s(begin(a) , end(a) ) ; 
        int cunt (0) ; 
        for(auto x : a ){
            if(s.count(x-diff) and s.count(x + diff )) 
                cunt++ ; 
        }
        return cunt ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};