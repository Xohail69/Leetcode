class Solution {
public:
    int minSetSize(vector<int>& arr) {
//         map<int,int> m ; 
//         for(auto x : arr ) m[x]++ ; 
//         priority_queue<int> q(m.begin() , m.end() ) ; 
//         // for(auto &[f , s ] : m ){
//         //     q.push(s)
//         // }
        
        
        
           unordered_map<int, int> cnt;
        for (int x : arr) ++cnt[x];
        
        vector<int> frequencies;
        for (auto [_, freq] : cnt) frequencies.push_back(freq);
        sort(frequencies.begin(), frequencies.end());
        
        int ans = 0, removed = 0, half = arr.size() / 2, i = frequencies.size() - 1;
        while (removed < half) {
            ans += 1;
            removed += frequencies[i--];
        }
        return ans;
        
    }
};