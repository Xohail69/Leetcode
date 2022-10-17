class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Easy way
//         for(int i = m , j = 0  ; i<m+n and j<n ; j++ , i++){
//             nums1[i] = nums2[j] ;
            
//         } 
//         sort(nums1.begin() , nums1.end()) ;
        
        
        // two pointer but with extra space 
        // int i(0) , j(0) , k(0) ;
        // vector<int> v(m+n) ;
        // while(i<m and j<n){
        //     if(nums1[i]<nums2[j]) v[k++] = nums1[i++] ;
        //     else v[k++] = nums2[j++] ;
        // }
        // while(i<m){ v[k++] = nums1[i++] ; }
        // while(j<n){ v[k++] = nums2[j++] ; }
        // for(int i = 0 ; i<m+n ; i++){
        //     nums1[i] = v[i] ;
        // } 
        
        //Two pointer with inplace merging , so no extra space 
        int i(m-1) , j(n-1) , k(n+m-1) ;
        while(i>= 0 and j>=0){
            if(nums1[i] >= nums2[j]) nums1[k--] = nums1[i--] ;
            else nums1[k--] = nums2[j--];
        }
        while(j>=0){
            nums1[k--] = nums2[j--] ; 
        }
    
        
        while(j>=0)
            nums1[k--] = nums2[j--];
        
        
        
    }
};