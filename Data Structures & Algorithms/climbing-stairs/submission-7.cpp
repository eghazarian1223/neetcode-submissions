class Solution {
public:

    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);
        int i = 0;
        return num_dist(n, memo, i);
    }

    int num_dist(int n, vector<int>& memo, int i) {
        if (i > n) {
            return 0;
        }
        if (i == n) {
            return 1;
        }
        if (memo[i] != -1) {
            return memo[i];
        }

        return memo[i] = num_dist(n, memo, i+1) + num_dist(n, memo, i+2);
    }

};