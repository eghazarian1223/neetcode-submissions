class Solution {
public:
    int tribonacci(int n) {
        vector<int> memo(n+1, -1);
        int i = n;
        return tn_value(memo, i, n);
      
    }

    int tn_value(vector<int>& memo, int i, int n) {
        if (i == 0) {
            return 0;
        }

        if (i == 1 || i == 2) {
            return 1;
        }

        if (memo[i] != -1) {
            return memo[i];
        }

        return memo[i] = tn_value(memo, i-3, n) + tn_value(memo, i-2, n) + tn_value(memo, i-1, n);

    }
  
};