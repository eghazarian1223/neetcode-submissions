class Solution {
public:
    // must do two ways
    int climbStairs(int n) {
        vector<int> memo(n, -1);
        int i = 0;
        return num_dist_ways(memo, i, n);

    }

    int num_dist_ways(vector<int>& memo, int i, int n) {
        if (i > n) {
            return 0;
        }
        // went through one way
        if (i == n) {
            return 1;
        }
        if (memo[i] != -1) {
            return memo[i];
        }

        return memo[i] = num_dist_ways(memo, i+1, n) + num_dist_ways(memo, i+2, n);

    }


};