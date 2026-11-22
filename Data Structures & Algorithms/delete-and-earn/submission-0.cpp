class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int largest = *max_element(nums.begin(), nums.end());

        vector<int> points(largest + 1, 0);
        for (int num : nums) {
            points[num] += num;
        }

        vector<int> memo(largest + 1, -1);
        int i = 1;
        return greatest_score(points, memo, i);
    }

    int greatest_score(vector<int>& points, vector<int>& memo, int i) {
        if (i >= points.size()) {
            return 0;
        }

        if (memo[i] != -1) {
            return memo[i];
        }

        return memo[i] = max(
            points[i] + greatest_score(points, memo, i+2),
            greatest_score(points, memo, i+1)
        );
    }
};
