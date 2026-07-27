#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        // sizes differ cannot be anagram
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> s_hash;
        unordered_map<char, int> t_hash;
        // build the maps
        for (int i = 0; i < s.size(); ++i) {
            // if char in hash
            if (s_hash.find(s[i]) != s_hash.end()) {
                ++s_hash[s[i]];
            }
            // not in
            else {
                s_hash[s[i]] = 1;

            }
        }
        for (int j = 0; j < t.size(); ++j) {
             // if char in hash
            if (t_hash.find(t[j]) != t_hash.end()) {
                ++t_hash[t[j]];
            }
            // not in
            else {
                t_hash[t[j]] = 1;
            }
        }
        // same size diff freq of char , not anagram
        return s_hash == t_hash;
    }
};
