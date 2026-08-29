class Solution {
public:
    vector<int> intersection(vector<int>& nums1, 
    vector<int>& nums2) {
        // create empty array
        vector<int> intersection;
        unordered_set<int> unique;
        // loop through nums 1 and nums 2
        // separate loops to acct for diff sizes
        for (int i = 0; i < nums1.size(); ++i) {
            // elem in nums1 not in set
            if (unique.find(nums1[i]) == unique.end()) {
                unique.insert(nums1[i]);
            }
        }
        for (int j = 0; j < nums2.size(); ++j) {
            // elem in nums2 is in set
            if (unique.find(nums2[j]) != unique.end()) {
                intersection.push_back(nums2[j]);
                unique.erase(nums2[j]);
            }

        }
        return intersection;
    }
};