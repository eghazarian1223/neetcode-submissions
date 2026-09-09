class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // modifying nums 1 in place
        // create var for last valid elem in nums1
        // compare that elem with first elem nums2
        // last valid > that nums2 elem vs <
        int last = m - 1;
        while (m > 0 && n > 0) {
            if (nums1[last] > nums2[n-1]) {
                nums1[m+n-1] = nums1[last];
                --m;
                --last;
            }
            // < or = 
            else {
                nums1[m+n-1] = nums2[n-1];
                --n;
            }
        }
        // still need the first two spots added
        while (n > 0) {
            nums1[n-1] = nums2[n-1];
            --n;
        }
    }
};