class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        
//         if(A.size() < 3 ) return A.size() ;
//          int idx = 2;
//         for (int j = 2; j < A.size( ) ; j++)
//             if (A[j] != A[idx-2])
//                 A[idx++] = A[j];
//         return idx;
        
        
        
        
        
        
        
        
        
//         You can think of this as a "two pointers" solution:

// one pointer that processes all the numbers - you have to visit each number to check its value, in this case it's his for(int n : nums)
// one pointer that keeps track of the number of values that have been added, in this case i or the length of the array so far.
// You take advantage of the sorted nature of the array and only add the number/increment the length iff the current number you're visiting is greater than the number at i-2 to avoid more than 1 duplicate
        
        
    
    
//     The two pointers i and n start at the same time and point to a position. When the current value does not need to be larger than the previous one, it means that 3 are present.
// Or more than 3 identical values, at this time the if condition is not satisfied, i stays in the unsatisfied position, waiting for the next larger number to be replaced, when the next larger one appears
// The number again satisfies the if condition, replacing the position pointed to by i with the number, i pointing to the next waiting for replacement, and the if condition is again used to detect the replacement.
// The number is guaranteed to not appear more than two repetitions.
        
        
         int i = 0;
    for (int n : A)
        if (i < 2 || n > A[i-2])
            A[i++] = n;
    return i;
        
        
        
        
        
        
        
    }
};