class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (nums[m] == target) {
                return m;
            }
            // is the left sorted
            if (nums[l] <= nums[m]) {
                // whereabouts of target
                if (target > nums[m] || target < nums[l]) {
                    l = m + 1;
                }
                else {
                    r = m - 1;
                }
            }

            // is right sorted
            else {
                // whereabouts of target
                if (target < nums[m] || target > nums[r]) {
                    r = m - 1;
                }
                else {
                    l = m + 1;
                }
            }

        }
        return -1;
        
    }
};