class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> memo(nums.size(), -1);
        int i = 0;
        return max_amount(nums, memo, i);

    }

    int max_amount(vector<int>& nums, vector<int>& memo, int i) {
        if (i >= nums.size()) {
            return 0;
        }

        if (memo[i] != -1) {
            return memo[i];
        }

        int rob = nums[i] + max_amount(nums, memo, i+2);
        int skip = max_amount(nums, memo, i+1);
        return memo[i] = max(rob, skip);

    }

};