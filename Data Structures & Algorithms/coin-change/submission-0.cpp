class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> memo(amount + 1, -1);
        int result = fewest_num_coins(coins, memo, amount);

        if (result > amount) {
            return -1;
        }

        return result;
    }

    int fewest_num_coins(vector<int>& coins, vector<int>& memo, int amount) {
        if (amount == 0) {
            return 0;
        }

        if (memo[amount] != -1) {
            return memo[amount];
        }

        int fewest = amount + 1;

        for (int i = 0; i < coins.size(); ++i) {
            if (coins[i] <= amount) {
                int sub_res = fewest_num_coins(coins, memo, amount - coins[i]);

                if (sub_res <= amount - coins[i]) {
                    fewest = min(fewest, 1 + sub_res);
                }
            }
        }

        return memo[amount] = fewest;
    }
};