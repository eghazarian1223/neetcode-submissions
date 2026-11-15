class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();

        // dp[i] = number of ways to decode s[i...n-1]
        vector<int> dp(n + 1, 0);
        dp[n] = 1; // Empty suffix has one valid decoding

        for (int i = n - 1; i >= 0; i--) {
            // A code cannot start with 0
            if (s[i] == '0') {
                dp[i] = 0;
                continue;
            }

            // Decode s[i] as a single letter
            dp[i] = dp[i + 1];

            // Decode s[i] and s[i + 1] together if the number is 10-26
            if (i + 1 < n &&
                (s[i] == '1' ||
                 (s[i] == '2' && s[i + 1] <= '6'))) {
                dp[i] += dp[i + 2];
            }
        }

        return dp[0];
    }
};