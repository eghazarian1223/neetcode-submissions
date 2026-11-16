class Solution {
public:
    int numDecodings(string s) {
        vector<int> memo(s.size(), -1);
        int i = 0;
        return num_ways_decode(s, memo, i);
    }

    int num_ways_decode(string s, vector<int>& memo, int i) {
        // Successfully decoded the entire string
        if (i == s.size()) {
            return 1;
        }

        // Base case for leading 0
        if (s[i] == '0') {
            return 0;
        }

        if (memo[i] != -1) {
            return memo[i];
        }

        // Decode one digit
        int ways = num_ways_decode(s, memo, i + 1);

        // Decode two digits if they form a valid letter
        if (i + 1 < s.size() &&
            (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6'))) {
            ways += num_ways_decode(s, memo, i + 2);
        }

        return memo[i] = ways;
    }
};