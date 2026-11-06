class Solution {
public:

    int climbStairs(int n) {
        vector<int> memo(n+1);
        return num_dist(n, memo);
    }

    // helper for getting num of distinct ways
    int num_dist(int i, vector<int>& memo) {
        // to prevent negative slices, stop at 0
        if (i == 0 || i == 1) {
            return 1;
        }
        if (memo[i] != 0) {
            return memo[i];
        }
        
        else {
            return memo[i] = num_dist(i-1, memo) + num_dist(i-2, memo);
        }

    }
};