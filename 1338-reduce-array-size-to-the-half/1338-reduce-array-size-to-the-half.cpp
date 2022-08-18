class Solution {
public:
    int minSetSize(vector<int>& arr) {

        
//         Using HashMap to count the frequency of each numbers.
// Get array of the frequency, let name it frequencies.
// Sort frequencies in increasing order.
// We prioritize removing the numbers with the largest frequency first, until we've eliminated at least half of the arr.
// Return the number of numbers removed.
//            unordered_map<int, int> cnt;
//         for (int x : arr) ++cnt[x];
        
//         vector<int> frequencies;
//         for (auto [_, freq] : cnt) frequencies.push_back(freq);
//         sort(frequencies.begin(), frequencies.end());
        
//         int ans = 0, removed = 0, half = arr.size() / 2, i = frequencies.size() - 1;
//         while (removed < half) {
//             ans += 1;
//             removed += frequencies[i--];
//         }
//         return ans;
        
//         Time: O(NlogN)
//         Space: O(N)
        
        
        
        //Using counting sort 
           unordered_map<int, int> cnt;
        int n = arr.size() ; 
        for (int x : arr) ++cnt[x];
        vector<int>count(n + 1 , 0 ) ; 
        for(auto [_ , freq] : cnt ) {
            count[freq]++ ; 
        }
        
        int ans = 0 , removed = 0 , half = n/2 , f = n ; 
        while(removed < half ) {
          
           
            ans += 1;
            while (count[f] == 0) --f;
            removed += f ;
            --count[f];
            
            
            
         
        }
        return ans ; 
        
        
        
        
        
        
        
        
//         //Using priority queue 
//         unordered_map<int, int>mp;
//         priority_queue<int> pq;
// 		for(auto num : arr) mp[num]++;                  
//         for(auto [num, freq] : mp) pq.push(freq);
//         for(int deleted{}, ans{}; ;pq.pop()) {
//             deleted += pq.top(), ans++;
//             if(deleted >= size(arr) / 2) return ans;    
//         }
//         return -1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};