class Solution {
public:
    int strStr(string haystack, string needle) {
        // variables for both strings
        int hay_len = haystack.length();
        int need_len = needle.length();

        // go through haystack
        for (int i = 0; i < hay_len - need_len + 1; ++i) {
            int j = 0;
            while (j < need_len) {
                if (haystack[i+j] != needle[j]) {
                    break;
                }
                ++j;
                if (j == need_len) {
                    return i;
                }
            }
        }
        return -1;
    }
};