class Solution {
public:
// 1 or 2 steps at a time
// return num dist ways to climb to top
// n = 2
// 1+1=2
// 2=2
// two ways 


   int climbStairs(int n) {
    if (n==1) {
        return 1;
    }
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
       dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
   }

};
