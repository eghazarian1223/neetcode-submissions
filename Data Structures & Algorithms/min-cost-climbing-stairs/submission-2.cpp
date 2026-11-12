class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> memo(cost.size(), -1);
        int i = 0;
        return min(min_cost_to_top(cost, memo, 0), min_cost_to_top(cost, memo, 1));
    }  

    int min_cost_to_top(vector<int>& cost, vector<int>& memo, int i) {
        if (i >= cost.size()) {
            return 0;
        }
        if (memo[i] != -1) {
            return memo[i];
        }


        return memo[i] = min(cost[i] + min_cost_to_top(cost, memo, i+1), cost[i] + min_cost_to_top(cost, memo, i+2));

    }
};
