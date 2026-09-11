class Solution {
public:
    // time o(n)
    // space o(1)
    int compress(vector<char>& chars) {
        int n = chars.size();
        int k = 0; 
        int i = 0;
        while (i < n) {
            chars[k++] = chars[i];
            int j = i + 1;
            while (j < n && chars[i] == chars[j]) {
                j++;
            }

            if (j - i > 1) {
                string cnt = to_string(j - i);
                for (char c : cnt) {
                    chars[k++] = c;
                }
            }
            i = j;
        }

        return k;
    }
};