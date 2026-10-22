class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        //int prevEnd = intervals[0][1];
        for (int i = 1; i < intervals.size(); ++i) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            int prevEnd = merged.back()[1];
            // no overlap
            if (start > prevEnd) {
                merged.push_back({start, end});
            }
            // there is overlap
            else {
                merged.back()[1] = max(prevEnd, end);
            }
        }
        return merged;
    }
};
