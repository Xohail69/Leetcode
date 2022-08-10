class Solution {
public:
    typedef long long int ll ;
    long long minimumReplacement(vector<int>& a) {
        
        
        // https://leetcode.com/problems/minimum-replacements-to-sort-the-array/discuss/2388143/Python-Google-interview-problem-why-strategy-beats-implementation
        ll ans(0)  ;
        ll n=a.size() , next = 1e9 + 7 ; //next is the critical pt from where array starts decreasing , so we have to split the element just before next according to next 
        
        
        //Travelling from backwards greedily becuz 
// ex : 7 , 8 , 8 , 5 , 3 , 2 
//     5 is the point from where it is dec so lets split 5 a/c 3 
//     5 = 3 + 2 , 
//     but both 3 , 2 are smaller than initial elements 7 , 8 , 8  so we must split 
//         7 , 8 , 8 again . This process further keeps repeating on larger scale as we split more elements like 3 further . So the best we can do is move greedily 
//     from back word direction 
            
        
        
        //split part 
        //We must split such that every part must be less than or equal to our next element (according to which we are spliting )
    
        for(int j = n - 1 ; j >= 0 ; j-- ) {
            if(a[j] <= next ){
                next = a[j] ; 
                continue ; 
            }
            ll parts = ceil(a[j]/(double)next ) ; // minimum no. of elemetns nums[i] is divided such that every number is less than mxm and minimum is maximized
            ans += parts - 1 ; 
            next =  a[j]/parts ; 
        }
        return ans ; 
        
        
        
       
        
        
        
        
        
        
        
//        
        
        
        
    }
};