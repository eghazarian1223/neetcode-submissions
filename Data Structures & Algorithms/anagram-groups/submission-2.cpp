class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // map for freq of chars in a word mapped to the words that have it
        unordered_map<string, vector<string>> grouped_anagrams;
        for (const auto& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                ++count[c - 'a'];
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            grouped_anagrams[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& pair : grouped_anagrams) {
            result.push_back(pair.second);
        }
        return result;
    }
};