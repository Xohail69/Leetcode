/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
//     private :
//        vector<int> ans ; int i = 0 ;
//         void flat(NestedInteger &x ){
//             if(x.isInteger()) 
//                 ans.push_back(x.getInteger() ) ;
//             else {
//                 for(auto &y : x.getList() )
//                     flat(y) ;
//             }
//         }
    
// public:
//   NestedIterator(vector<NestedInteger> &nestedList) {
//         for(auto &x : nestedList ){
//             flat(x) ;
//         }
//     }
    
//     int next() {
//         return ans[i++] ;
//     }
    
//     bool hasNext() {
//         return i < ans.size() ;
//     }
    
    
    
    
    public :
     stack<vector<NestedInteger>::iterator> Start, End; // stores iterators to start & end of nested lists
    NestedIterator(vector<NestedInteger> &nestedList) {
        Start.push(begin(nestedList)); // only storing the iterator to start of nestedList
        End.push(end(nestedList));     // required to detect if we reached end of nestedList
    }
    // will only return the next integer and increment the iterator
    int next() {
        return Start.top()++ -> getInteger();
    }
    /*  before next() is called, each time hasNext will make sure there exists a integer to return
		If there exists, it will make sure that top of stack points to it.
		If stack size becomes empty, all of nestedList is traversed
	*/
	    bool hasNext() {        
        while(size(Start)){			
            auto top = Start.top();            
			// If it is end of one of nested list, pop that list, so we can iterate over the next one
            if(Start.top() == End.top()){
                Start.pop(), End.pop();
                continue;
            }                
            if(top -> isInteger()) break;
			// if top is not integer, then it is definately a list
			// First increment top of stack, so we know that all integers uptill(including top list) now have been traversed
			// and then push the start iterator of top into stack, so that we traverse that one next
            Start.top()++;
            Start.push(begin(top -> getList()));  
            End.push(end(top -> getList()));
        }
		// true will only be returned when stack top holds iterator of next integer
        return size(Start); 
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */