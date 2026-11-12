class Solution {
public:

    int climbStairs(int n) {
        vector<int> memo(n);
        int i = 0;
        return num_ways(memo, i, n);
       
    }

    int num_ways(vector<int>& memo, int i, int n) {
        if (i == n) {
            return 1;
        }
        if (i > n) {
            return 0;
        }
        if (memo[i] != 0) {
            return memo[i];
        }

        return memo[i] = num_ways(memo, i+1, n) + num_ways(memo, i+2, n);

    }

};