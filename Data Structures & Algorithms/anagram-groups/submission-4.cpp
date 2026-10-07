class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grouped_anagrams;
        for (const auto& str : strs) {
            vector<int> count(26, 0);
            for (const auto& c : str) {
                // how does it know a certain position in count is a letter
                ++count[c - 'a'];
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ", " + to_string(count[i]);
            }
            grouped_anagrams[key].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& pair : grouped_anagrams) {
            result.push_back(pair.second);
        }
        return result;
    }
};