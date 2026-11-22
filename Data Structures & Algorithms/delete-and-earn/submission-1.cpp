class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        // why need largest
        int largest = *max_element(nums.begin(), nums.end());
        vector<int> points(largest+1);
        for (int num:nums) {
            points[num] += num;
        }

        vector<int> memo(largest+1, -1);
        int i = 1;
        return greatest_total(points, i, memo);

    }

    int greatest_total(vector<int>& points, int i, vector<int>& memo) {
        if (i >= points.size()) {
            return 0;
        }

        if (memo[i] != -1) {
            return memo[i];
        }

        return memo[i] = max(points[i] + greatest_total(points, i+2, memo), greatest_total(points, i+1, memo));

    }



};
