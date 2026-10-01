class Solution {
public:
   int lengthOfLongestSubstring(string s) {
      int length = 0;
      int l = 0;
      unordered_set<int> charSet;
      for (int r = 0; r < s.size(); ++r) {
         while (charSet.find(s[r]) != charSet.end()) {
            charSet.erase(s[l]);
            ++l;
         }
         charSet.insert(s[r]);
         length = max(length, r-l+1);

      }
      return length;
   }
};