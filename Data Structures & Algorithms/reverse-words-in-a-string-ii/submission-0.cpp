class Solution {
public:
    void reverseWords(vector<char>& s) {
        reverse(s.begin(), s.end());
        int start = 0;
        int end = 0;
        int n = s.size();
        while (start < n) {

            // Find the end of the current word
            while (end < n && s[end] != ' ') {
                ++end;
            }
        
            // Reverse the current word
            reverse(s.begin() + start, s.begin() + end);

            // Move to beginning of next word
            ++end;
            start = end;
        }
        
    }
};
