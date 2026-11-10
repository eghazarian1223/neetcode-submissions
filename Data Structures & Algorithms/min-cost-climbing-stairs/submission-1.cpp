class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // i knew we had two paths to explore but i didnt know why dp
        // why exactly do we want to store these
        vector<int> minimum_costs(cost.size(), -1);
        int i = 0;
        return min(min_cost(cost, minimum_costs, 0), min_cost(cost, minimum_costs, 1));
       
    }

    int min_cost(vector<int>& cost, vector<int>& minimum_costs, int i) {
        if (i >= cost.size()) {
            return 0;
        }
        if (minimum_costs[i] != -1) {
            return minimum_costs[i];
        }

        return minimum_costs[i] = min(cost[i] + min_cost(cost, minimum_costs, i+1), cost[i] + min_cost(cost, minimum_costs, i+2));

    }

  
};
