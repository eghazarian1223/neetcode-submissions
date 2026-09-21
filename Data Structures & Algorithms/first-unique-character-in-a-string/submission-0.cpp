class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> char_to_freq;
        for (int i = 0; i < s.size(); ++i) {
            // char not in map
            ++char_to_freq[s[i]];
        }
        for (int i = 0; i < s.size(); ++i) {
            if(char_to_freq[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};