class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> money_combos(nums.size(), -1);
        int i = 0;
        return max_money(nums, money_combos, i);
    }

    int max_money(vector<int>& nums, vector<int>& money_combos, int i) {
        if (i >= nums.size()) {
            return 0;
        }
        if (money_combos[i] != -1) {
            return money_combos[i];
        }
        
        int rob_current = nums[i] + max_money(nums, money_combos, i + 2);
        int skip_current = max_money(nums, money_combos, i + 1);
        
        return money_combos[i] = max(rob_current, skip_current);
    }
};