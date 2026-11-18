class Solution {
public:


   int climbStairs(int n) {
    if (n <= 1) return 1;
    vector<int> dp(n);
    dp[0] = 1;  // 1 stair: 1 way
    dp[1] = 2;  // 2 stairs: 2 ways

    for (int i = 2; i < n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n - 1];
   }


};
