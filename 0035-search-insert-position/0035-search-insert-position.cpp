class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int l = 0  ,  h = a.size() - 1 ;
        int mid ;
        while(l<=h){
            mid = l + (h-l)/2 ;
            if(a[mid]==t) return mid ;
            if(a[mid] < t ) l = mid + 1 ;
            else h = mid - 1 ;
        }
        return l ;
    }
};