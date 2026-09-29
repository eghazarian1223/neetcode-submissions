class Solution {
public:
   int lengthOfLongestSubstring(string s) {
       unordered_set<char> charSet;
       int l = 0;
       int longest_substring_len = 0;

       for (int r = 0; r < s.size(); ++r) {
           while (charSet.find(s[r]) != charSet.end()) {
               charSet.erase(s[l]);
               ++l;
           }
           charSet.insert(s[r]);
           longest_substring_len = max(longest_substring_len, r - l + 1);
       }
       return longest_substring_len;
   
   }

};