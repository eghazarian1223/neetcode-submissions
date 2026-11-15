class Solution {
public:

    int climbStairs(int n) {
        vector<int> memo(n);
        int i = 0;
        return num_dist(n, memo, i);
    }
    int num_dist(int n, vector<int>& memo, int i) {
        // not valid bc past n
        if (i > n) {
            return 0;
        }
        // when reach top that is valid path
        if (i == n) {
            return 1;
        }


        // return dist way
        if (memo[i] != 0) {
            return memo[i];
        }
        return memo[i] = num_dist(n, memo, i+1) + num_dist(n, memo, i+2);
    }

};