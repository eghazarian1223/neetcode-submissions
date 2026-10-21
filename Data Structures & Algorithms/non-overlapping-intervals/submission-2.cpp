class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int prevEnd = intervals[0][1];
        int res = 0;
        for (int i = 1; i < intervals.size(); ++i) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            // overlap exists
            if (start < prevEnd) {
                ++res;
                prevEnd = min(end, prevEnd);
            }
            // no overlap
            else {
                prevEnd = end;
            }
        }
        return res;

    }
};
