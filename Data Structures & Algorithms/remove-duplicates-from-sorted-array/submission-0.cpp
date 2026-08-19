// sort in place
// return num of unique elems
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // create set
        set<int> unique;
        int k = 0;
        // loop through nums
        for (int i = 0; i < nums.size(); ++i) {
            // check if element not alr in set
            if (unique.find(nums[i]) == unique.end()) {
                unique.insert(nums[i]);
                // place unique element at position k
                nums[k] = nums[i];
                ++k;
            }
        }
        return k; 
    }
};