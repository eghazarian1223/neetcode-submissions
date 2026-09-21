class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int numValSubArrays = 0;
        int curSum = 0;
        unordered_map<int, int> prefixSums;
        prefixSums[0] = 1;
        for (int num : nums) {
            curSum += num;
            int diff = curSum - k;
            numValSubArrays += prefixSums[diff];
            ++prefixSums[curSum];
        }
        return numValSubArrays;
    }
};