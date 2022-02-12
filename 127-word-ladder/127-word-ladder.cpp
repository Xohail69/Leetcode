class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
//         How this is a graph Problem?

// If we assume each word as node and each tansformation as an edge then we have to just find the shortest path from a node to anthor node i.e from begin word to end word with all edges having weight as 1.
// So, if graph problem what we are going to use, DFS or BFS ?

// DFS is not used to find out the shortest distance in graph but only in TREES because we have unique paths between nodes in a TREE but we can have exponential number of unique paths between 2 nodes in a graph. So we will use BFS.
// You can refer to this codeforces blog also for better understnding -
// Why DFS can't be used for shortest distance on graph, but works on tree
// How we will Implement it?

// First we will store all the letters of wordList into a unordered set. It is used to decrease the final time complexity as find and erase will work in O(1) in unordered set.
// While inserting all the letters into the set, we will check whether the endWord is present in our wordList or not.If not,then return 0saying that this transformation is not possible.
// We will declare two variables named as depth and levelsize. Depth indicates the depth of the queue which we are exploring & levelsize indicates the how many nodes are their at a certain level of the graph.
// For BFS, we requiredqueue and intially we will push our beginWord into the our queue.
// Now, for each word into the queue we will replace each position with every alhapbet and look into our set that the word other than we replacing are present into our set or not.
// If yes, we will erase that word from the set and push it into our queue.
// If at any certain position we will find the same word as same as our endWord we will simply return depth + 1 as our answer because depth is the nothing but suggests us the queue which we are exploring.
// And at last, if we still not able to find our endWord we will return 0 as answer.
// I hope you got the basic idea how we will implement BFS, please see commented code for more clarification.
// Time Complexity --> O( 26 * n * n * w)
// where 26 represents that we are trying each possibility of alphabet
// first n is the length of word 
// anthor n for string compare and w for number of words.

// Space Complexity --> O(n) // we are using unordered set from our side
        
        
        
        
        
        
        
        
       std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        unordered_set<string> wordset ;
        bool isPresent = false ; // to find whether end word is present in word list or not
        // Inserting all words from wordList to wordSet
        for(auto &word : wordList ) {
            if(word.compare(endWord) == 0 ) // if end word is present in wordList
                isPresent = true ;
            wordset.insert(word) ;
        }
        if(isPresent == false ) return 0 ; 
        queue<string> q ; 
        q.push(beginWord) ;
        int depth = 0  ; 
        while( !q.empty() ) {
            depth++ ;
            int levelsize = q.size() ; // number of words present at a level
            while(levelsize-- ) {
                string word = q.front() ;
                q.pop() ;
                for(int i = 0 ; i< word.size() ; i++ ) {
                    string t = word ;
                     //checking out each possibility of alphabet
                    for(auto j = 'a'  ; j <= 'z' ; j++ ) {
                       t[i] = j ;
                        if( word.compare(t) == 0 ) continue ; // skipping the same word
                        if( t.compare(endWord) == 0 ) return depth+1 ; // if matches with end word
                        if( wordset.find(t) != wordset.end() ){   // if present in word set
                            q.push(t) ;
                            wordset.erase(t) ;
                        }
                    }
                }   
            }           
        }
        return 0 ;             
                 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};