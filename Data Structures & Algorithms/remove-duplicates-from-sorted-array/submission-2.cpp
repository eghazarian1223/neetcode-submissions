class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // time o(n), space o(n) cuz set adds space
        int num_unique = 0;
        set<int> unique_elems;
        for (int i = 0; i < nums.size(); ++i) {
            if (unique_elems.find(nums[i]) == unique_elems.end()) {
                unique_elems.insert(nums[i]);
                nums[num_unique] = nums[i];
                ++num_unique; 
            }

        }
        return num_unique;
    }
};