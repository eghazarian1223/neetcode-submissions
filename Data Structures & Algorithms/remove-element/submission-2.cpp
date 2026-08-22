class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int non_val = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[non_val] = nums[i];
                ++non_val;
            }
        }
        return non_val;
        // o(n) time and space

    }
};