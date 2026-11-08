class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> cost_combos(cost.size(), -1);
        int i = 0;
        return min(min_cost_top(cost, cost_combos, 0),
           min_cost_top(cost, cost_combos, 1));
    }

    int min_cost_top(vector<int>& cost, vector<int>& cost_combos, int i) {
        if (i >= cost.size()) {
            return 0;
        }
        if (cost_combos[i] != -1) {
            return cost_combos[i];
        }

        int path_one = cost[i] + min_cost_top(cost, cost_combos, i + 1);
        int path_two = cost[i] + min_cost_top(cost, cost_combos, i + 2);
        
        return cost_combos[i] = min(path_one, path_two);
        
    }
};
