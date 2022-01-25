class Solution {
public:
    bool validMountainArray(vector<int>& a) {
    //Let's walk up from left to right until we can't: that has to be the peak. We should ensure the peak is not the first or last element. Then, we walk down. If we reach the end, the array is valid, otherwise its not.
        int n = a.size()  , i = 0 ; 
        //walk up 
        while(i+1 < n and a[i] < a[i+1] ) i++ ;
        
        //peak can't be first or last 
        if(i == 0 or i == n-1) return 0 ;
        
        //walk down 
        while(i + 1 < n and a[i] > a[i+1] ) i++ ;
        return i == n-1 ;
        
        
        
        
//         As, we know there will be only one peak element thus, we will have a mountain array of this sort :
// A[i] < A[i+1] .... PEAK ELEMENT ... A[j] > A[j+1]
// <--- LEFT HALF ---> __________ <--- RIGHT HALF --->

// So, if we start moving from both the ends, we should end up stopping at the peak element if the array follows the mountain property.
//     We will have two pointers L and R.
// Check Strictly Increasing from left
// Check Strictly Increasing from right.
// Check if L == R. ( both stops at peak element )
    
    
    
//      if(a.size() < 3) return false;
		
//         int n = a.size() , L = 0, R = n-1;
//         while(L < n-1) {
//             if(a[L] < a[L+1]) L++;
//             else break;
//         }
        
//         if(L == n-1) return false; // only strictly increasing -> 0 1 2 5 6 8 9
        
//         while(R > 0) {
//             if(a[R] < a[R-1]) R--;
//             else break;
//         }
//         if(R == 0) return false; // only strictly decreasing -> 9 6 5 3 2 1 0
//         return L == R;
        
        
        
        
        
        
//         Two people climb from left and from right separately.
// If they are climbing the same mountain,
// they will meet at the same point.
//        int n = A.size(), i = 0, j = n - 1;
//         while (i + 1 < n && A[i] < A[i + 1]) i++;
//         while (j > 0 && A[j - 1] > A[j]) j--;
//         return i > 0 && i == j && j < n - 1;


        
    }
};