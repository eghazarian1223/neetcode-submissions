class Solution {
public:
// try both dp methods
// first top down
    int rob(vector<int>& nums) {
        vector<int> memo(nums.size(), -1);
        return max_amount(nums, memo, 0);
    }

    int max_amount(vector<int>& nums, vector<int>& memo, int i) {
        if (i >= nums.size()) {
            return 0;
        }

        if (memo[i] != -1) {
            return memo[i];
        }
        
        int robCurrent = nums[i] + max_amount(nums, memo, i + 2);
        int skipCurrent = max_amount(nums, memo, i + 1);
        return memo[i] = max(robCurrent, skipCurrent);
    }
};