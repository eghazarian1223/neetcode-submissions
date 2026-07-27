#include <vector>
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            // if complement in array
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};  // smaller index first, guaranteed
            }
            // otherwise, add the
            mp[nums[i]] = i;  // insert current number *after* checking
        }
        return {};
    }
};