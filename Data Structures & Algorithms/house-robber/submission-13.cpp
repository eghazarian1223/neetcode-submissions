class Solution {
public:
// retry then do delete earn

    int rob(vector<int>& nums) {
        vector<int> memo(nums.size(), -1);
        // index in memo + nums
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

        // rob or skip
        int rob = nums[i] + max_amount(nums, memo, i+2);
        // how know not to add nums[i]
        int skip = max_amount(nums, memo, i+1);
        return memo[i] = max(rob, skip);
    }

   

   
};