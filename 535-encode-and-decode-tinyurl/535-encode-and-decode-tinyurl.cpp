class Solution {
public:

  // Encodes a URL to a shortened URL.
    //M1
//     string encode(string longUrl) {
//         string code;
//         if (url2code.find(longUrl) == url2code.end()) {
//             random_shuffle(alphabets.begin(), alphabets.end());
//             code = alphabets.substr(0, 6);
//             if (code2url.find(code) == code2url.end()) {
//                 code2url[code] = longUrl;
//                 url2code[longUrl] = code;
//             }
//         }
//         return "http://tinyurl.com/" + code;
//     }

//     // Decodes a shortened URL to its original URL.
//     string decode(string shortUrl) {
//         int p = shortUrl.find_last_of("/");
//         return code2url[shortUrl.substr(p + 1)];
//     }
// private:
//     string alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
//     unordered_map<string, string> url2code, code2url;
    
    
    
    
    
    //M2  using //https://en.wikipedia.org/wiki/Fowler–Noll–Vo_hash_function
     string encode(string longUrl) {
        long_to_short[longUrl] = "http://tinyurl.com/" + to_string(hash_function(longUrl));
        short_to_long[long_to_short[longUrl]] = longUrl;
        return long_to_short[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return short_to_long[shortUrl];
    }
    
private:
    
   
    uint64_t hash_function(const string& str) {
        uint64_t hash = 0x811c9dc5;
        uint64_t prime = 0x1000193;

        for(int i = 0; i < str.size(); ++i) {
            uint8_t value = str[i];
            hash = hash ^ value;
            hash *= prime;
        }

        return hash;
    }
    
    unordered_map<string, string> long_to_short;
    unordered_map<string, string> short_to_long;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));