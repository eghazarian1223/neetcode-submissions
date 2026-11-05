class Solution {
public:

    int climbStairs(int n) {
        vector<int> memo(n+1);
        // return how many ways to reach
        return helper(n, memo);
  
    }

    int helper(int n, vector<int>& memo) {
        if (n == 0 || n == 1) {
            // one way to reach
            return 1;
        }

        if (memo[n] != 0) {
            return memo[n];
        }

        return memo[n] = helper(n-1, memo) + helper(n-2, memo);

    }


   
};