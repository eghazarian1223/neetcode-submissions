#include <vector>
#include <set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> unique;
        for (int i = 0; i < nums.size(); ++i) {
            // if elem in the set alr
            if (unique.find(nums[i]) != unique.end()) {
                return true;
            }
            else {
                unique.insert(nums[i]);
            }
        }
        return false;
    }
};