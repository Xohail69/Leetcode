class Solution {
public:
    int findJudge(int n, vector<vector<int>>& a ) {
        
       
	// count[i] represents trust score of i th person
	// count[i] = number of persons trusts him - number of persons he trusts.
	// Now, traverse through given array. 
	// a, b = a trusts b.
	// if a person trusts others,
	// then decrease his score by 1. i.e, arr[a]--
	// if a person is trusted by others, 
	// then increase his score by 1. i.e, arr[a]++
	// At last traverse through each person,
	// if anyone found with N - 1 trusts,
	// then return his index.
	// if not found, return -1
        
        
        //another explanation
        //Consider trust as a graph, all pairs are directed edge.
// The point with in-degree - out-degree = N - 1 become the judge.
//         If a person A trust other person B then we can see it as directed edge from A to B ( A --> B ) and so here edge is coming out of A and going into B.
// So increase the oudegree (or decrease the indegree) of A and increase indegree of B.
// So here we can observe that if 5 person trust B then indegree of B will be 5 and if B trust 2 other person the its outdgeree will be 2 i.e., net indegree will be 5 - 2 = 3.
// And to become the town judge we know that judge can not have trust on any other person so outdegree of judge = 0 and every other person trust the judge so indegree of judge = n-1.
// Hence we can say that judge will be the person for which we have indegree - outdegree = n-1.
// Explanation:
// Count the degree, and check at the end.

// Time Complexity:
// Time O(T + N), space O(N)
        vector<int>count (n+1 , 0 ) ;
        for( auto &t : a ) {
            count[t[0]]-- ;
            count[t[1]]++ ;
        }
        for(int i = 1 ; i <=n ; i++ ) {
            if(count[i] == n-1 ) return i ; 
        }
        return -1 ;
        
    }
};