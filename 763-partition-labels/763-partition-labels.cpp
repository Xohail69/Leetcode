class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        

// Fundamental idea is that if two instances of characters should be in the same partition.
// So, we start with the first character and see at what point we can finish the partition.
// The earliest we can do is at the last instance of this character.
// What if we find a character between the first character and the last instance of it?
// In this case, we increase the length of the partition. Why?
// If we do not increase the partition, the new character ends up into two partitions, which violates the constraint of the problem.
// If we have gone through all the characters between the start of partition and maximum of the last instance of characters, we can close the partition and start a new one.
// Runtime: O(n). We analyze each character twice.
// Memory: O(1). We use 26 elements for the algorithm. Additional memory is used to store the result; the algorithm does not need it.
        
        
        
        
        vector<int>last(26 , -1 ) ; //this will store the last occurrence index of each alphabet
        int n = s.size() ; 
        for(int i = 0 ; i < n ; i++  ){
            last[s[i] - 'a' ] = i ; 
        }
        int l = 0 , maxIdx = 0  ; //l is the last pr
        vector<int> ans ; 
        for(int r = 0 ; r < n ; r++ ){
            maxIdx = max(maxIdx , last[s[r] - 'a' ]) ;
            if(r == maxIdx ) {
                ans.push_back(r - l + 1 ) ; //pushing the partition size
                l = r + 1 ; // updating left pr
            }
        }
        return ans ; 
        
        
    }
};