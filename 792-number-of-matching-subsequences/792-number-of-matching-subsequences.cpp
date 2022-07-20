struct Node {
    const string& word;
    int index;
    Node(const string &word, int index) : word(word), index(index) {}
};
class Solution {
public:
    
//     https://leetcode.com/problems/number-of-matching-subsequences/discuss/1290406/C%2B%2BJavaPython-Next-Letter-Pointers-Picture-explain-O(N-%2B-S)
    int numMatchingSubseq(const string& s, vector<string>& words) {
        vector<Node> buckets[26];
        for (string& word : words) {
            char startingChar = word[0];
            buckets[startingChar-'a'].emplace_back(word, 0);
        }
        int ans = 0;
        for (char c : s) {
            auto currBucket = buckets[c-'a'];
            buckets[c-'a'].clear();
            for (Node& node : currBucket) {
                ++node.index; // Point to next character of node.word
                if (node.index == node.word.size()) {
                    ++ans;
                } else {
                    buckets[node.word[node.index]-'a'].push_back(node);
                }
            }
        }
        return ans;
    }
};