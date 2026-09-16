class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // time o(n), o(3n) -> o(n)
        // space o(n) o(3n) - > o(n)
        vector<int> res(nums.size());
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        // build prefix
        // first elem 1 bc nothing precedes first element so wanna have it established
        prefix[0] = 1;
        for (int i = 1; i < nums.size(); ++i) {
            prefix[i] = nums[i - 1] * prefix[i - 1];
        }

        // build suffix
        suffix[nums.size()-1] = 1;
        for (int i = nums.size() - 2; i >= 0; --i) {
            suffix[i] = nums[i+1] * suffix[i+1];
        }

        for (int i = 0; i < nums.size(); ++i) {
            res[i] = prefix[i] * suffix[i];
        }

        return res; 
 
    }
};
