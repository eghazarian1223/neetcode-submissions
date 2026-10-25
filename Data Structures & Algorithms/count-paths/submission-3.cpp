class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m == 1 || n == 1) {
            return 1;
        }
        vector<int> dp(m*n, 0);
        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                // top and left edge
                if (r == 0 || c == 0) {
                    dp[r * n + c] = 1;
                }
                else {
                    dp[r * n + c] = dp[(r - 1) * n + c] + dp[r * n + (c - 1)];

                }
            }
        }
        return dp[m * n - 1];
    
    }
};