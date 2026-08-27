class Solution {
public:
    // o(logn) is binary search
    // then try the trivial o(n) one
    int search(std::vector<int>& nums, int target) {
        // need variables for left and right starting at opposite ends
        int left = 0;
        int right = nums.size() - 1;
        // go through nums and continue to cut search in half 
        while (left <= right) {
            int mid = (left + right) / 2;
            // account possbility that mid at same place as target indx
            if (nums[mid] == target) {
                return mid; 
            }
            // is the left side sorted normally?
            if (nums[left] <= nums[mid]) {
                // is target too big/small for that normal sorted range
                if (target > nums[mid] || target < nums[left]) {
                   left = mid + 1;
                }
                //proven target IS inside the value range of the sorted left half
                else {
                    right = mid - 1;
                }
            }
            // right side sorted normally
            else {
                if (target < nums[mid] || target > nums[right]) {
                   right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
        }
        return -1;
    }
};