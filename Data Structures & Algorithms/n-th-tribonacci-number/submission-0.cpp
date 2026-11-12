class Solution {
public:
    int tribonacci(int n) {
        vector<int> memo(n + 1, -1);
        return tn_val(memo, n);
    }

    int tn_val(vector<int>& memo, int i) {
        if (i == 0) return 0;
        if (i == 1 || i == 2) return 1;

        if (memo[i] != -1) {
            return memo[i];
        }

        return memo[i] = tn_val(memo, i - 1)
                       + tn_val(memo, i - 2)
                       + tn_val(memo, i - 3);
    }
};